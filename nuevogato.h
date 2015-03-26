#ifndef NUEVOGATO_H
#define NUEVOGATO_H

#include <QDialog>

namespace Ui {
class nuevogato;
}

class nuevogato : public QDialog
{
    Q_OBJECT

public:
    explicit nuevogato(QWidget *parent = 0);
    ~nuevogato();

private:
    Ui::nuevogato *ui;
};

#endif // NUEVOGATO_H
