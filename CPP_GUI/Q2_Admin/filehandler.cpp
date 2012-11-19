#include "filehandler.h"
#include <QDebug>
#include <QSettings>
#include <QStringList>

FileHandler::FileHandler()
{
    QString fileName = "file.ini";
    this->file.setFileName(fileName);
    if(this->file.exists()){
        qDebug() << "File " << fileName << " does exist.";
    }if(!this->file.open(QIODevice::ReadWrite|QIODevice::Text)){
        qDebug() << "Could not open file.";
    }
    QSettings settings(fileName, QSettings::IniFormat);
    this->keys = settings.allKeys();
    foreach (const QString &key, this->keys) {
        this->keyValues.insert(key, settings.value(key).toString());
    }
    qDebug() << this->keyValues;
}

QHash<QString, QString> FileHandler::getKeyValues(){
    return this->keyValues;
}

QStringList FileHandler::getKeys(){
    return this->keys;
}
