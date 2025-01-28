#include "removeemployee.h"
#include "ui_removeemployee.h"
#include "showdetailsbysearch.h"
#include <QString>
#include <string>
#include <QMessageBox>
using namespace std;

removeEmployee::removeEmployee(Back::LinkList* list ,QWidget *parent) :
    QDialog(parent),
    ui(new Ui::removeEmployee),
    list(list)
{
    ui->setupUi(this);
}

removeEmployee::~removeEmployee()
{
    delete ui;
}

void removeEmployee::on_pushButton_2_clicked()
{
    this->close();
}

void removeEmployee::on_pushButton_clicked()
{
    QString RemoveID = ui->lineEdit->text();
    string removeID = RemoveID.toStdString();

    Back::Nodes* temp = list->getHead();
    Back::Employee* emp = nullptr;
    while(temp){
        if(temp->getData()->getID() == removeID){
            emp = temp->getData();
            break;
        }
        else{
            temp = temp->getNext();
        }
    }

    if (emp) {
        showdetailsbysearch *detailDialog = new showdetailsbysearch(emp ,this);
        detailDialog->show();
        detailDialog = nullptr;
        delete detailDialog;
        std::string id = emp->getID();
        temp = list->getHead();
        list->popNode(*emp);
        QMessageBox::information(this, "Success", "Successfully deleted, this person was removed");
    } else {
        QMessageBox::warning(this, "Error", "Not found");
    }
    temp = nullptr;
    delete temp;
    emp = nullptr;
    delete emp;
}
