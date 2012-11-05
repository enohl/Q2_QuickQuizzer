/*
 *Program: Q2_Admin
 *Source : mainwindow.cpp
 *Purpose: Implementation of mainwindow class.
 *
 */

#include "mainwindow.h"
#include "ui_mainwindow.h"
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

    connect(ui->btn_dbConnect, SIGNAL(clicked()), this, SLOT(connectToDB()));
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

void MainWindow::connectToDB(){
    this->DBHOST = ui->txt_dbHost->text();
    this->DBNAME = ui->txt_dbName->text();
    this->DBUSER = ui->txt_dbUser->text();
    this->DBPASSWD = ui->txt_dbPasswd->text();

    ui->txt_debug->setText(this->DBHOST+"\n"+this->DBNAME+"\n"+this->DBUSER+"\n"+this->DBPASSWD);
}
