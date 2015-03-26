#ifndef GATOCONTROL_H
#define GATOCONTROL_H

#include <QDialog>
#include <vector>
#include "empleado.h"
using std::vector;
namespace Ui {
class gatocontrol;
}

class gatocontrol : public QDialog
{
    Q_OBJECT

public:
    explicit gatocontrol(QWidget *parent = 0, vector<Empleado*>* = 0);
    ~gatocontrol();

private slots:
    void on_empleaditos_currentIndexChanged(const QString &arg1);

<<<<<<< HEAD
    void on_pushButton_2_clicked();

    void on_gatocontrol_accepted();

    void on_pushButton_clicked();

=======
>>>>>>> b293d21c0dd70170a0f36cc02a3823017a8a924c
private:
    Ui::gatocontrol *ui;
    vector<Empleado*>* gat;
};

#endif // GATOCONTROL_H
