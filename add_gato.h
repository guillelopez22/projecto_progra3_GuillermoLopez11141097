#ifndef ADD_GATO_H
#define ADD_GATO_H

#include <vector>
#include <QDialog>
#include "empleado.h"
using std::vector;
namespace Ui {
class add_gato;
}

class add_gato : public QDialog
{
    Q_OBJECT

public:
    explicit add_gato(QWidget *parent = 0, vector<Empleado*>* = 0);
    ~add_gato();

private slots:
    void on_pushButton_2_clicked();

private:
    Ui::add_gato *ui;
    vector<Empleado*>* employee2;
};

#endif // ADD_GATO_H
