#include "acercatfm.h"
#include "ui_acercatfm.h"

acercaTFM::acercaTFM(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::acercaTFM)
{
    ui->setupUi(this);
}

acercaTFM::~acercaTFM()
{
    delete ui;
}

void acercaTFM::on_pushButton_clicked()
{
    this->close(); //Cierro el formulario.;
}
