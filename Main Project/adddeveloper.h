#ifndef ADDDEVELOPER_H
#define ADDDEVELOPER_H

#include <QDialog>
#include "linklist.h"
#include "func.h"
namespace Ui {
class AddDeveloper;
}

class AddDeveloper : public QDialog
{
    Q_OBJECT

public:
    explicit AddDeveloper(Back::LinkList* list , QWidget *parent = nullptr);
    ~AddDeveloper();

private slots:
    void on_AddDeveloperButton_clicked();

    void on_pushButton_clicked();

private:
    Ui::AddDeveloper *ui;
    Back::LinkList* list;
};

#endif // ADDDEVELOPER_H
