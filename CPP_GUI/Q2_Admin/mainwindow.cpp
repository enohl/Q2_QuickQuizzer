/*
 *Program: Q2_Admin
 *Source : mainwindow.cpp
 *Purpose: Implementation of mainwindow class.
 *
 */

#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "dbhandler.h"


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->dbHandler = DBHandler();
    mStatLabel = new QLabel;
    statusBar()->addPermanentWidget(mStatLabel);

    // Signals/Slots
    connect(ui->btn_dbConnect, SIGNAL(clicked()), this, SLOT(btn_dbConnectOnClick()));
    connect(ui->btn_dbDisconnect, SIGNAL(clicked()), this, SLOT(btn_dbDisconnectOnClick()));
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

// Befülle ComboBox mit den Fragekategorien
void MainWindow::fillComboBoxes(){

    QStringList categories      = this->dbHandler.dbGetCategories();
    QStringList difficulties    = this->dbHandler.dbGetDifficulties();
    ui->cmb_category->clear();
    ui->cmb_difficulty->clear();
    ui->cmb_category->addItems(categories);
    ui->cmb_difficulty->addItems(difficulties);
}

// SLOT: Button-Methode "Verbinden"
void MainWindow::btn_dbConnectOnClick(){

    // lese Eingabe felder aus
    this->DBHOST = ui->txt_dbHost->text();
    this->DBNAME = ui->txt_dbName->text();
    this->DBUSER = ui->txt_dbUser->text();
    this->DBPASSWD = ui->txt_dbPasswd->text();

    // Verbinde zu Datenbank
    int returnCode = this->dbHandler.dbConnect(this->DBHOST,this->DBNAME,this->DBUSER,this->DBPASSWD);

    if (returnCode == 0) {

        // Wenn Verbindung erfolgreich,..
        // Deaktiviere Verbinden-Button
        ui->btn_dbConnect->setEnabled(false);

        // Aktiviere Trennen-Button
        ui->btn_dbDisconnect->setEnabled(true);

        //Aktiviere Senden-Button für Neue Quizfrage
        ui->btn_sendQuestion->setEnabled(true);

        this->mStatLabel->setText("Datenbankverbindung aktiv.");

        fillComboBoxes();

    } else {
        // Verbindung nicht erfolgreich..
        ui->txt_debug->append("Verbindung konnte nicht aufgebaut werden.");
        this->mStatLabel->setText("Datenbankverbindung getrennt.");
    }

    // Debug-Informationen
    QString returnString = QString::number(returnCode);
    ui->txt_debug->append("DB-Host: "+this->DBHOST+"\nDatenbank: "+this->DBNAME+"\nBenutzer: "+this->DBUSER+"\nPasswort: "+this->DBPASSWD+"\nDB-Connect-Returncode="+returnString);

    //Frage alle Tabelle der DB ab
    this->dbHandler.dbShowTablesQuery(&this->DBNAME);
    //Frage alle Fragekategorien ab
    this->dbHandler.dbGetCategories();
}

// SLOT: Button-Methode "Trennen"
void MainWindow::btn_dbDisconnectOnClick(){

    // Trenne Datenbankverbindung
    this->dbHandler.dbClose();

    //Aktiviere/Deaktiviere entsprechende Buttons
    ui->btn_dbDisconnect->setEnabled(false);
    ui->btn_dbConnect->setEnabled(true);
    ui->btn_sendQuestion->setEnabled(false);

    //Leere die ComboBoxen
    ui->cmb_category->clear();
    ui->cmb_difficulty->clear();

    //Debug-Informationen
    ui->txt_debug->append("Verbindung geschlossen");

    //StatusBar aktualisieren
    this->mStatLabel->setText("Datenbankverbindung getrennt.");
}

