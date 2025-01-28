#include "addmanager.h"
#include "ui_addmanager.h"
#include <iostream>
#include<QString>
#include<string>

using namespace std;

AddManager::AddManager(Back::LinkList* list ,QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AddManager),
    list(list)
{
    ui->setupUi(this);
}

AddManager::~AddManager()
{
    delete ui;
}


void AddManager::on_pushButton_clicked() // Add manager Button
{
    QString name=ui->Addmanagername->text();
    string Name=name.toStdString();
    QString ID=ui->AddmanagerID->text();
    string id=ID.toStdString();
    QString DID=ui->AddmanagerDid->text();
    string did=DID.toStdString();
    QString phone=ui->AddmanagerPhone->text();
    string Phone=phone.toStdString();
    QString NCode=ui->AddmanageNcode->text();
    string ncode=NCode.toStdString();
    QString Hour=ui->AddmanagerHW->text();
    int hour=Hour.toInt();

    addEmployee(*list , Name , id , did , Phone , ncode , hour);

    this->close();
}




void AddManager::on_pushButton_2_clicked()
{
    this->close();
}
