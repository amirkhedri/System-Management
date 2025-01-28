#ifndef REMOVEEMPLOYEE_H
#define REMOVEEMPLOYEE_H

#include <QDialog>
#include "linklist.h"
#include "func.h"

namespace Ui {
class removeEmployee;
}

class removeEmployee : public QDialog
{
    Q_OBJECT

public:
    explicit removeEmployee(Back::LinkList* list ,QWidget *parent = nullptr);
    ~removeEmployee();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

private:
    Ui::removeEmployee *ui;
    Back::LinkList* list;
};

#endif // REMOVEEMPLOYEE_H
