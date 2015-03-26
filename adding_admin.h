#ifndef ADDING_ADMIN_H
#define ADDING_ADMIN_H
#include <vector>
#include <QDialog>
#include "empleado.h"
using std::vector;
namespace Ui {
class adding_admin;
}

class adding_admin : public QDialog
{
    Q_OBJECT

public:
    explicit adding_admin(QWidget *parent = 0, vector<Empleado*>* = 0);
    ~adding_admin();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

private:
    Ui::adding_admin *ui;
    vector<Empleado*>* employee1;
    vector<Empleado*> gatitos;
};

#endif // ADDING_ADMIN_H
