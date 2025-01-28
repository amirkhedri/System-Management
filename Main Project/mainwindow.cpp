#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(Back::LinkList* list ,QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    , userDialog(nullptr)  // مقداردهی اولیه به nullptr
    , list(list)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_3_clicked()
{
    this->close();
}

void MainWindow::on_pushButton_4_clicked()
{
    if (!userDialog) {
        userDialog = new UserDialog(list ,this);
    }
    this->close();
    userDialog->show();
    userDialog = nullptr;
    delete userDialog;

}

