/*
 *Program: Q2_Admin
 *Source : dbhandler.h
 *Purpose: Declaration of DBHandler class.
 *
 */

#ifndef DBHANDLER_H
#define DBHANDLER_H

#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlRecord>
#include <QString>

class DBHandler{
public:

    DBHandler();
    int dbConnect(QString &host, QString &dbName, QString &dbUser, QString &dbPasswd);
    void dbClose();
    void dbShowTablesQuery();
private:

    QSqlDatabase db; 
    QSqlQuery query;
    QSqlRecord record;
};

#endif // DBHANDLER_H