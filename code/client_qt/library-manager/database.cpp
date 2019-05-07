#include "database.h"
#include <Qtsql/QSqlDatabase>
#include <Qtsql/QSqlQuery>
#include <QtSql/QSql>
#include <QDebug>


/**
 * @brief connDataBase
 * @param host
 * @param userName
 * @param passwd
 * @param dbName
 * @return
 */
int connDataBase(QString host, QString userName, QString passwd, QString dbName)
{
    int ret=-1;

    //打印可用数据库驱动
    QStringList drivers = QSqlDatabase::drivers();
    foreach(QString driver, drivers)
        qDebug() << "\t驱动可用:"<< driver;
    qDebug() << "End";

    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName(host);
    db.setDatabaseName(dbName);
    db.setUserName(userName);
    db.setPassword(passwd);

    if(db.open())
    {
        qDebug() << "数据库打开成功!";
        ret=-1;
    }
    else
    {
        qDebug() << "数据库打开错误!";
        ret=0;
    }
    return ret;
}
