#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    browser = new QWebView();
    browser->show();
    setCentralWidget(browser);
    setupToolBar();
    addToolBar(toolBar);
    url = new QLineEdit();
    toolBar->addWidget(url);


    QWebSettings::globalSettings()->setAttribute(QWebSettings::PluginsEnabled, true);





    connect(url, SIGNAL(returnPressed()), this, SLOT(loadUrl()));
}

void MainWindow::setupToolBar()
{
    toolBar = new QToolBar();
}
void MainWindow::loadUrl()
{
    browser->load(QUrl(url->text()));
    browser->show();
}

MainWindow::~MainWindow()
{

}
