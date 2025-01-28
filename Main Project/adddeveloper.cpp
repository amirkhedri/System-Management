#include "adddeveloper.h"
#include "ui_adddeveloper.h"
#include <iostream>
#include <string>
#include <QString>
using namespace std;

AddDeveloper::AddDeveloper(Back::LinkList* list ,QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AddDeveloper)
    ,list(list)
{
    ui->setupUi(this);
}

AddDeveloper::~AddDeveloper()
{
    delete ui;
}

void AddDeveloper::on_AddDeveloperButton_clicked()
{
    QString NameD=ui->AddDevelopername->text();
    string nameD=NameD.toStdString();
    QString IDD=ui->AddDeveloperID->text();
    string idd=IDD.toStdString();
    QString PhoneD=ui->AddDeveloperPhone->text();
    string phoneD=PhoneD.toStdString();
    QString DIDD=ui->AddDeveloperDid->text(); //departeman ID Developer
    string didd=DIDD.toStdString();
    QString NCodeD=ui->AddDeveloperNC->text();
    string ncoded=NCodeD.toStdString();
    QString HWD=ui->AddDeveloperHW->text(); // Hour work Developer
    int hwd=HWD.toInt();

    addEmployee(*list , nameD , idd , phoneD , didd , ncoded , hwd);

    this->close();
}

void AddDeveloper::on_pushButton_clicked()
{
    this->close();
}
