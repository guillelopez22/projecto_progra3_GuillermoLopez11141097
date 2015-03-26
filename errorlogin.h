#ifndef ERRORLOGIN_H
#define ERRORLOGIN_H

#include <QDialog>

namespace Ui {
class errorlogin;
}

class errorlogin : public QDialog
{
    Q_OBJECT

public:
    explicit errorlogin(QWidget *parent = 0);
    ~errorlogin();

private slots:
    void on_buttonBox_accepted();

private:
    Ui::errorlogin *ui;
};

#endif // ERRORLOGIN_H
