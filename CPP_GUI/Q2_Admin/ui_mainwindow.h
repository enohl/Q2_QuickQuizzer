/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Thu Nov 8 21:00:47 2012
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFormLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QStatusBar>
#include <QtGui/QTabWidget>
#include <QtGui/QTextEdit>
#include <QtGui/QToolBar>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout_2;
    QTabWidget *tabWidget;
    QWidget *tab;
    QHBoxLayout *horizontalLayout;
    QFormLayout *formLayout;
    QLabel *lbl_dbHost;
    QLineEdit *txt_dbHost;
    QLabel *lbl_dbName;
    QLineEdit *txt_dbName;
    QLabel *lbl_dbUser;
    QLineEdit *txt_dbUser;
    QLineEdit *txt_dbPasswd;
    QPushButton *btn_dbConnect;
    QLabel *lbl_dbUserPasswd;
    QTextEdit *txt_debug;
    QLabel *lbl_debug;
    QWidget *tab_2;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(693, 572);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        verticalLayout_2 = new QVBoxLayout(centralWidget);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(tabWidget->sizePolicy().hasHeightForWidth());
        tabWidget->setSizePolicy(sizePolicy);
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        horizontalLayout = new QHBoxLayout(tab);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        formLayout = new QFormLayout();
        formLayout->setSpacing(6);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::ExpandingFieldsGrow);
        lbl_dbHost = new QLabel(tab);
        lbl_dbHost->setObjectName(QString::fromUtf8("lbl_dbHost"));

        formLayout->setWidget(0, QFormLayout::LabelRole, lbl_dbHost);

        txt_dbHost = new QLineEdit(tab);
        txt_dbHost->setObjectName(QString::fromUtf8("txt_dbHost"));

        formLayout->setWidget(0, QFormLayout::FieldRole, txt_dbHost);

        lbl_dbName = new QLabel(tab);
        lbl_dbName->setObjectName(QString::fromUtf8("lbl_dbName"));

        formLayout->setWidget(1, QFormLayout::LabelRole, lbl_dbName);

        txt_dbName = new QLineEdit(tab);
        txt_dbName->setObjectName(QString::fromUtf8("txt_dbName"));

        formLayout->setWidget(1, QFormLayout::FieldRole, txt_dbName);

        lbl_dbUser = new QLabel(tab);
        lbl_dbUser->setObjectName(QString::fromUtf8("lbl_dbUser"));

        formLayout->setWidget(2, QFormLayout::LabelRole, lbl_dbUser);

        txt_dbUser = new QLineEdit(tab);
        txt_dbUser->setObjectName(QString::fromUtf8("txt_dbUser"));

        formLayout->setWidget(2, QFormLayout::FieldRole, txt_dbUser);

        txt_dbPasswd = new QLineEdit(tab);
        txt_dbPasswd->setObjectName(QString::fromUtf8("txt_dbPasswd"));

        formLayout->setWidget(3, QFormLayout::FieldRole, txt_dbPasswd);

        btn_dbConnect = new QPushButton(tab);
        btn_dbConnect->setObjectName(QString::fromUtf8("btn_dbConnect"));

        formLayout->setWidget(4, QFormLayout::FieldRole, btn_dbConnect);

        lbl_dbUserPasswd = new QLabel(tab);
        lbl_dbUserPasswd->setObjectName(QString::fromUtf8("lbl_dbUserPasswd"));

        formLayout->setWidget(3, QFormLayout::LabelRole, lbl_dbUserPasswd);

        txt_debug = new QTextEdit(tab);
        txt_debug->setObjectName(QString::fromUtf8("txt_debug"));

        formLayout->setWidget(5, QFormLayout::FieldRole, txt_debug);

        lbl_debug = new QLabel(tab);
        lbl_debug->setObjectName(QString::fromUtf8("lbl_debug"));

        formLayout->setWidget(5, QFormLayout::LabelRole, lbl_debug);


        horizontalLayout->addLayout(formLayout);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        tabWidget->addTab(tab_2, QString());

        verticalLayout_2->addWidget(tabWidget);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 693, 25));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0, QApplication::UnicodeUTF8));
        lbl_dbHost->setText(QApplication::translate("MainWindow", "DB-Host", 0, QApplication::UnicodeUTF8));
        lbl_dbName->setText(QApplication::translate("MainWindow", "Datenbank", 0, QApplication::UnicodeUTF8));
        lbl_dbUser->setText(QApplication::translate("MainWindow", "Benutzer", 0, QApplication::UnicodeUTF8));
        btn_dbConnect->setText(QApplication::translate("MainWindow", "Verbinden", 0, QApplication::UnicodeUTF8));
        lbl_dbUserPasswd->setText(QApplication::translate("MainWindow", "Passwort", 0, QApplication::UnicodeUTF8));
        lbl_debug->setText(QApplication::translate("MainWindow", "Debug-Info", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "Tab 1", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindow", "Tab 2", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
