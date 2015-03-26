#include "errorlogin.h"
#include "ui_errorlogin.h"

errorlogin::errorlogin(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::errorlogin)
{
    ui->setupUi(this);
}

errorlogin::~errorlogin()
{
    delete ui;
}
