#ifndef SEARCHEMPLOYEE_H
#define SEARCHEMPLOYEE_H

#include <QDialog>
#include "linklist.h"
#include "func.h"

namespace Ui {
class searchEmployee;
}

class searchEmployee : public QDialog
{
    Q_OBJECT

public:
    explicit searchEmployee(Back::LinkList* list ,QWidget *parent = nullptr);
    ~searchEmployee();

private slots:
    void on_SearchButton_clicked();

    void on_pushButton_clicked();

private:
    Ui::searchEmployee *ui;
    Back::LinkList* list;
};

#endif // SEARCHEMPLOYEE_H
