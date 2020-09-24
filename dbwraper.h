#ifndef DBWRAPER_H
#define DBWRAPER_H

#include <QString>
#include <QDebug>
#include <QMap>
#include <QObject>
#include <QSql>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QList>

class DbWraper
{
public:
    DbWraper(QString file); // SQLITE
    DbWraper(QString dbdriver, QString dbhost, int dbport, QString dbuser, QString dbpassword, QString dbname); // other drivers

    QList<QMap<QString, QString>> select(QString table/*, QMap<QString, QString> params*/);
    bool insert(QString table, QMap<QString, QString> params);
    bool update(QString table, QMap<QString, QString> params, int id);
    bool remove(int id);
    bool remove(QString name);
    bool connect();
    bool disconnect();
    bool isConnected();
    int lastId();

private:
    QString dbdriver, dbhost, dbuser, dbpassword, dbname;
    int dbport;
    QSqlQuery query;
};

#endif // DBWRAPER_H
