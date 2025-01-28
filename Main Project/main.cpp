#include "mainwindow.h"
#include "linklist.h"
#include "employee.h"
#include "manager.h"
#include "developer.h"
#include "func.h"
#include "file_management.h"
#include <conio.h>
#include <QApplication>

int main(int argc, char *argv[])
{
    Back::LinkList* list = new Back::LinkList;
    QApplication a(argc, argv);
    MainWindow w(list);
    w.show();
    list = nullptr;
    delete list;
    return a.exec();
}
