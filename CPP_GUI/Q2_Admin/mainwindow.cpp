/*
 *Program: Q2_Admin
 *Source : mainwindow.cpp
 *Purpose: Implementation of mainwindow class.
 *
 */

#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "dbhandler.h"
/*#include "/usr/include/mysql-connector/mysql_connection.h"

#include </usr/include/mysql-connector/cppconn/driver.h>
#include </usr/include/mysql-connector/cppconn/exception.h>
#include </usr/include/mysql-connector/cppconn/resultset.h>
#include </usr/include/mysql-connector/cppconn/statement.h>
#include </usr/include/mysql-connector/cppconn/prepared_statement.h>*/


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->dbHandler = DBHandler();
    connect(ui->btn_dbConnect, SIGNAL(clicked()), this, SLOT(btn_dbConnectOnFirstClick()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::changeEvent(QEvent *e)
{
    QMainWindow::changeEvent(e);
    switch (e->type()) {
    case QEvent::LanguageChange:
        ui->retranslateUi(this);
        break;
    default:
        break;
    }
}

void MainWindow::btn_dbConnectOnSecondClick(){
    this->dbHandler.dbClose();
    ui->txt_debug->append("Verbindung geschlossen");
}

void MainWindow::btn_dbConnectOnFirstClick(){
    this->DBHOST = ui->txt_dbHost->text();
    this->DBNAME = ui->txt_dbName->text();
    this->DBUSER = ui->txt_dbUser->text();
    this->DBPASSWD = ui->txt_dbPasswd->text();

    int returnCode = this->dbHandler.dbConnect(this->DBHOST,this->DBNAME,this->DBUSER,this->DBPASSWD);
    if (returnCode == 0) {
        ui->btn_dbConnect->setText(QString::fromUtf8("Verbindung schließen"));
        disconnect(ui->btn_dbConnect, SIGNAL(clicked()), this, SLOT(btn_dbConnectOnFirstClick()));
        connect(ui->btn_dbConnect, SIGNAL(clicked()), this, SLOT(btn_dbConnectOnSecondClick()));
    }
    QString returnString = QString::number(returnCode);
    ui->txt_debug->setText(this->DBHOST+"\n"+this->DBNAME+"\n"+this->DBUSER+"\n"+this->DBPASSWD+"\nReturncode="+returnString);
    this->dbHandler.dbShowTablesQuery();
}


