#!/usr/bin/python
# -*- coding: utf-8 -*-

import sys
from PyQt4.QtCore import *
from PyQt4.QtGui import *
from PyQt4.QtWebKit import *

app = QApplication(sys.argv)

webView = QWebView();

webView.settings().setAttribute(QWebSettings.globalSettings().PluginsEnabled, True)
webView.load(QUrl("http://google.se"))
webView.show()
sys.exit(app.exec_())