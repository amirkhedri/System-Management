#include "showdetailsbysearch.h"
#include "ui_showdetailsbysearch.h"

showdetailsbysearch::showdetailsbysearch(Back::Employee* emp ,QWidget *parent) :
    QDialog(parent),
    ui(new Ui::showdetailsbysearch),
    emp(emp)
{
    ui->setupUi(this);
    QString Name,ID,DID,phone,National_code;
    QString Hours_of_work;
    QString salary;

    Name = QString::fromUtf8(emp->getName().c_str());
    ID = QString::fromUtf8(emp->getID().c_str());
    DID = QString::fromUtf8(emp->getDepartmentID().c_str());
    phone = QString::fromUtf8(emp->getPhoneNumber().c_str());
    National_code = QString::fromUtf8(emp->getCodeMeli().c_str());
    Hours_of_work = QString::number(emp->getHour());
    salary = QString::number(emp->getSalary(), 'f' , 6);

    ui->personalname->setText(Name);
    ui->d_id->setText(DID);
    ui->ID->setText(ID);
    ui->Phone->setText(phone);
    ui->National->setText(National_code);
    ui->how->setText(Hours_of_work);
    ui->S->setText(salary);



}

showdetailsbysearch::~showdetailsbysearch()
{
    delete ui;
}

void showdetailsbysearch::on_pushButton_clicked()
{
    this->close();
}

void showdetailsbysearch::on_SearchButton_clicked()
{
    this->close();
}
