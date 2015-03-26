#ifndef LIST_GATOS_H
#define LIST_GATOS_H

#include <QDialog>
#include "empleado.h"
#include <vector>
using std::vector;
namespace Ui {
class list_gatos;
}

class list_gatos : public QDialog
{
    Q_OBJECT

public:
    explicit list_gatos(QWidget *parent = 0, vector<Empleado*>* = 0);
    ~list_gatos();

private:
    Ui::list_gatos *ui;
    vector<Empleado*>* empss;
};

#endif // LIST_GATOS_H
