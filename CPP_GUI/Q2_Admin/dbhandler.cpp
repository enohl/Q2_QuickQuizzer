/*
 *Program: Q2_Admin
 *Source : dbhandler.cpp
 *Purpose: Implementation of mainwindow class.
 *
 */

#include "dbhandler.h"
#include <QtSql>

DBHandler::DBHandler()
{
    this->db = QSqlDatabase::addDatabase("QMYSQL");
}

void DBHandler::dbShowTablesQuery(){
    this->query = QSqlQuery("SHOW TABLES;");
    this->record = this->query.record();
    QString tables[6];
    int count = 0;
    while (this->query.next()){
        QString table = this->query.value(this->record.indexOf("Tables_in_test")).toString();
        qDebug() << this->query.at() << ":" << table;
        tables[count] = table;
        count++;
    }
}

int DBHandler::dbConnect(QString &host, QString &dbName, QString &dbUser, QString &dbPasswd){
    this->db.setHostName(host);
    this->db.setDatabaseName(dbName);
    this->db.setUserName(dbUser);
    this->db.setPassword(dbPasswd);

    if (!db.open()){
        qDebug() << db.lastError();
        return 1;
    }
    return 0;
}



void DBHandler::dbClose(){
    this->db.close();
    //this->db.removeDatabase("qt_sql_default_connection");
}
