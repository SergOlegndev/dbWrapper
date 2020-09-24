#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "dbwraper.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QList<QMap<QString, QString>> users;

    QMap<QString, QString> user1;
    user1.insert("user1", "UserName1");
    user1.insert("user1", "50");
    users.push_back(user1);

    QMap<QString, QString> user2;
    user2.insert("user2", "UserName2");
    user2.insert("user2", "80");
    users.push_back(user2);


    for (const auto& user : users)
    {
        for(const auto& key : user.keys())
        {
            qDebug() << key << user.value(key) << endl;
        }
    }




}

MainWindow::~MainWindow()
{
    delete ui;
}

