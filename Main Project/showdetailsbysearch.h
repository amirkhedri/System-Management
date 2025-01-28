#ifndef SHOWDETAILSBYSEARCH_H
#define SHOWDETAILSBYSEARCH_H

#include <QDialog>
#include "linklist.h"
#include "func.h"
#include <limits>
namespace Ui {
class showdetailsbysearch;
}

class showdetailsbysearch : public QDialog
{
    Q_OBJECT

public:
    explicit showdetailsbysearch(Back::Employee* emp,QWidget *parent = nullptr);
    ~showdetailsbysearch();

private slots:
    void on_pushButton_clicked();

    void on_SearchButton_clicked();

private:
    Ui::showdetailsbysearch *ui;
    Back::Employee* emp;
};

#endif // SHOWDETAILSBYSEARCH_H
