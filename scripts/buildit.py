#!/usr/bin/env python3
# Copyright (C) 2002-2025, The AROS Development Team. All rights reserved.

"""Build AROS website, offline HTML, and generated API documentation.

Run from the documentation repository root. Targets and languages are
selected through command-line arguments; ``clean`` removes generated
output under ``../bin/documentation`` and selected generated sources.
"""

import os
import sys
import shutil
import glob
import codecs
import subprocess

import db.credits.parse
import db.credits.format.rest
import db.tasks.parse
import db.tasks.format.html

from docutils.core import publish_parts
from docutils.core import Publisher
from docutils.io import NullOutput
from docutils.utils import SystemMessage

from build import utility
from build import thumbnail

from template.www import makeTemplates
from template.www import gallery

import autodoc

from jinja2 import Environment, FileSystemLoader
from jinja2 import TemplateSyntaxError

# Setup
DEFAULTLANG= 'en'
SRCROOT    = os.path.abspath('.')
DSTROOT    = os.path.abspath('../bin/documentation')

TEMPLATEPATH   = 'targets/www/'
TEMPLATEFILESTEM   = 'template.html.'

TEMPLATE_DATA = {}

# languages supported by docutils:
LANGUAGES  = ['en', 'de', 'cs', 'el', 'es', 'fi', 'fr', 'it', 'nl', 'pl', 'pt', 'ru', 'sv']
# languages not supported by docutils yet (but that we have files written in):
# 'no'
# Languages to build (defaults to LANGUAGES):
languages  = []

SITES = {
    'aros':     "aros",
    'dev':       "developers",
    'locale':      "translations"
}

targetsites = []
wwwtgt = None
STRICT_DOCUTILS = False

# Initialize Jinja2 environment to load templates from your source root
jinja_env = Environment(loader=FileSystemLoader(SRCROOT))

# altLang
# -------
# Returns the translation of the specified base name into the specified
# language, if it exists. Otherwise, returns the file name for DEFAULTLANG.

def altLang(base, lang, path='.'):
    """Select a translated ReST filename, falling back to English.

    Return a basename, not the complete source path. The fallback name
    is returned even if the English source is absent.
    """
    langfile = f"{base}.{lang}.rst"
    if not os.path.exists(os.path.join(path, langfile)):
        langfile = f"{base}.{DEFAULTLANG}.rst"

    return langfile


# pathAltLang
# -------
# Joins the result of altLang with the specified path.

def pathAltLang(base, lang, path='.'):
    """Join a directory path to the filename selected by ``altLang``."""
    return os.path.join(path, altLang(base, lang, path))


def recurse(function, path='.', depth=0):
    """Visit non-ignored files below a directory, passing depth to a callback.

    Invoke ``function(path, depth)`` for each file. The depth starts at
    zero and increments once for each directory level.
    """
    for name in os.listdir(path):
        name = os.path.join(path, name)

        if not utility.ignore(name):
            if os.path.isdir(name):
                recurse(function, name, depth + 1)
            else:
                function(name, depth)


def processPicture(src, depth):
    """Copy a JPEG or PNG source image and update its thumbnail if stale.

    ``depth`` is supplied by ``recurse`` but is not used.
    """
    FORMATS = ['jpg', 'jpeg', 'png']

    extension = os.path.splitext(src)[1][1:]
    if extension not in FORMATS:
        return

    src     = os.path.normpath(src)
    dst_abs = os.path.normpath(os.path.join(TRGROOT, src))
    src_abs = os.path.normpath(os.path.join(SRCROOT, src))
    dst_dir = os.path.dirname(dst_abs)

    tn_dst     = thumbnail.makeThumbnailPath(src)
    tn_dst_abs = os.path.normpath(os.path.join(TRGROOT, tn_dst))
    tn_dst_dir = os.path.dirname(tn_dst_abs)

    # Make sure the destination directories exist.
    utility.makedir(dst_dir)
    utility.makedir(tn_dst_dir)

    # Copy the original image over.
    utility.copy(src_abs, dst_abs)

    # Create the thumbnail.
    if utility.newer([src_abs], tn_dst_abs):
        print('> Thumbnailing', src)
        thumbnail.makeThumbnail(src_abs, tn_dst_abs, (200, 200))


# makePictures
# ------------
# Creates picture galleries.

def makePictures():
    """Generate the screenshot and developer-image galleries for each language.

    Copy source pictures, create thumbnails, and render gallery index pages
    under the current ``TRGROOT``.
    """
    DIRECTORIES = [
        'pictures/developers',
        'pictures/screenshots'
    ]

    options = ['--report=none']

    # First, copy the pictures and generate thumbnails
    for root in DIRECTORIES:
        recurse(processPicture, root)

    # Second, create the galleries
    for root in DIRECTORIES:
        for lang in languages:
            output = convertWWW(pathAltLang('index', lang, root), lang, options)

            names = os.listdir(root)
            names.sort()
            if root == 'pictures/screenshots':
                names.reverse()

            for name in names:
                path = os.path.join(root, name)
                if name == '.svn' or not os.path.isdir(path):
                    continue

                outstr = '\n<div class="gallerygroup">\n<a id="%s">\n' % name
                output += outstr
                output += convertWWW(pathAltLang('overview', lang, path), lang, options)

                pictureNames = os.listdir(path)
                pictureNames.sort()
                for pictureName in pictureNames:
                    picturePath = os.path.join(path, pictureName)
                    pictureFormat = os.path.splitext(pictureName)[1][1:]
                    if pictureName == '.svn' or os.path.isdir(picturePath):
                        continue
                    if pictureFormat not in ['jpg', 'jpeg', 'png']:
                        continue

                    outstr = gallery.makePicture(
                        picturePath,
                        convertWWW(pathAltLang(os.path.splitext(picturePath)[0], lang),
                                   lang, options), lang
                    )
                    output += outstr

                outstr = '</a>\n</div>\n'
                output += outstr

            if lang == DEFAULTLANG:
                strings = {
                    'ROOT'    : '../../',
                    'BASE'    : '../../',
                    'CONTENT' : output
                }
            else:
                strings = {
                    'ROOT'    : '../../../',
                    'BASE'    : '../../../',
                    'CONTENT' : output
                }

            filename = 'index.html'
            if lang == DEFAULTLANG:
                dst = os.path.join(TRGROOT, root)
            else:
                dst = os.path.join(TRGROOT, lang, root)
            if not os.path.exists(dst):
                utility.makedir(dst)
            open(os.path.join(dst, filename), 'w').write(TEMPLATE_DATA[lang] % strings)


# makeStatus
# ----------
# Creates graphs of component implementation status.

def makeStatus(extension='.html'):
    """Render localized HTML implementation-status pages from ``db/status``.

    ``extension`` selects the generated page suffix.
    """
    tasks = db.tasks.parse.parse(open('db/status', 'r'))
    for lang in languages:
        dstdir = 'introduction/status'
        if lang == DEFAULTLANG:
            dstdir = os.path.join(TRGROOT, dstdir)
        else:
            dstdir = os.path.join(TRGROOT, lang, dstdir)
        utility.makedir(dstdir)
        db.tasks.format.html.format(tasks, dstdir, TEMPLATE_DATA[lang], lang, extension)


# makeNews
# --------
# Creates ReST files for current and archived news.
# Returns True is files were created or False if no correct news files were found

def makeNews():
    """Update ReST news indexes and yearly archives from dated news sources.

    Write generated ReST files into the source tree when input files are
    newer. Return ``False`` when no English news entries are found.
    """
    NEWS_SRC_DIR = os.path.join(SRCROOT, 'news/data')
    NEWS_DST_DIR = os.path.join(SRCROOT, 'news/data')
    NEWS_SRC_INDX= os.path.join(SRCROOT, 'news/index.')
    NEWS_SRC_ARCH= os.path.join(SRCROOT, 'news/archive/')
    NOOFITEMS    = 5

    news     = {}  # Lists of news, per language, to determine the recent news
    archives = {}  # Lists of news, per year per language, to list news per year

    # Get list of news and archive items for each language
    # Initialise the languages
    for lang in languages:
        news[lang] = []
        archives[lang] = {}

    # Do all the year directories
    for yeardirname in os.listdir(NEWS_SRC_DIR):
        yeardirpath = os.path.join(NEWS_SRC_DIR, yeardirname)
        for lang in languages:
            archives[lang][yeardirname] = list()

        # Do all the news item files (originals) in a specific year directory
        for filename in os.listdir(yeardirpath):
            name = os.path.splitext(filename)[0]  # Strip .rst
            date, ext = os.path.splitext(name)    # Split remaining into date and language
            if ext == '.en' and len(date) == 8 and date.isdigit():
                year = date[:4]
                if year != yeardirname:
                    print('Error: News item "' + date + '" found in news year "' + yeardirname + '".')

                # Generate a recent news source list and year news source lists for each language
                for lang in languages:
                    lang_filepath = os.path.join(yeardirpath, altLang(date, lang, yeardirpath))
                    news[lang].append(lang_filepath)
                    archives[lang][year].append(lang_filepath)
                    # Disadvantage of this approach is that sorting the lists will have to compare entire paths.

    # Check whether we actually found any news (we test for DEFAULTLANG, but all news lists have the same length)
    if not len(news[DEFAULTLANG]):
        return False

    # Generate news and archive ReST files
    for lang in languages:
        news[lang].sort(reverse=True)
        current = news[lang][:NOOFITEMS]
        _dst = NEWS_SRC_INDX + lang + '.rst'

        # Set up translated title dictionary
        config = gallery.ConfigParser()
        with codecs.open(os.path.join('targets/www/template/languages', lang + '.txt'), 'r', encoding='utf-8') as configfile:
            config.read_file(configfile)
        _T = {}
        for option in config['titles']:
            _T[option] = config.get('titles', option)

        # Create a recent news page
        if utility.newer(current, _dst):
            output = open(_dst, 'w')
            output.write(utility.titleReST(_T['news']))
            for filepath in current:
                output.write(utility.htmlReST('   <a id="%s"></a>\n' % filepath[-15:-7])) # Not ideal, but at least legal HTML
                output.write(utility.drctReST('include', filepath))
            output.close()

        # Create year news pages
        for year in list(archives[lang].keys()):
            if len(archives[lang][year]):
                archives[lang][year].sort(reverse=True)
                _dst = os.path.join(NEWS_SRC_ARCH + year + '.' + lang + '.rst')

                if utility.newer(archives[lang][year], _dst):
                    output = open(_dst, 'w')
                    output.write(utility.titleReST(_T['news-archive-for'] + ' ' + year))
                    for filepath in archives[lang][year]:
                        output.write(utility.htmlReST('   <a id="%s"></a>\n' % filepath[-15:-7])) # At least legal HTML
                        output.write(utility.drctReST('include', filepath))
                    output.close()

    return True


# makeCredits
# -----------
# Creates ReST file for credits.

def makeCredits():
    """Update the generated English credits page when its source changes.

    Read ``db/credits`` using ISO-8859-15 and write ``credits.en.rst``.
    """
    if (not os.path.exists('credits.en.rst')) \
        or (os.path.getmtime('db/credits') > os.path.getmtime('credits.en.rst')):
        CREDITS_DATA = db.credits.format.rest.format(
            db.credits.parse.parse(codecs.open('db/credits', 'r', encoding='iso-8859-15'))
        )
        open('credits.en.rst', 'w').write(CREDITS_DATA)


# convertWWW
# ----------
# Converts a source file into an HTML string.

def convertWWW(src, language, options=None):
    """Render a ReST source through Jinja2 and return its HTML body fragment.

    Use site-specific documentation links and the requested language.
    Only ``--stylesheet=`` arguments in ``options`` override the default
    Docutils settings.
    """
    encoding = 'utf-8'

    if wwwtgt == 'aros':
        www_arosdocrootpath = 'documentation/'
        www_devdocrootpath = 'http://developers.aros.org/documentation/'
        www_localedocrootpath = 'http://translations.aros.org/documentation/'
    elif wwwtgt == 'dev':
        www_arosdocrootpath = 'http://www.aros.org/documentation/'
        www_devdocrootpath = 'documentation/'
        www_localedocrootpath = 'http://translations.aros.org/documentation/'
    elif wwwtgt == 'locale':
        www_arosdocrootpath = 'http://www.aros.org/documentation/'
        www_devdocrootpath = 'http://developers.aros.org/documentation/'
        www_localedocrootpath = 'documentation/'

    # === NEW: Render through Jinja2 ===
    template_path = os.path.relpath(src, SRCROOT)
    try:
        template = jinja_env.get_template(template_path)
    except TemplateSyntaxError as e:
        print(f"Error in template '{template_path}': {e}")
        raise  # re-raise the exception so the build still fails

    rendered_rst = template.render({
        'arosdepthpath': '../',
        'devdepthpath': '../',
        'localedepthpath': '../',
        'devdocrootpath': www_devdocrootpath,
        'arosdocrootpath': www_arosdocrootpath,
        'localedocrootpath': www_localedocrootpath,
        'devdocpath': 'documentation/',
        'arosdocpath': 'documentation/',
        'localedocpath': 'documentation/',
        'lang': language
    })

    # === Convert CLI-like options into settings ===
    settings_overrides = {
        'generator': False,
        'source_link': False,
        'datestamp': False,
        'language_code': language,
        'input_encoding': encoding,
        'output_encoding': encoding,
        'embed_stylesheet': False,
    }

    if STRICT_DOCUTILS:
        settings_overrides['halt_level'] = 3

    # If you ever want to pass other dynamic options, process them here:
    if options:
        for opt in options:
            if opt.startswith('--stylesheet='):
                stylesheet_path = opt.split('=', 1)[1]
                settings_overrides['stylesheet_path'] = stylesheet_path
            # Add other option translations here as needed

    # === Process with Docutils ===
    parts = publish_parts(
        source=rendered_rst,
        source_path=src,
        writer_name='html',
        settings_overrides=settings_overrides
    )

    return parts['body_pre_docinfo'] + parts['body']


# processWWW
# ----------
# If src is an English source file, builds the corresponding web page for
# every supported language, using the translated source files. If a
# translation is unavailable for a particular language, the English version
# is used, but with the translated template. If src is not an English source
# file, nothing is done.

def processWWW(src, depth):
    """Generate translated website pages for an English ReST source.

    Filter sources by the active site, use English for missing translations,
    and update the destination when its template or source is newer.
    """
    src = os.path.normpath(src)

    prefix, suffix = os.path.splitext(src)
    if suffix != ".rst":
        return
    prefix, suffix = os.path.splitext(prefix)
    if suffix[1:] != DEFAULTLANG:
        return

    dst_prefix = prefix

    if wwwtgt == 'aros':
        if "documentation/users" in os.path.dirname(src):
            dst_prefix = prefix.replace("documentation/users", "documentation")

    if wwwtgt == 'dev':
        if "documentation/developers" not in os.path.dirname(src):
            return
        if "documentation/developers/siteroot" in prefix:
            dst_prefix = prefix.replace("documentation/developers/siteroot/", "")
        elif prefix == "documentation/developers/index" or prefix.endswith("/documentation/developers/index"):
            dst_prefix = prefix.replace("documentation/developers/", "")
        else:
            dst_prefix = prefix.replace("documentation/developers", "documentation")
    else:
        if "documentation/developers" in os.path.dirname(src):
            return

    if wwwtgt == 'locale':
        if "documentation/translating" not in os.path.dirname(src):
            return
        if "documentation/translating/siteroot" in prefix:
            dst_prefix = prefix.replace("documentation/translating/siteroot/", "")
        if prefix == "documentation/translating/index" or prefix.endswith("/documentation/translating/index"):
            dst_prefix = prefix.replace("documentation/translating/", "")
        else:
            dst_prefix = prefix.replace("documentation/translating", "documentation")
    else:
        if "documentation/translating" in os.path.dirname(src):
            return

    for lang in languages:
        if lang == DEFAULTLANG:
            dst = dst_prefix + '.html'
            dst_depth = depth
        else:
            dst = lang + '/' + dst_prefix + '.html'
            dst_depth = depth + 1
        src = altLang(prefix, lang)
        dst_abs = os.path.normpath(os.path.join(TRGROOT, dst))
        src_abs = os.path.normpath(os.path.join(SRCROOT, src))
        dst_dir = os.path.dirname(dst_abs)

        utility.makedir(dst_dir)

        needs_render = STRICT_DOCUTILS or utility.newer(
            [TEMPLATEPATH + wwwtgt + "/" + TEMPLATEFILESTEM + lang, src_abs],
            dst_abs,
        )
        if needs_render:
            utility.reportBuilding(dst)
            strings = {
                'ROOT': '../' * dst_depth,
                'BASE': '../' * dst_depth,
                'CONTENT': convertWWW(src_abs, lang)
            }
            open(dst_abs, 'w').write(TEMPLATE_DATA[lang] % strings)
        else:
            utility.reportSkipping(dst)

def processHTML(src, depth):
    """Render an English ReST source into a standalone offline HTML page.

    Skip other extensions and languages. Write ISO-8859-15 output with
    replacement for characters outside that encoding.
    """
    src = os.path.normpath(src)

    prefix, suffix = os.path.splitext(src)
    if suffix != ".rst":
        return
    prefix, lang_suffix = os.path.splitext(prefix)
    if lang_suffix[1:] != DEFAULTLANG:
        return

    dst = prefix + '.html'
    dst_abs = os.path.normpath(os.path.join(TRGROOT, dst))
    src_abs = os.path.normpath(os.path.join(SRCROOT, src))
    dst_dir = os.path.dirname(dst_abs)

    utility.makedir(dst_dir)

    if STRICT_DOCUTILS or utility.newer([src_abs], dst_abs):
        utility.reportBuilding(src)

        # === Render through Jinja2 ===
        template_path = os.path.relpath(src_abs, SRCROOT)
        template = jinja_env.get_template(template_path)
        rendered_rst = template.render({
            'arosdepthpath': '../../',
            'devdepthpath': '../../',
            'localedepthpath': '../../',
            'devdocrootpath': '',
            'arosdocrootpath': '',
            'localedocrootpath': '',
            'devdocpath': 'documentation/developers/',
            'arosdocpath': 'documentation/users/',
            'localedocpath': 'documentation/translating/',
            'lang': lang_suffix[1:]
        })

        # === Docutils settings ===
        stylesheet_path = '../' * depth + 'aros.css'
        settings_overrides = {
            'generator': False,
            'source_link': False,
            'datestamp': False,
            'language_code': lang_suffix[1:],
            'input_encoding': 'utf-8',
            'output_encoding': 'iso-8859-15',
            'embed_stylesheet': True,
            'stylesheet_path': stylesheet_path,
        }

        if STRICT_DOCUTILS:
            settings_overrides['halt_level'] = 3

        # === Convert to HTML ===
        parts = publish_parts(
            source=rendered_rst,
            source_path=src_abs,
            writer_name='html',
            settings_overrides=settings_overrides,
        )

        html_output = parts['whole']

        # === Write the HTML file ===
        os.makedirs(os.path.dirname(dst_abs), exist_ok=True)
        try:
            with open(dst_abs, 'w', encoding='iso-8859-15', errors='replace') as f:
                f.write(html_output)
        except UnicodeEncodeError as e:
            print(f"UnicodeEncodeError while writing '{dst_abs}': {e}")
            raise

    else:
        utility.reportSkipping(dst)

def copyDevImages(usedevdir):
    # developer/ui
    """Copy developer UI and Zune images into the active output tree.

    ``usedevdir`` selects whether the developer-directory prefix is retained.
    """
    imagepath = 'documentation/developers/ui/images'
    if usedevdir == "yes":
        dstpath   = os.path.join(TRGROOT, imagepath)
    else:
        dstpath   = os.path.join(TRGROOT, 'documentation', 'ui', 'images')
    srcpath   = imagepath

    utility.makedir(dstpath)

    utility.pathscopy(
        [
            'windows-prefs-titlebar.png',
            'windows-prefs-buttons.png'
        ],
        srcpath,
        dstpath
    )

    # developer/zune-dev
    imagepath = 'documentation/developers/zune-dev/images'
    if usedevdir == "yes":
        dstpath   = os.path.join(TRGROOT, imagepath)
    else:
        dstpath   = os.path.join(TRGROOT, 'documentation', 'zune-dev', 'images')
    srcpath   = imagepath

    utility.makedir(dstpath)

    utility.pathscopy('hello.png', srcpath, dstpath)

def copyGenericImages():
    # generic
    """Copy the shared site logos and images into the output image tree."""
    imagepath = 'images'
    dstpath   = os.path.join(TRGROOT, imagepath)
    srcpath   = imagepath

    utility.makedir(dstpath)

    utility.pathscopy(
        [
            'AROS_logo_paypal.png',
            'paypal-logo.png',
            'aros-banner.gif',
            'aros-banner2.png',
            'aros-banner-blue.png',
            'aros-banner-pb2.png',
            'aros-banner-peta.png',
            'aros-sigbar-user.png',
            'aros-sigbar-coder.png',
            'download-arrow.png',

            'genesi.gif',
            'trustec.png',
            'sourceforge.png',
            'phoenix.jpeg',
            'bttr.jpeg',
            'icaroslive_logo.png',
            'aspireos_logo.png',
            'kcachegrind.jpg',
            'tinyaros_logo.jpg',
            'arosone_logo.jpeg',
            '20070405.jpeg'
        ],
        srcpath,
        dstpath
    )

def copyUserImages(useuserdir):
    # users
    """Copy user-guide screenshots into the active output tree.

    ``useuserdir`` selects whether the users-directory prefix is retained.
    """
    imagepath = 'documentation/users/images'
    if useuserdir == "yes":
        dstpath   = os.path.join(TRGROOT, imagepath)
    else:
        dstpath   = os.path.join(TRGROOT, 'documentation', 'images')
    srcpath   = imagepath

    utility.makedir(dstpath)

    utility.pathscopy(
        [
            'installer1.png',
            'installer2.png',
            'installer3.png',
            'installer4.png',
            'installer5.png',
            'installer6.png',
            'installer7.png',
            'installer8.png',
            'installer9.png',
            'shell.png'
        ],
        srcpath,
        dstpath
    )


def copySamples(www):
    """Replace the destination sample-code tree with the developer sources.

    ``www`` selects the website layout rather than the offline layout.
    """
    srcpath = os.path.join('documentation', 'developers', 'samplecode')
    if www != "yes":
        dstpath = os.path.join(TRGROOT, srcpath)
    else:
        dstpath = os.path.join(TRGROOT, 'documentation', 'samplecode')
    shutil.rmtree(dstpath, True)
    utility.copytree(srcpath, dstpath)


def copyHeaders(www):
    """Replace the destination header-reference tree with source headers.

    ``www`` selects the website layout rather than the offline layout.
    """
    srcpath = os.path.join('documentation', 'developers', 'headerfiles')
    if www != "yes":
        dstpath = os.path.join(TRGROOT, srcpath)
    else:
        dstpath = os.path.join(TRGROOT, 'documentation', 'headerfiles')
    shutil.rmtree(dstpath, True)
    utility.copytree(srcpath, dstpath)


def buildClean():
    """Remove the generated documentation tree and selected generated sources.

    Delete ``DSTROOT`` recursively and remove generated news indexes,
    news archives, and website templates from the source checkout.
    """
    shutil.rmtree(DSTROOT, True)

    filenames = glob.glob('news/index.??.rst') \
        + glob.glob('news/archive/20[0-9][0-9].??.rst') \
        + glob.glob('targets/www/template.html.*')

    for filename in filenames:
        utility.remove(filename)

    # the localized versions of credits.* aren't
    # created by the script. Hence we can only delete credits.en
    utility.remove('credits.en')


def buildWWW():
    """Build each selected public website and its localized assets.

    Populate ``DSTROOT/www`` for every site in ``targetsites`` and language
    in ``languages``. Recreate pages, indexes, images, scripts, and templates.
    """
    global TRGROOT, wwwtgt
    WWWROOT = os.path.join(DSTROOT, 'www')

    for wwwtgt in targetsites:
        TRGROOT = os.path.join(WWWROOT, wwwtgt)

        # Hack to get around dependency problems
        for lang in languages:
            if lang == DEFAULTLANG:
                dstpath = TRGROOT
            else:
                dstpath = os.path.join(TRGROOT, lang)
            utility.remove(os.path.join(dstpath, 'index.html'))
            utility.remove(os.path.join(dstpath, 'introduction/index.html'))
            utility.remove(os.path.join(dstpath, 'download.html'))

        if wwwtgt == "aros":
            makeNews()
            makeCredits()

        makeTemplates(wwwtgt)

        for lang in languages:
            TEMPLATE_DATA[lang] = open(TEMPLATEPATH + wwwtgt + "/" + TEMPLATEFILESTEM + lang, 'r').read()

        if wwwtgt == "aros":
            makePictures()
            makeStatus()

        recurse(processWWW)

        utility.copy('license.html', TRGROOT)

        imagepath = os.path.join(TRGROOT, 'images')
        utility.makedir(imagepath)

        srcpath = 'targets/www/common/images'
        utility.pathscopy(
            [
                # Flags
                'czechlogo.png',
                'englishlogo.png',
                'finlandlogo.png',
                'francelogo.png',
                'germanylogo.png',
                'greecelogo.png',
                'italylogo.png',
                'netherlandslogo.png',
                'polandlogo.png',
                'portugallogo.png',
                'russialogo.png',
                'spanishlogo.png',
                'swedenlogo.png',

                # Layout images
                'archivedownloadicon.png',
                'arosthumbmain.png',
                'backgroundtop.png',
                'bgcolormain.png',
                'bgcolorright.png',
                'bountyicon1.png',
                'bountyicon2.png',
                'bullet.gif',
                'communityicon.png',
                'directdownloadicon.png',
                'disk.png',
                'kittymascot.png',
                'mainpagespacer.png',
                'pointer.png',
                'rsfeed.gif',
                'rssicon1.png',
                'sidespacer.png',
                'textdocu.gif',
                'toplogo.png',

                # Logos
                'genesi-small.gif',
                'noeupatents-small.png',
                'trustec-small.png'
            ],
            srcpath,
            imagepath
        )

        if wwwtgt == "aros":
            copyUserImages("no")

        copyGenericImages()

        if wwwtgt == "dev":
            copyDevImages("no")
            copySamples("yes")
            copyHeaders("yes")

        srcpath= 'targets/www/common'
        utility.pathscopy(
            [
                'docutils.css',
                'aros.css',
                'print.css',
                'donations.css',
                'aros.ico'
            ],
            srcpath,
            TRGROOT
        )

        utility.copy(os.path.join('targets/www/common', 'htaccess'), os.path.join(TRGROOT, '.htaccess'))

        dbpath = os.path.join(TRGROOT, 'db')
        utility.makedir(dbpath)

        if wwwtgt == "aros":
            utility.makedir(os.path.join(dbpath, 'download-descriptions'))
            for lang in languages:
                desc_file = os.path.join('db/download-descriptions', lang + '.txt')
                if os.path.exists(desc_file):
                    utility.copy(desc_file, os.path.join(dbpath, 'download-descriptions'))

        cgi_dest = os.path.join(TRGROOT, 'cgi-bin')
        if os.path.exists(cgi_dest):
            shutil.rmtree(cgi_dest)
        if wwwtgt == "aros":
            utility.copytree('targets/www/aros/cgi-bin', cgi_dest)

        if wwwtgt == "dev":
            utility.copytree('targets/www/dev/cgi-bin', cgi_dest)

        if wwwtgt == "locale":
            locflags_dest = os.path.join(TRGROOT, 'images/flags')
            if os.path.exists(locflags_dest):
                shutil.rmtree(locflags_dest)
            utility.copytree('targets/www/locale/images/flags', locflags_dest)

        if wwwtgt == "aros":
            js_dest = os.path.join(TRGROOT, 'js')
            if os.path.exists(js_dest):
                shutil.rmtree(js_dest)
            utility.copytree('targets/www/aros/js', js_dest)

            thumb_dest = os.path.join(TRGROOT, 'images/thumbs')
            if os.path.exists(thumb_dest):
                shutil.rmtree(thumb_dest)
            utility.copytree('targets/www/aros/images/thumbs', thumb_dest)

            # Remove index-offline.html
            utility.remove(os.path.join(TRGROOT, 'index-offline.html'))

        subprocess.run(['chmod', '-R', 'go+r', TRGROOT], check=True)


def buildHTML():
    """Build the standalone, English-only HTML documentation tree.

    Generate pages and supporting assets under ``DSTROOT/html`` and promote
    the offline index to ``index.html``.
    """
    global TRGROOT
    TRGROOT = os.path.join(DSTROOT, 'html')
    global languages
    languages = [DEFAULTLANG]
    TEMPLATE_DATA[DEFAULTLANG] = open('targets/html/template.html.en', 'r').read()

    makeNews()
    makeCredits()

    if not os.path.exists('news/index.en.rst'):
        open('news/index.en.rst', 'w').write('')

    recurse(processHTML)

    srcpath = 'targets/www/common'
    utility.pathscopy(
        [
            'docutils.css',
            'aros.css',
            'print.css',
            'donations.css'
        ],
        srcpath,
        TRGROOT
    )

    copyDevImages("yes")
    copyGenericImages()
    copyUserImages("yes")
    copySamples("no")
    copyHeaders("no")

    utility.copy('license.html', TRGROOT)

    # Make status
    makeStatus('.html')

    # Use index-offline as index
    utility.remove(os.path.join(TRGROOT, 'index.html'))
    os.rename(os.path.join(TRGROOT, 'index-offline.html'), os.path.join(TRGROOT, 'index.html'))

    subprocess.run(['chmod', '-R', 'go+r', TRGROOT], check=True)


TARGETS = {
    'clean':     buildClean,
    'www':       buildWWW,
    'html':      buildHTML,
    'alldocs':   autodoc.create_all_docs,
    'shelldocs': autodoc.create_shell_docs,
    'moduledocs':autodoc.create_module_docs,
    'appsdocs':  autodoc.create_apps_docs
}

# Usage: build {target|language|site} ...
# Targets: clean, www, html, alldocs, shelldocs, moduledocs, appsdocs.
# Sites: aros, dev, locale. Language selection applies only to www.
# With no language selection, all supported languages are built.
# --strict-docutils: fail on Docutils ERROR/3 or higher for html/www.

if __name__ == '__main__':
    targets = []
    valid = 1

    # Interpret arguments
    for arg in sys.argv[1:]:
        if arg in LANGUAGES:
            languages.append(arg)
        elif arg in TARGETS:
            targets.append(arg)
        elif arg in SITES:
            targetsites.append(arg)
        elif arg == "--strict-docutils":
            STRICT_DOCUTILS = True
        else:
            print('Error: Unrecognised argument, "' + arg + '".')
            valid = 0

    if valid:
        if STRICT_DOCUTILS and not any(target in ("html", "www") for target in targets):
            print("Error: --strict-docutils requires the html or www target.", file=sys.stderr)
            sys.exit(2)

        # Fill in defaults if necessary
        if len(languages) == 0:
            languages = list(LANGUAGES)
        if len(targets) == 0:
            targets.append('www')

        # If www is a target and no site specified, default to the first in SITES
        if 'www' in targets and len(targetsites) == 0:
            targetsites.append(next(iter(SITES)))  # Get the first site key

        # Build each target
        for target in targets:
            try:
                TARGETS[target]()
            except SystemMessage as exc:
                if not STRICT_DOCUTILS:
                    raise
                print(f"Docutils validation failed: {exc}", file=sys.stderr)
                sys.exit(1)
    else:
        sys.exit(2)
