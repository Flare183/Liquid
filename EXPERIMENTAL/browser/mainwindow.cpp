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
    connect(browser, SIGNAL(urlChanged(QUrl)), this, SLOT(setText()));
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

void MainWindow::setText()
{
    QUrl m_url = browser->url();
    url->setText(m_url.toString());
}

MainWindow::~MainWindow()
{

}
