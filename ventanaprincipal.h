#ifndef VENTANAPRINCIPAL_H
#define VENTANAPRINCIPAL_H

#include <QMainWindow>
#include <QFileDialog>
#include <QFile>
#include <QTextStream>
#include "puntoscampo.h"


QT_BEGIN_NAMESPACE
namespace Ui { class VentanaPrincipal; }
QT_END_NAMESPACE

class VentanaPrincipal : public QMainWindow
{
    Q_OBJECT

public:
    QList<PuntosCampo> lista_puntos;
    explicit VentanaPrincipal(QWidget *parent = 0);
    ~VentanaPrincipal();

private slots:
    void on_actionSalir_triggered();

    void on_actionAbrir_triggered();

    void on_actionCerrar_triggered();

    void on_btn_salir_clicked();

    void on_btn_proceso_clicked();

    void on_btn_archiv_sal_clicked();

    void on_actionAcerca_de_triggered();

    void on_btn_proceso_2_clicked();

    void on_actionLimpiar_Archivo_triggered();

    void on_pushButton_clicked();

private:
    Ui::VentanaPrincipal *ui;
};
#endif // VENTANAPRINCIPAL_H
