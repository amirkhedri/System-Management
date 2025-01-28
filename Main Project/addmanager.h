#ifndef ADDMANAGER_H
#define ADDMANAGER_H

#include <QDialog>
#include "linklist.h"
#include "func.h"
namespace Ui {
class AddManager;
}

class AddManager : public QDialog
{
    Q_OBJECT

public:
    explicit AddManager(Back::LinkList* list ,QWidget *parent = nullptr);
    ~AddManager();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::AddManager *ui;
    Back::LinkList* list;
};

#endif // ADDMANAGER_H
