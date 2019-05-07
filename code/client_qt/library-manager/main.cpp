#include "mainwindow.h"
#include <QApplication>
#include "logindlg.h"
#include "database.h"


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    LoginDlg loginDlg(&w);
    connDataBase("123.206.82.143", "root", "lyh2o16", "library-manager");

    //w.show();
    loginDlg.show();

    return a.exec();
}
