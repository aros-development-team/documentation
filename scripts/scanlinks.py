#!/usr/bin/env python3

# This script scans all .en files in the current directory and its subdirectories
# for hyperlinks and prints them to stdout in HTML format.
# It also prints the file path where the hyperlink was found.

import os
import re

def escape_html(s):
    """Simple HTML escaping function"""
    return s.replace('&', '&amp;').replace('<', '&lt;').replace('>', '&gt;').replace('"', '&quot;').replace("'", '&#39;')

class Link:
    def __init__(self, url, ref):
        self.url = url
        self.ref = ref

    def __str__(self):
        return '<a href="{0}">{1}</a><br>'.format(escape_html(self.url), escape_html(self.url))

    def __repr__(self):
        return self.__str__()

def find_hyperlinks(directory):
    hyperlinks = []
    for root, _, files in os.walk(directory):
        for file in files:
            if file.endswith(('.en.rst')): # change this if you want to scan other languages
                file_path = os.path.join(root, file)
                with open(file_path, 'r') as f:
                    content = f.read()
                    links = re.findall(r'http[s]?://[^\s>`")]+', content)
                    for link in links:
                        hyperlinks.append(Link(link, file_path))
    #hyperlinks.sort(key=lambda x: x.url)
    return hyperlinks

def save_to_stdout(hyperlinks):
    print('<html><body>')
    for link in hyperlinks:
        print(link)
        print(link.ref + '<br><br>')
    print('</body></html>')

if __name__ == "__main__":
    directory_to_scan = '.' # start with current directory
    hyperlinks = find_hyperlinks(directory_to_scan)
    save_to_stdout(hyperlinks)
