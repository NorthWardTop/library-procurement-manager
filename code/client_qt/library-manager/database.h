#ifndef DATABASE_H
#define DATABASE_H

#include <Qtsql/QSqlDatabase>
#include <Qtsql/QSqlQuery>
#include <QtSql/QSql>
#include <QDebug>

#define QMYSQL      "QMYSQL"

#if _MSC_VER >= 1600
#pragma execution_character_set("utf-8")
#endif

extern int connDataBase(QString host, QString userName, QString passwd, QString dbName);


#endif // DATABASE_H
