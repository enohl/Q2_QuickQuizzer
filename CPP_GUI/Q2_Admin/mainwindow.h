/*
 *Program: Q2_Admin
 *Source : mainwindow.h
 *Purpose: Declaration of mainwindow class.
 *
 */
#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "dbhandler.h"


namespace Ui {
    class MainWindow;
}

class MainWindow : public QMainWindow {
    Q_OBJECT
public:

    MainWindow(QWidget *parent = 0);
    ~MainWindow();
private slots:

    void btn_dbConnectOnFirstClick();
    void btn_dbConnectOnSecondClick();
protected:

    void changeEvent(QEvent *e);
private:

    Ui::MainWindow *ui;
    DBHandler dbHandler;
    QString DBHOST;
    QString DBNAME;
    QString DBUSER;
    QString DBPASSWD;
};

#endif // MAINWINDOW_H
