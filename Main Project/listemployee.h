#ifndef LISTEMPLOYEE_H
#define LISTEMPLOYEE_H

#include <QDialog>
#include "linklist.h"
#include "func.h"
namespace Ui {
class listemployee;
}

class listemployee : public QDialog
{
    Q_OBJECT

public:
    explicit listemployee(Back::LinkList* list ,QWidget *parent = nullptr);
    ~listemployee();

private slots:
    void on_pushButton_clicked();

private:
    Ui::listemployee *ui;
    Back::LinkList* list;
};

#endif // LISTEMPLOYEE_H
