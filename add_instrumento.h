#ifndef ADD_INSTRUMENTO_H
#define ADD_INSTRUMENTO_H

#include <QDialog>
#include "instrumento.h"
#include <vector>

using std::vector;

namespace Ui {
class add_instrumento;
}

class add_instrumento : public QDialog
{
    Q_OBJECT

public:
    explicit add_instrumento(QWidget *parent = 0, vector<Instrumento*>* = 0);
    ~add_instrumento();

private slots:
    void on_comboBox_currentIndexChanged(int index);

    void on_comboBox_currentIndexChanged(const QString &arg1);

private:
    Ui::add_instrumento *ui;
    vector<Instrumento*>* inst;
};

#endif // ADD_INSTRUMENTO_H
