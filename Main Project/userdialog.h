#ifndef USERDIALOG_H
#define USERDIALOG_H

#include <QDialog>
#include "linklist.h"
#include "addmanager.h"
#include "adddeveloper.h"
#include "searchemployee.h"
#include "removeemployee.h"
#include "listemployee.h"
#include "file_management.h"
#include <QMessageBox>
namespace Ui {
class UserDialog;
}

class UserDialog : public QDialog
{
    Q_OBJECT

public:
    explicit UserDialog(Back::LinkList* list ,QWidget *parent = nullptr);
    ~UserDialog();

private slots:
    void on_pushButton_4_clicked();
    void on_pushButton_5_clicked();
    void on_pushButton_6_clicked();
    void on_pushButton_10_clicked();
    void on_pushButton_7_clicked();
    void on_pushButton_clicked();

    void on_pushButton_9_clicked();

private:
    Ui::UserDialog *ui;
    AddManager *addManager;
    AddDeveloper *addDeveloper;
    searchEmployee *searchEmployeeDialog;
    removeEmployee *removeEmployeeDialog;  // Declare the RemoveEmployee
    Back::LinkList* list;
};

#endif // USERDIALOG_H
