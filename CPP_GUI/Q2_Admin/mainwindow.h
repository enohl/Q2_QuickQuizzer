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
#include "filehandler.h"
#include <QSqlRelationalTableModel>
#include <QMessageBox>

namespace Ui {
    class MainWindow;
}

class QLabel;

class MainWindow : public QMainWindow {
    Q_OBJECT
public:

    MainWindow(QWidget *parent = 0);
    ~MainWindow();

    void showInfobox(QString msg, QString detmsg);

private slots:

    void btn_dbConnectOnClick();
    void btn_dbDisconnectOnClick();
    void btn_normanOnClick();
    void cmb_tabellenIndexChanged();
    void btn_deleteOnClick();
    void btn_saveOnClick();
    void btn_addOnClick();
    void btn_editOnClick();

protected:

    void changeEvent(QEvent *e);

private:

    Ui::MainWindow *ui;
    DBHandler dbHandler;
    FileHandler fileHandler;
    QLabel *mStatLabel;
    QString DBHOST;
    QString DBNAME;
    QString DBUSER;
    QString DBPASSWD;
    QSqlRelationalTableModel *tableModel;
    QMessageBox *msgBox;

    void fillComboBoxes();
    void fillTableView(QString tblName);
};

#endif
