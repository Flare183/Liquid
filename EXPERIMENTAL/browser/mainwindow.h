#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QtGui/QMainWindow>
#include <QtWebKit>

#include <QLineEdit>
#include <QToolBar>
class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = 0);
    ~MainWindow();
private slots:
    void loadUrl();
    void setText();
private:
    void setupToolBar();

    QToolBar * toolBar;
    QWebView * browser;
    QLineEdit * url;
};

#endif // MAINWINDOW_H
