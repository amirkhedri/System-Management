#include "listemployee.h"
#include "ui_listemployee.h"

listemployee::listemployee(Back::LinkList* list ,QWidget *parent) :
    QDialog(parent),
    ui(new Ui::listemployee),
    list(list)
{
    ui->setupUi(this);
    ui->listWidget->addItem("# | name        | ID   | department ID");
    Back::Nodes* tmp = list->getHead();
    for(int i=1 ; i<=list->getSize() ; i++){
        ui->listWidget->addItem(QString::number(i) + "- " + QString::fromUtf8(tmp->getData()->getName().c_str()) + "          " +QString::fromUtf8(tmp->getData()->getID().c_str()) + "          " +QString::fromUtf8(tmp->getData()->getDepartmentID().c_str()));
        tmp = tmp->getNext();
    }
}

listemployee::~listemployee()
{
    delete ui;
}

void listemployee::on_pushButton_clicked()
{
    this->close();
}
