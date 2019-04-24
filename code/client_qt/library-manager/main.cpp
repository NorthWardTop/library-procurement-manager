#include "mainwindow.h"
#include <QApplication>
#include "logindlg.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    //w.show();
    LoginDlg loginDlg;
    loginDlg.show();

    return a.exec();
}
