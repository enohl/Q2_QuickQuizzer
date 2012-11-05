/*
 *Program: Q2_Admin
 *Source : main.cpp
 *Purpose: Holding main() function and instanciating main Q2_Admin window object.
 *
 */


#include <QtGui/QApplication>
#include "mainwindow.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}
