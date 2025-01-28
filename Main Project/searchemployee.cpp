#include "searchemployee.h"
#include "ui_searchemployee.h"
#include "showdetailsbysearch.h" // Include the header for the new dialog
#include <QString>
#include <string>
#include <iostream>
#include <QMessageBox>

using namespace std;

searchEmployee::searchEmployee(Back::LinkList* list , QWidget *parent) :
    QDialog(parent),
    ui(new Ui::searchEmployee),
    list(list)
{
    ui->setupUi(this);
}

searchEmployee::~searchEmployee()
{
    delete ui;
}

void searchEmployee::on_SearchButton_clicked()
{
    QString SEARCHID = ui->SearchID->text();
    string searchID = SEARCHID.toStdString();
    Back::Nodes* temp = list->getHead();
    Back::Employee* emp = nullptr;
    while(temp){
        if(temp->getData()->getID() == searchID){
            emp = temp->getData();
            break;
        }
        else{
            temp = temp->getNext();
        }
    }
    if(emp){
        showdetailsbysearch *detailDialog = new showdetailsbysearch(emp ,this);
        detailDialog->show();
        detailDialog = nullptr;
        delete detailDialog;
    }
    else{
        QMessageBox::critical(this , "Error" , "Employee not found" , QMessageBox::Ok);
        return;
    }
    temp = nullptr;
    delete temp;
    emp = nullptr;
    delete emp;

    this->close();

}

void searchEmployee::on_pushButton_clicked()
{
    this->close();
}
