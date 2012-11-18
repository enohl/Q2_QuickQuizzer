/*
 *Program: Q2_Admin
 *Source : filehandler.h
 *Purpose: Declaration of FileHandler class.
 *
 */

#ifndef FILEHANDLER_H
#define FILEHANDLER_H
#include <QString>
#include <QStringList>
#include <QHash>
#include <QFile>

class FileHandler
{
public:
    FileHandler();
    void getFile();
    void addKeyValue(QString key, QString value);
    QHash<QString, QString> getKeyValues();
private:
    QFile file;
    QStringList keys;
    //QStringList values;
    QHash<QString, QString> keyValues;
};

#endif // FILEHANDLER_H
