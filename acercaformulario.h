#ifndef ACERCAFORMULARIO_H
#define ACERCAFORMULARIO_H

#include <QDialog>

namespace Ui {
class AcercaFormulario;
}

class AcercaFormulario : public QDialog
{
    Q_OBJECT

public:
    explicit AcercaFormulario(QWidget *parent = 0);
    ~AcercaFormulario();

private slots:
    void on_pushButton_clicked();

private:
    Ui::AcercaFormulario *ui;
};

#endif // ACERCAFORMULARIO_H
