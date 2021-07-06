#include "acercaformulario.h"
#include "ui_acercaformulario.h"

AcercaFormulario::AcercaFormulario(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AcercaFormulario)
{
    ui->setupUi(this);
}

AcercaFormulario::~AcercaFormulario()
{
    delete ui;
}

void AcercaFormulario::on_pushButton_clicked()
{
    this->close(); //this es un puntero al objeto actual;
    //Cierro el formulario.;
}
