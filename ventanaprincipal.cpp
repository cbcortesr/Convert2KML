#include "ventanaprincipal.h"
#include "ui_ventanaprincipal.h"
#include "generar_kml.h"
#include "generar_kml2.h"
#include "acercatfm.h"
#include <QTextStream>
#include <QMessageBox>
#include <QFileDialog>      // Para trabajar con cuadros de dialogo predefinidos para archivos
#include <stdlib.h>
#include <QList>
#include <QTableWidget>

VentanaPrincipal::VentanaPrincipal(QWidget *parent)
    : QMainWindow(parent),
      ui(new Ui::VentanaPrincipal)
{
    ui->setupUi(this);
    this->setWindowTitle("Convertir datos a KML");
}

VentanaPrincipal::~VentanaPrincipal()
{
    delete ui;
}

void VentanaPrincipal::on_actionSalir_triggered()
{
    QApplication::quit(); //Para salir de la aplicación
}
void VentanaPrincipal::on_actionAbrir_triggered()
{
    QString formatos;
    formatos = "Archivos de campo (*.csv)";
    QFileDialog *dialogoabrir=new QFileDialog(this,"Abrir archivos",".",formatos);
    QString ruta, linea;
    QStringList partes; //Creo una lista de cadenas para almacenar los datos
    Generar_KML convertir;  // Creo un varible de tipo clase Generar_KML
    //Creo una lista de cadenas para almacenar los atributos
    PuntosCampo *unpunto; //Defino un puntero para puntoscampo
    this->setCursor(Qt::WaitCursor);//Pongo el reloj de Arena

    int i;
    int contarpuntos=0, validacion=1;  //Inicialización de contador y validador

    if(dialogoabrir->exec()==QDialog::Accepted){
        ruta = dialogoabrir->selectedFiles().first(); // Guardo la ruta del archivo
        QFile leer(ruta);
        leer.open(QIODevice::ReadOnly);//Abro el archivo para lectura
        ui->txt_rutaoriginal->setText(ruta);
        QTextStream leerstream(&leer);//Para poder leer linea a linea

        while (!leerstream.atEnd()){
           linea=leerstream.readLine(); // Leo la linea
           partes=linea.split(';',QString::SkipEmptyParts); // Arranca en la posición " ; "
           // Arranca en la posición " ; " y recorre la linea cada que encuentre ese carácter.
           // y se salta los espacios.
           if(partes.length()==28){
               unpunto=new PuntosCampo(partes[0].toInt(),partes[26].toDouble(),partes[25].toDouble());
               // Asigno a PuntosCampo los 3 atributos principales fid,longitud y latitud
               unpunto-> idelem=partes[1];
               unpunto-> tipoelemento=partes[4];
               unpunto-> diametro=partes[5].toDouble();
               unpunto-> ancho=partes[6].toDouble();
               unpunto-> alto=partes[7].toDouble();
               unpunto-> longitud=partes[8].toDouble();
               unpunto-> responsable=partes[2];
               unpunto-> observacion=partes[20];
               unpunto-> estconducto=partes[9];
               unpunto-> imagen1=partes[21];

               if(contarpuntos<100){ //Limito el almacenamiento de puntos en la tabla a los 1000 primeros
                    ui->tw_tabla->setRowCount(ui->tw_tabla->rowCount()+1); //Añade fila nueva en la tabla
                    // Ahorar creo un bucle que recorra cada campo de vector y lo integre a la lista
                    for (i=0;i<partes.size();i++) {
                        ui->tw_tabla->setItem(ui->tw_tabla->rowCount()-1,i,new QTableWidgetItem(partes[i]));
                        }
                }// Fin del " if " anidado dentro del while
                    lista_puntos.append(*unpunto);//Añado el punto a la lista
                    contarpuntos++; //Incremento el contador
            }else{
                  validacion=0;//si alguna fila no tiene los 28 campos lo pongo a 0
                  }//fin comprobación 28 columnas
        } // Fin del While principal

        leer.close();//Cierra el fichero

        ui->txt_puntos->setText(QString::number(contarpuntos)); // Agrego el numero de puntos en el cuadro
        if(validacion==0){
                       QMessageBox::warning (this,"Mensaje de Alerta","El archivo no tiene la estructura definida");
                       ui->tw_tabla->setRowCount(0); //Limpia la tabla;
                     }
    } // Fin del If Principal
    this->setCursor(Qt::ArrowCursor);//Dejo el cursor normal
}
void VentanaPrincipal::on_actionCerrar_triggered()
{
    this->close();
}


void VentanaPrincipal::on_btn_salir_clicked()
{
    QApplication::quit(); //Para salir de la aplicación
}

void VentanaPrincipal::on_btn_proceso_clicked()
{
    QString formatos, ruta_guardar;
    Generar_KML convertir;  // Creo un varible de tipo clase Generar_KML
    formatos="Archivos KML (*.kml)";
    //indico formatos soportados y con ;;separa un formato de otro
    QFileDialog *dialogoguardar=new QFileDialog(this, "Guardar como KML", ".",formatos);
    dialogoguardar->setAcceptMode(QFileDialog::AcceptSave); //Para que sea el cuadro de diálogo como de guardar
    if (dialogoguardar->exec()==QDialog::Accepted){
        //si seleccionan un archivo y pulsan abrir hago el resto
        ruta_guardar=dialogoguardar->selectedFiles().first();
        ui->txt_rutasalida->setText(ruta_guardar);

        //==============Corro los procesos para la generación del KML======================

        convertir.agregar_comienzo(); //Incorpora la cabecera del archivo
        convertir.agregar_Lista_Puntos(lista_puntos); //Genera el listado de puntos
        convertir.agregar_fin(); //Incorpora el final del archivo
        convertir.escribir_KML(ui->txt_rutasalida->text());
        QMessageBox::information(this,"Mensaje Informativo","Archivo KML generado satisfactoriamente");
    }

    else {
        QMessageBox::warning(this,"Mensaje de Error","Primero debe indicar la ruta de almacenamiento del archivo de salida");
        //mensajeerror.setText()
    }
    //fin del if
}

void VentanaPrincipal::on_btn_archiv_sal_clicked()
{
    QString formatos, ruta_guardar;
    Generar_KML convertir;  // Creo un varible de tipo clase Generar_KML
    formatos="Archivos KML (*.kml)";
    //indico formatos soportados y con ;;separa un formato de otro
    QFileDialog *dialogoguardar=new QFileDialog(this, "Guardar como KML", ".",formatos);
    dialogoguardar->setAcceptMode(QFileDialog::AcceptSave); //Para que sea el cuadro de diálogo como de guardar
    if (dialogoguardar->exec()==QDialog::Accepted){
        //si seleccionan un archivo y pulsan abrir hago el resto
        ruta_guardar=dialogoguardar->selectedFiles().first();
        ui->txt_rutasalida->setText(ruta_guardar);
    }
}

void VentanaPrincipal::on_actionAcerca_de_triggered()
{
    acercaTFM *ayuda;
    ayuda=new acercaTFM(this);
    ayuda->setWindowTitle("Acerca de Convertior KML");
    ayuda->exec();//Con exec muestra el formulario y hasta que no se cierra
    //no sigo con el principal
    //ayuda->show();//Show nos permitira seguir trabajando en el principal
}


void VentanaPrincipal::on_btn_proceso_2_clicked()
{
    QString formatos, ruta_guardar;
    Generar_KML2 convertir2;  // Creo un varible de tipo clase Generar_KML
    formatos="Archivos KML (*.kml)";
    //indico formatos soportados y con ;;separa un formato de otro
    QFileDialog *dialogoguardar=new QFileDialog(this, "Guardar como KML", ".",formatos);
    dialogoguardar->setAcceptMode(QFileDialog::AcceptSave); //Para que sea el cuadro de diálogo como de guardar
    if (dialogoguardar->exec()==QDialog::Accepted){
        //si seleccionan un archivo y pulsan abrir hago el resto
        ruta_guardar=dialogoguardar->selectedFiles().first();
        ui->txt_rutasalida->setText(ruta_guardar);

        //==============Corro los procesos para la generación del KML======================

        convertir2.agregar_comienzo(); //Incorpora la cabecera del archivo
        convertir2.agregar_Lista_Puntos(lista_puntos); //Genera el listado de puntos
        convertir2.agregar_fin(); //Incorpora el final del archivo
        convertir2.escribir_KML2(ui->txt_rutasalida->text());
        QMessageBox::information(this,"Mensaje Informativo","Archivo KML generado satisfactoriamente");
    }

    else {
        QMessageBox::warning(this,"Mensaje de Error","Primero debe indicar la ruta de almacenamiento del archivo de salida");
        //mensajeerror.setText()
    }
    //fin del if
}

void VentanaPrincipal::on_actionLimpiar_Archivo_triggered()
{
    ui->tw_tabla->setRowCount(0); //Limpia la tabla
    ui->txt_rutaoriginal->setText(""); // Limpia la ruta original
    ui->txt_rutasalida->setText(""); // Limpia la ruta se salida
}


void VentanaPrincipal::on_pushButton_clicked()
{
    ui->tw_tabla->setRowCount(0); //Limpia la tabla
    ui->txt_rutaoriginal->setText(""); // Limpia la ruta original
    ui->txt_rutasalida->setText(""); // Limpia la ruta se salida
    ui->txt_puntos->setText(""); // Limpia cuadro cantidad de puntos de la ultima generación

}

