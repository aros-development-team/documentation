<!DOCTYPE HTML PUBLIC "-//W3C//DTD HTML 4.01 Transitional//EN"><html><head><meta http-equiv="Content-Type" content="text/html; charset=iso-8859-15"><title>AROS Research Operating System</title>
<link href="aros.css" type="text/css" rel="stylesheet"><link media="print" href="print.css" type="text/css" rel="stylesheet"><meta content="AROS, OS, operating system, research, open source, portage" name="keywords"></head>
<body bgcolor="#ffffff" style="margin: 0px;">
    <?php
        echo "<map name=\"map\">";
              echo "<area shape=\"rect\" coords=\"25,78,85,95\" alt=\"http://www.aros.org\" href=\"http://aros.sourceforge.net/\">";
              echo "<area shape=\"rect\" coords=\"100,78,168,95\" alt=\"AROS-Exec\" href=\"https://ae.amigalife.org\">";
              echo "<area shape=\"rect\" coords=\"180,78,240,95\" alt=\"AROS-Exec Archives\" href=\"http://archives.aros-exec.org\">";
              echo "<area shape=\"rect\" coords=\"260,78,350,95\" alt=\"Power2People\" href=\"https://power2people.org/\">";
              echo "</map>";
    ?>
    <table style="background-image:url('images/backgroundtop.png'); background-repeat:repeat-x;" cellspacing="0" width="100%" cellpadding="0" border="0" class="layout"><tr class="layout"><td width="100%" height="109" class="layout" valign="top">
    <?php
        include( 'rsfeed/browserdetect.php');
        $win_ie56 = (browser_detection('browser') == 'ie' ) &&

          (browser_detection('number') >= 5 ) &&

                (browser_detection('number') < 7  );
    if ($win_ie56) {

    echo "<img src=\"/images/kittymascot.gif\"
        alt=\"kitty mascot\"
        style=\"float:right\" border=\"0\"><img
        src=\"/images/toplogomenu.gif\" border=\"0\"
        alt=\"top logo menu\"
        usemap=\"#map\">";

        }
        else {
        echo "<img src=\"/images/kittymascot.png\"
        alt=\"kitty mascot\"
        style=\"float:right\"
        border=\"0\"><img src=\"/images/toplogomenu.png\"
        alt=\"top logo menu\"
        border=\"0\" usemap=\"#map\">";
        } ?>
    </td>
</tr>
<tr class="layout"><td class="layout" valign="top"><table cellpadding="0" width="100%" cellspacing="0" border="0" class="layout"><tr class="layout"><td width="171" valign="top" id="menusidebar" class="layout"><table cellpadding="2" width="171" cellspacing="2" border="0" class="layout"><tr class="layout" valign="top"><td width="15" rowspan="8" class="layout" valign="top"></td>
<td class="layout" valign="top"></td>
</tr>
<tr class="layout" valign="top"><td class="layout" valign="top"><table cellpadding="0" cellspacing="2" border="0" class="tree"><tr class="layout"><td colspan="4" class="layout" valign="top"><p><img src="images/pointer.png" alt="pointer">
<a href=".">Home</a>
</p>
</td>
</tr>
<tr class="layout"><td width="10" align="right" class="layout" valign="middle"><img width="5" alt="bullet" height="11" src="images/bullet.gif">
</td>
<td colspan="3" class="layout" valign="top"><p><img width="16" alt="czech logo" height="10" src="images/czechlogo.png">
<a href="cs/">&#268;esky</a>
</p>
</td>
</tr>
<tr class="layout"><td width="10" align="right" class="layout" valign="middle"><img width="5" alt="bullet" height="11" src="images/bullet.gif">
</td>
<td colspan="3" class="layout" valign="top"><p><img width="16" alt="germany logo" height="10" src="images/germanylogo.png">
<a href="de/">Deutsch</a>
</p>
</td>
</tr>
<tr class="layout"><td width="10" align="right" class="layout" valign="middle"><img width="5" alt="bullet" height="11" src="images/bullet.gif">
</td>
<td colspan="3" class="layout" valign="top"><p><img width="16" alt="greece logo" height="10" src="images/greecelogo.png">
<a href="el/">&#917;&#955;&#955;&#951;&#965;&#953;&#954;&#940;</a>
</p>
</td>
</tr>
<tr class="layout"><td width="10" align="right" class="layout" valign="middle"><img width="5" alt="bullet" height="11" src="images/bullet.gif">
</td>
<td colspan="3" class="layout" valign="top"><p><img width="16" alt="english logo" height="10" src="images/englishlogo.png">
<a href=".">English</a>
</p>
</td>
</tr>
<tr class="layout"><td width="10" align="right" class="layout" valign="middle"><img width="5" alt="bullet" height="11" src="images/bullet.gif">
</td>
<td colspan="3" class="layout" valign="top"><p><img width="16" alt="spanish logo" height="10" src="images/spanishlogo.png">
<a href="es/">Espa&#241;ol</a>
</p>
</td>
</tr>
<tr class="layout"><td width="10" align="right" class="layout" valign="middle"><img width="5" alt="bullet" height="11" src="images/bullet.gif">
</td>
<td colspan="3" class="layout" valign="top"><p><img width="16" alt="france logo" height="10" src="images/francelogo.png">
<a href="fr/">Fran&#231;ais</a>
</p>
</td>
</tr>
<tr class="layout"><td width="10" align="right" class="layout" valign="middle"><img width="5" alt="bullet" height="11" src="images/bullet.gif">
</td>
<td colspan="3" class="layout" valign="top"><p><img width="16" alt="italy logo" height="10" src="images/italylogo.png">
<a href="it/">Italiano</a>
</p>
</td>
</tr>
<tr class="layout"><td width="10" align="right" class="layout" valign="middle"><img width="5" alt="bullet" height="11" src="images/bullet.gif">
</td>
<td colspan="3" class="layout" valign="top"><p><img width="16" alt="netherlands logo" height="10" src="images/netherlandslogo.png">
<a href="nl/">Nederlands</a>
</p>
</td>
</tr>
<tr class="layout"><td width="10" align="right" class="layout" valign="middle"><img width="5" alt="bullet" height="11" src="images/bullet.gif">
</td>
<td colspan="3" class="layout" valign="top"><p><img width="16" alt="poland logo" height="10" src="images/polandlogo.png">
<a href="pl/">Polski</a>
</p>
</td>
</tr>
<tr class="layout"><td width="10" align="right" class="layout" valign="middle"><img width="5" alt="bullet" height="11" src="images/bullet.gif">
</td>
<td colspan="3" class="layout" valign="top"><p><img width="16" alt="portugal logo" height="10" src="images/portugallogo.png">
<a href="pt/">Portugu&#234;s</a>
</p>
</td>
</tr>
<tr class="layout"><td width="10" align="right" class="layout" valign="middle"><img width="5" alt="bullet" height="11" src="images/bullet.gif">
</td>
<td colspan="3" class="layout" valign="top"><p><img width="16" alt="russian logo" height="10" src="images/russialogo.png">
<a href="ru/">&#1056;&#1091;&#1089;&#1089;&#1082;&#1080;&#1081;</a>
</p>
</td>
</tr>
<tr class="layout"><td width="10" align="right" class="layout" valign="middle"><img width="5" alt="bullet" height="11" src="images/bullet.gif">
</td>
<td colspan="3" class="layout" valign="top"><p><img width="16" alt="finland logo" height="10" src="images/finlandlogo.png">
<a href="fi/">Suomi</a>
</p>
</td>
</tr>
<tr class="layout"><td width="10" align="right" class="layout" valign="middle"><img width="5" alt="bullet" height="11" src="images/bullet.gif">
</td>
<td colspan="3" class="layout" valign="top"><p><img width="16" alt="sweden logo" height="10" src="images/swedenlogo.png">
<a href="sv/">Svenska</a>
</p>
</td>
</tr>
<tr class="layout"><td colspan="4" class="layout" valign="top"><br></td>
</tr>
<tr class="layout"><td colspan="4" class="layout" valign="top"><p><img src="images/pointer.png" alt="pointer">
<a href="news/">News</a>
</p>
</td>
</tr>
<tr class="layout"><td width="10" align="right" class="layout" valign="middle"><img width="5" alt="bullet" height="11" src="images/bullet.gif">
</td>
<td colspan="3" class="layout" valign="top"><a href="news/archive/">Archive</a>
</td>
</tr>
<tr class="layout"><td colspan="4" class="layout" valign="top"><br></td>
</tr>
<tr class="layout"><td colspan="4" class="layout" valign="top"><p><img src="images/pointer.png" alt="pointer">
<a href="introduction/">Introduction</a>
</p>
</td>
</tr>
<tr class="layout"><td width="10" align="right" class="layout" valign="middle"><img width="5" alt="bullet" height="11" src="images/bullet.gif">
</td>
<td colspan="3" class="layout" valign="top"><a href="introduction/status/everything.php">Status</a>
</td>
</tr>
<tr class="layout"><td width="10" align="right" class="layout" valign="middle"><img width="5" alt="bullet" height="11" src="images/bullet.gif">
</td>
<td colspan="3" class="layout" valign="top"><a href="introduction/ports.php">Ports</a>
</td>
</tr>
<tr class="layout"><td width="10" align="right" class="layout" valign="middle"><img width="5" alt="bullet" height="11" src="images/bullet.gif">
</td>
<td colspan="3" class="layout" valign="top"><a href="license.html">License</a>
</td>
</tr>
<tr class="layout"><td colspan="4" class="layout" valign="top"><br></td>
</tr>
<tr class="layout"><td colspan="4" class="layout" valign="top"><p><img src="images/pointer.png" alt="pointer">
<a href="download.php">Download</a>
</p>
</td>
</tr>
<tr class="layout"><td colspan="4" class="layout" valign="top"><br></td>
</tr>
<tr class="layout"><td colspan="4" class="layout" valign="top"><p><img src="images/pointer.png" alt="pointer">
Pictures</p>
</td>
</tr>
<tr class="layout"><td width="10" align="right" class="layout" valign="middle"><img width="5" alt="bullet" height="11" src="images/bullet.gif">
</td>
<td colspan="3" class="layout" valign="top"><a href="pictures/screenshots/">Screenshots</a>
</td>
</tr>
<tr class="layout"><td width="10" align="right" class="layout" valign="middle"><img width="5" alt="bullet" height="11" src="images/bullet.gif">
</td>
<td colspan="3" class="layout" valign="top"><a href="pictures/developers/">Developers</a>
</td>
</tr>
<tr class="layout"><td colspan="4" class="layout" valign="top"><br></td>
</tr>
<tr class="layout"><td colspan="4" class="layout" valign="top"><p><img src="images/pointer.png" alt="pointer">
Documentation</p>
</td>
</tr>
<tr class="layout"><td width="10" align="right" class="layout" valign="middle"><img width="5" alt="bullet" height="11" src="images/bullet.gif">
</td>
<td colspan="3" class="layout" valign="top"><a href="documentation/users/">Users</a>
</td>
</tr>
<tr class="layout"><td width="10" class="layout" valign="top"></td>
<td width="10" align="right" class="layout" valign="middle"><img width="5" alt="bullet" height="11" src="images/bullet.gif">
</td>
<td colspan="2" class="layout" valign="top"><a href="documentation/users/installation.php">Installation</a>
</td>
</tr>
<tr class="layout"><td width="10" class="layout" valign="top"></td>
<td width="10" align="right" class="layout" valign="middle"><img width="5" alt="bullet" height="11" src="images/bullet.gif">
</td>
<td colspan="2" class="layout" valign="top"><a href="documentation/users/using.php">Using</a>
</td>
</tr>
<tr class="layout"><td width="10" class="layout" valign="top"></td>
<td width="10" align="right" class="layout" valign="middle"><img width="5" alt="bullet" height="11" src="images/bullet.gif">
</td>
<td colspan="2" class="layout" valign="top"><a href="documentation/users/shell/index.php">Shell</a>
</td>
</tr>
<tr class="layout"><td width="10" class="layout" valign="top"></td>
<td width="10" align="right" class="layout" valign="middle"><img width="5" alt="bullet" height="11" src="images/bullet.gif">
</td>
<td colspan="2" class="layout" valign="top"><a href="documentation/users/applications/index.php">Applications</a>
</td>
</tr>
<tr class="layout"><td width="10" class="layout" valign="top"></td>
<td width="10" align="right" class="layout" valign="middle"><img width="5" alt="bullet" height="11" src="images/bullet.gif">
</td>
<td colspan="2" class="layout" valign="top"><a href="documentation/users/faq.php">FAQ</a>
</td>
</tr>
<tr class="layout"><td width="10" class="layout" valign="top"></td>
<td width="10" align="right" class="layout" valign="middle"><img width="5" alt="bullet" height="11" src="images/bullet.gif">
</td>
<td colspan="2" class="layout" valign="top"><a href="documentation/users/howto.php">HowTo</a>
</td>
</tr>
<tr class="layout"><td width="10" class="layout" valign="top"></td>
<td width="10" align="right" class="layout" valign="middle"><img width="5" alt="bullet" height="11" src="images/bullet.gif">
</td>
<td colspan="2" class="layout" valign="top"><a href="documentation/users/hardware.php">Hardware Compatibility</a>
</td>
</tr>
<tr class="layout"><td width="10" align="right" class="layout" valign="middle"><img width="5" alt="bullet" height="11" src="images/bullet.gif">
</td>
<td colspan="3" class="layout" valign="top"><a href="documentation/developers/index.php">Developers</a>
</td>
</tr>
<tr class="layout"><td width="10" class="layout" valign="top"></td>
<td width="10" align="right" class="layout" valign="middle"><img width="5" alt="bullet" height="11" src="images/bullet.gif">
</td>
<td colspan="2" class="layout" valign="top"><a href="documentation/developers/contribute.php">Contribute</a>
</td>
</tr>
<tr class="layout"><td width="10" class="layout" valign="top"></td>
<td width="10" align="right" class="layout" valign="middle"><img width="5" alt="bullet" height="11" src="images/bullet.gif">
</td>
<td colspan="2" class="layout" valign="top"><a href="documentation/developers/roadmap.php">Roadmap</a>
</td>
</tr>
<tr class="layout"><td width="10" class="layout" valign="top"></td>
<td width="10" align="right" class="layout" valign="middle"><img width="5" alt="bullet" height="11" src="images/bullet.gif">
</td>
<td colspan="2" class="layout" valign="top"><a href="http://sourceforge.net/p/aros/bugs/">Bug Tracker</a>
</td>
</tr>
<tr class="layout"><td width="10" class="layout" valign="top"></td>
<td width="10" align="right" class="layout" valign="middle"><img width="5" alt="bullet" height="11" src="images/bullet.gif">
</td>
<td colspan="2" class="layout" valign="top"><a href="http://sourceforge.net/p/aros/feature-requests/">Feature Requests</a>
</td>
</tr>
<tr class="layout"><td width="10" class="layout" valign="top"></td>
<td width="10" align="right" class="layout" valign="middle"><img width="5" alt="bullet" height="11" src="images/bullet.gif">
</td>
<td colspan="2" class="layout" valign="top"><a href="documentation/developers/git.php">Git</a>
</td>
</tr>
<tr class="layout"><td width="10" class="layout" valign="top"></td>
<td width="10" align="right" class="layout" valign="middle"><img width="5" alt="bullet" height="11" src="images/bullet.gif">
</td>
<td colspan="2" class="layout" valign="top"><a href="documentation/developers/compiling.php">Compiling</a>
</td>
</tr>
<tr class="layout"><td width="10" class="layout" valign="top"></td>
<td width="10" align="right" class="layout" valign="middle"><img width="5" alt="bullet" height="11" src="images/bullet.gif">
</td>
<td colspan="2" class="layout" valign="top"><a href="documentation/developers/app-dev/index.php">Application Development</a>
</td>
</tr>
<tr class="layout"><td width="10" class="layout" valign="top"></td>
<td width="10" align="right" class="layout" valign="middle"><img width="5" alt="bullet" height="11" src="images/bullet.gif">
</td>
<td colspan="2" class="layout" valign="top"><a href="documentation/developers/zune-dev/index.php">Zune Application Development</a>
</td>
</tr>
<tr class="layout"><td width="10" class="layout" valign="top"></td>
<td width="10" align="right" class="layout" valign="middle"><img width="5" alt="bullet" height="11" src="images/bullet.gif">
</td>
<td colspan="2" class="layout" valign="top"><a href="documentation/developers/sys-dev/index.php">System Development</a>
</td>
</tr>
<tr class="layout"><td width="10" class="layout" valign="top"></td>
<td width="10" align="right" class="layout" valign="middle"><img width="5" alt="bullet" height="11" src="images/bullet.gif">
</td>
<td colspan="2" class="layout" valign="top"><a href="documentation/developers/debugging.php">Debugging</a>
</td>
</tr>
<tr class="layout"><td width="10" class="layout" valign="top"></td>
<td width="10" align="right" class="layout" valign="middle"><img width="5" alt="bullet" height="11" src="images/bullet.gif">
</td>
<td colspan="2" class="layout" valign="top"><a href="documentation/developers/autodocs/index.php">Reference</a>
</td>
</tr>
<tr class="layout"><td width="10" class="layout" valign="top"></td>
<td width="10" align="right" class="layout" valign="middle"><img width="5" alt="bullet" height="11" src="images/bullet.gif">
</td>
<td colspan="2" class="layout" valign="top"><a href="documentation/developers/specifications/">Specifications</a>
</td>
</tr>
<tr class="layout"><td width="10" class="layout" valign="top"></td>
<td width="10" align="right" class="layout" valign="middle"><img width="5" alt="bullet" height="11" src="images/bullet.gif">
</td>
<td colspan="2" class="layout" valign="top"><a href="documentation/developers/ui.php">UI Style Guide</a>
</td>
</tr>
<tr class="layout"><td width="10" class="layout" valign="top"></td>
<td width="10" align="right" class="layout" valign="middle"><img width="5" alt="bullet" height="11" src="images/bullet.gif">
</td>
<td colspan="2" class="layout" valign="top"><a href="documentation/developers/testing/">Testing</a>
</td>
</tr>
<tr class="layout"><td width="10" class="layout" valign="top"></td>
<td width="10" align="right" class="layout" valign="middle"><img width="5" alt="bullet" height="11" src="images/bullet.gif">
</td>
<td colspan="2" class="layout" valign="top"><a href="documentation/developers/documenting.php">Documenting</a>
</td>
</tr>
<tr class="layout"><td width="10" class="layout" valign="top"></td>
<td width="10" align="right" class="layout" valign="middle"><img width="5" alt="bullet" height="11" src="images/bullet.gif">
</td>
<td colspan="2" class="layout" valign="top"><a href="documentation/developers/porting.php">Porting</a>
</td>
</tr>
<tr class="layout"><td width="10" class="layout" valign="top"></td>
<td width="10" align="right" class="layout" valign="middle"><img width="5" alt="bullet" height="11" src="images/bullet.gif">
</td>
<td colspan="2" class="layout" valign="top"><a href="documentation/developers/translating.php">Translating</a>
</td>
</tr>
<tr class="layout"><td width="10" class="layout" valign="top"></td>
<td width="10" align="right" class="layout" valign="middle"><img width="5" alt="bullet" height="11" src="images/bullet.gif">
</td>
<td colspan="2" class="layout" valign="top"><a href="documentation/developers/summaries/">Summaries</a>
</td>
</tr>
<tr class="layout"><td width="10" class="layout" valign="top"></td>
<td width="10" align="right" class="layout" valign="middle"><img width="5" alt="bullet" height="11" src="images/bullet.gif">
</td>
<td colspan="2" class="layout" valign="top"><a href="documentation/developers/links.php">Links</a>
</td>
</tr>
<tr class="layout"><td colspan="4" class="layout" valign="top"><br></td>
</tr>
<tr class="layout"><td colspan="4" class="layout" valign="top"><p><img src="images/pointer.png" alt="pointer">
<a href="contact.php">Contact</a>
</p>
</td>
</tr>
<tr class="layout"><td width="10" align="right" class="layout" valign="middle"><img width="5" alt="bullet" height="11" src="images/bullet.gif">
</td>
<td colspan="3" class="layout" valign="top"><a href="contact.php#mailing-lists">Mailing lists</a>
</td>
</tr>
<tr class="layout"><td width="10" align="right" class="layout" valign="middle"><img width="5" alt="bullet" height="11" src="images/bullet.gif">
</td>
<td colspan="3" class="layout" valign="top"><a href="contact.php#irc-channels">IRC channels</a>
</td>
</tr>
<tr class="layout"><td colspan="4" class="layout" valign="top"><br></td>
</tr>
<tr class="layout"><td colspan="4" class="layout" valign="top"><p><img src="images/pointer.png" alt="pointer">
<a href="credits.php">Credits</a>
</p>
</td>
</tr>
<tr class="layout"><td colspan="4" class="layout" valign="top"><p><img src="images/pointer.png" alt="pointer">
<a href="acknowledgements.php">Acknowledgements</a>
</p>
</td>
</tr>
<tr class="layout"><td colspan="4" class="layout" valign="top"><br></td>
</tr>
<tr class="layout"><td colspan="4" class="layout" valign="top"><p><img src="images/pointer.png" alt="pointer">
<a href="sponsors.php">Sponsors</a>
</p>
</td>
</tr>
<tr class="layout"><td colspan="4" class="layout" valign="top"><p><img src="images/pointer.png" alt="pointer">
<a href="linking.php">Linking</a>
</p>
</td>
</tr>
<tr class="layout"><td colspan="4" class="layout" valign="top"><p><img src="images/pointer.png" alt="pointer">
<a href="links.php">Links</a>
</p>
</td>
</tr>
</table>
</td>
</tr>
<tr class="layout"><td class="layout" valign="top"></td>
</tr>
<tr class="layout" valign="top"><td align="center" class="layout" valign="top"><table cellpadding="0" border="0" cellspacing="5" class="layout"><tr class="layout"><td class="layout" valign="top"><a href="http://www.trustsec.de/"><img src="images/trustec-small.png" alt="Trustsec" border="0">
</a>
</td>
</tr>
<tr class="layout"><td class="layout" valign="top"><a href="https://genesi.company/"><img src="images/genesi-small.gif" alt="Genesi USA" border="0">
</a>
</td>
</tr>
<tr class="layout"><td class="layout" valign="top"><a href="https://sourceforge.net/projects/aros/"><img width="88" alt="Get AROS Research Operating System at SourceForge.net. Fast, secure and Free Open Source software downloads" height="16" border="0" src="https://sourceforge.net/sflogo.php?group_id=43586&amp;type=10">
</a>
</td>
</tr>
</table>
</td>
</tr>
<tr class="layout"><td class="layout" valign="top"></td>
</tr>
<tr class="layout" valign="top"><td align="center" class="layout" valign="top"><a href="http://stopsoftwarepatents.eu/"><img src="images/noeupatents-small.png" alt="No EU patents" border="0">
</a>
</td>
</tr>
</table>
</td>
<td width="100%" class="layout" valign="top"><table style="text-align: justify; width: 100%; background: url(/images/bgcolormain.png);" border="0" cellpadding="1" cellspacing="1"><tr><td style="vertical-align: top;"><h1>Introduction<br><img style="width: 238px; height: 2px;" alt="spacer" src="/images/sidespacer.png"></h1><?php include('/home/project-web/aros/htdocs/rsfeed/randimg.php');  random_image("/images/thubs/","100","76"); ?><p>The AROS Research Operating System is a lightweight, efficient, and flexible
desktop operating system, designed to help you make the most of your computer.
It's an independent, portable and free project, aiming at being compatible
with AmigaOS at the API level (like Wine, unlike UAE), while improving on
it in many areas. The source code is available under an open source license,
which allows anyone to freely improve upon it.</p>
<p><a class="reference" href="introduction/index.php">Read more...</a></p>
</td></tr></table><br><table style="width: 100%; text-align: justify; margin-left: auto; margin-right: auto; background: url(/images/bgcolormain.png);" border="0" cellpadding="1" cellspacing="1"><tr><td><div class="section">
<h1><a id="distributions" name="distributions">Distributions</a></h1>
<p>Distributions are preconfigured and tested versions of AROS. They
contain a lot of useful user applications that don't come with the
main AROS.org binaries and will be of great interest to users. They may
not have the latest core system, but their stability and user-friendliness
is much greater than those of the nightly builds. If you are a user interested
in checking what AROS has to offer, use the distributions to get the most
complete AROS experience.</p>
<p><a class="reference" href="download.php">Read more...</a></p>
</td></tr></table><table style="width: 100%; text-align: justify; margin-left: auto; margin-right: auto; background: url(/images/bgcolormain.png);" border="0" cellpadding="1" cellspacing="1"><tr><td></div>
<div class="section">
<h1><a id="commits" name="commits">Commits</a></h1>
<object width="100%" height="400" data="commits.php"></object></td></tr></table><table style="width: 100%; text-align: justify; margin-left: auto; margin-right: auto;" border="0" cellpadding="1" cellspacing="1"><tr><td><div class="section">
<h2><a id="news" name="news">News</a></h2>
<a name="20161229"></a></div>
<div class="section">
<h2><a id="november-2016-highlights" name="november-2016-highlights">November 2016 Highlights</a></h2>
<table class="docutils field-list" frame="void" rules="none">
<col class="field-name">
<col class="field-body">
<tbody valign="top">
<tr class="field"><th class="field-name">Author:</th><td class="field-body">Krzysztof Smiechowicz</td>
</tr>
<tr class="field"><th class="field-name">Date:</th><td class="field-body">2016-12-29</td>
</tr>
</tbody>
</table>
<p>November saw a fair amount of changes in AROS system. Neil Cafferkey
provided further improvements to MUI and made 3D acceleration on
the IntelGMA video driver work again. Krzysztof Smiechowicz fixed
Windows-hosted AROS port, enabling Windows users to enjoy AROS again,
and was making final changes to ABIv0 system refresh. Olivier Brunner
fixed a memory trashing problem in AROS MUI List class and Miloslav Martinka
made a small but usefull improvement to Wanderer's Info tool, which from now
on shows the path at which the icon is located and allows opening that
path in separate Wanderer window.</p>
<p>Paolo Besser, who is working on next version of Icaros, <a class="reference" href="http://vmwaros.blogspot.it/2016/11/native-or-hosted-on-linux-both.html">announced</a> that
it will support also hosted flavors of AROS which is a welcomed
development by AROS community. It means Linux and Windows users will be
able to enjoy Icaros without a need to install virtual machine.</p>
<p>Third party development also provided new, interesting software. Marcus
Sacrow prepared versions of his EdiSyn and Maporium applications for AROS
ARM platform, which is a very welcomed development as ARM platform has very
few 3rd party applications at the moment. Yannick Erb provided a new
version of MAME (Multiple Arcade Machines Emulator) which can be downloaded
from AROS Archives.</p>
<a name="20161204"></a></div>
<div class="section">
<h2><a id="october-2016-highlights" name="october-2016-highlights">October 2016 Highlights</a></h2>
<table class="docutils field-list" frame="void" rules="none">
<col class="field-name">
<col class="field-body">
<tbody valign="top">
<tr class="field"><th class="field-name">Author:</th><td class="field-body">Krzysztof Smiechowicz</td>
</tr>
<tr class="field"><th class="field-name">Date:</th><td class="field-body">2016-12-04</td>
</tr>
</tbody>
</table>
<p>In October the AROS repository breached the 53,000 commits mark thanks
to contributions from multiple developers. Neil Cafferkey continued
his work on improving MUI as well as fixing the IntelGMA video driver.
Miloslav Martinka contributed further Czech localization as well as a
localized WiMP tool. Yannick Erb and Marcus Sackrow contributed fixes
to AROS programs and we saw the introduction of a new AROS GUI theme.
Lastly, the ARM Linux-hosted version of AROS has been fixed to compile
again as part of the ABIv0 refresh by Krzysztof Smiechowicz.</p>
<p>After September's explosion of distributions, October was quiet on
that front. Third party developers however continued their work.
Yannick Erb released an updated version of the ZuneView tool and Joerg Renkert
released a new version of his ModExplorer application for playing online
and offline music modules. AROS archives also saw the upload of two
interesting Zelda-type games, 'Time to Triumph' and 'Navi's Quest'.</p>
<a name="20161025"></a></div>
<div class="section">
<h2><a id="september-2016-highlights" name="september-2016-highlights">September 2016 Highlights</a></h2>
<table class="docutils field-list" frame="void" rules="none">
<col class="field-name">
<col class="field-body">
<tbody valign="top">
<tr class="field"><th class="field-name">Author:</th><td class="field-body">Krzysztof Smiechowicz</td>
</tr>
<tr class="field"><th class="field-name">Date:</th><td class="field-body">2016-10-25</td>
</tr>
</tbody>
</table>
<p>September was definitely a distro month. First, the AEROS distribution
was refreshed by Pascal Papara and brought to version 4.2.1 on all
supported platforms (Raspberry Pi 1/2/3 and Odroid XU3/XU4). The
changes include integration of EmuLa, installation of the Chrome browser
supporting Flash, SDL2 libraries, ScummVM 1.8 and the game 'Amiga Racer'.</p>
<p>Staying on the ARM platform, September also saw the first release of an
AROS distribution targetted at the Orange Pi platform. The distribution,
called PiAROS, uses the hosted version of AROS, similar to AEROS.</p>
<p>Lastly, Icaros Desktop, the x86 distribution by Paolo Besser, received
an update and is now available in version 2.1.3. The new version brings
updates to several applications, including Odyssey Web Browser, PortablE,
SimpleMail and Mapparium.</p>
<p>In core AROS development we had two activities. While Neil Cafferkey
continued making improvements to MUI, Miloslav Martinka added Czech
localization to a number of applications as well as implementing
localization in Appearance preferences.</p>
<a name="20160912"></a></div>
<div class="section">
<h2><a id="august-2016-highlights" name="august-2016-highlights">August 2016 Highlights</a></h2>
<table class="docutils field-list" frame="void" rules="none">
<col class="field-name">
<col class="field-body">
<tbody valign="top">
<tr class="field"><th class="field-name">Author:</th><td class="field-body">Krzysztof Smiechowicz</td>
</tr>
<tr class="field"><th class="field-name">Date:</th><td class="field-body">2016-09-12</td>
</tr>
</tbody>
</table>
<p>Opening this news summary is the announcement of a public, read-only access
for AROS repository. So far such access was only provided via the AROS
GIT-mirror but now it is also available on the main repository.</p>
<p>Also last month, a first full developer pack for AROS 68k has been
released by Krzysztof Smiechowicz in cooperation with the Apollo/Vampire
team. The dev-pack contains a ready-to-use native development environment
for 68k as well as scripts that will download and build AROS 68k on a
Linux host, delivering system and cross compiler.</p>
<p>In the AROS core there have been a few notable developments. Nick Andrews
continued making fixes to AROS to allow compilation under GCC 6.1.
Krzysztof Smiechowicz updated the OpenSSL library to version 1.0.1t and
started porting the OpenSSH 7.3 package, releasing the first, alpha version.
The work on the ssh client was triggered by the results of June's usage
survey. Neil Cafferkey continued making fixes and extensions to MUI's List
class and finally a number of programs received new or updated Czech
localization thanks to Miloslav Martinka.</p>
<p>Outside of the core team, Pascal Papara continued releasing updates to his
AROS distributions. In August AEROS 4.0.1 has been released with support for
Raspberry Pi 1, 2 and 3, containing updated kernels and an update for the
UAE4ARM emulator.</p>
<p>Closing this update, there have been two interesting third party developments
in August. SimpleMail 0.42 with SSL support has been released and a new
OpenGL-enabled port of the classic 'Elite 2: Frontier' has been made available
by David Douglas.</p>
<a name="20160821"></a></div>
<div class="section">
<h2><a id="july-2016-highlights" name="july-2016-highlights">July 2016 Highlights</a></h2>
<table class="docutils field-list" frame="void" rules="none">
<col class="field-name">
<col class="field-body">
<tbody valign="top">
<tr class="field"><th class="field-name">Author:</th><td class="field-body">Krzysztof Smiechowicz</td>
</tr>
<tr class="field"><th class="field-name">Date:</th><td class="field-body">2016-08-21</td>
</tr>
</tbody>
</table>
<p>In July the AROS core received a number of small fixes and updates from
various contributors, including Neil Cafferkey, Krzysztof Smiechowicz,
Matthias Rustler and Stefan Haubenthal. Notably, this work included fixing
the native GCC to correctly search for SDK paths.</p>
<p>Outside of core AROS developments, an interesting offer has been made by
the <a class="reference" href="http://www.apollo-core.com/">Apollo Team</a> . They offered free Vampire accelerator cards to
developers interested in improving AROS 68k. More information can be found
in <a class="reference" href="https://ae.amigalife.org/modules/newbb/viewtopic.php?topic_id=9827&amp;forum=4">this thread</a> .</p>
<p>We've also seen a good portion of new applications being released for
AROS. A number of games have been ported and are now available for
download from the <a class="reference" href="http://archives.aros-exec.org/">Archives</a> . Next, the SimpleMail mail client, has been
updated to version 0.41. Finally, a retro gaming center program called
EMULA has been made public by its author, Fabio Falcucci. EMULA is free to
use and includes additional features based on a subscription model.</p>
<p>Closing July's highlights, Pascal Papara released a new preview build of
his AROS x86 distribution called AROS Broadway. More information can be
found <a class="reference" href="http://www.aros-broadway.de/index.html">here</a> .</p>
</td></tr></table><br><td style="width: 243px; vertical-align: top;">

<table style="text-align: justify; width: 100%; background: url(/images/bgcolorright.png);" border="0" cellpadding="1" cellspacing="1"><tr><td>
<?php if ($win_ie56) { echo "<img alt=\"Archive Icon\" src=\"/images/archivedownloadicon.gif\" align=\"middle\">"; }
else { echo "<img alt=\"Archive Icon\" src=\"/images/archivedownloadicon.png\" align=\"middle\">"; } ?>
Latest ARCHIVE submissions:<br><img style="width: 238px; height: 2px;" alt="spacer" src="/images/sidespacer.png"><br>
<a href="http://archives.aros-exec.org">The AROS archives</a> contains the latest system content submitted by our community, and is the primary location for user applications, themes, graphics, and additional documentation.<br><br>
</td></tr></table>

<table style="text-align: justify; width: 100%; background: url(/images/bgcolorright.png);" border="0" cellpadding="1" cellspacing="1"><tr><td>
<?php if ($win_ie56) { echo "<img alt=\"Community Icon\" src=\"/images/communityicon.gif\" align=\"middle\">"; }
else { echo "<img alt=\"Community Icon\" src=\"/images/communityicon.png\" align=\"middle\">"; } ?>
Latest AROS-EXEC forum posts:<br><img style="width: 238px; height: 2px;" alt="spacer" src="/images/sidespacer.png"><br>
<a href="https://ae.amigalife.org/">AROS-EXEC</a> is the AROS primary community site. Get help with AROS, find out what is happening in the community, and post your thoughts.<br><br>
</td></tr></tbody></table>

<table style="width: 100%; text-align: justify; margin-left: auto; margin-right: auto; background: url(/images/bgcolorright.png);" border="0" cellpadding="1" cellspacing="1"><tr><td style="vertical-align: top;">
<?php if ($win_ie56) { echo "<img alt=\"Syndication Icon\" src=\"/images/rssicon1.gif\" align=\"middle\">"; } else { echo "<img alt=\"Syndication Icon\" src=\"/images/rssicon1.png\" align=\"middle\">"; } ?>
Syndication Feeds:<br><img style="width: 177px; height: 2px;" alt="spacer" src="/images/sidespacer.png"><br>
</td></tr></table>
</td></tr></table></div>
</div>
</td>
</tr>
</table>
</td>
</tr>
<tr class="layout"><td width="100%" align="center" class="layout" valign="bottom"><br>
    <?php
        echo "<table width=\"100%\"><tr><td>";
        echo "<div style=\"text-align: right;\">";
        echo "<font color=\"#aaaaaa\" size=\"-1\">";
    ?>
    Copyright © 1995-2019, The AROS Development Team. All rights reserved.<br>Amiga® is a trademark of Amiga Inc. All other trademarks belong to their respective owners.
    <?php
        echo "</font></div>";
        echo "</td></tr></table>";
    ?>
    <br><br></td>
</tr>
</table>

        <?php
            //define("_BBC_PAGE_NAME", "my page title");
            define("_BBCLONE_DIR", "mybbclone/");
            define("COUNTER", _BBCLONE_DIR."index.php");
            if (file_exists(COUNTER)) include_once(COUNTER);
        ?>
    </body>
</html>
