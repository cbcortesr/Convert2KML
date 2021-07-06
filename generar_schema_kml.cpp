#include "generar_kml.h"
#include <QTextStream>
#include <QMessageBox>
#include <QFile>
#include "puntoscampo.h"
#include <QString>


Generar_KML::Generar_KML()
{
// Constructor por defecto
}

//Escribe en el KML los renglones del comienzo del KML ============================
void Generar_KML::agregar_comienzo(){
    ListaFichero.append(QString("<?xml version=\"1.0\" encoding=\"UTF-8\"?>"));
    //ListaFichero.append(QString("<?xml version=").append(QString(""1.0"").append(" encoding=").append("'UTF-8'").append("?>")));
    ListaFichero.append("<kml xmlns=\"http://www.opengis.net/kml/2.2\">");
    ListaFichero.append(QString("<Document>"));
    ListaFichero.append("<Folder>");
    ListaFichero.append("    <name>""Inventario Infraestructura""</name>");
    ListaFichero.append("    <visibility>0</visibility>");
    ListaFichero.append("    <description>""Obras de drenaje""</description>");
}

//Escribe la parte final del KML ==================================================
void Generar_KML::agregar_fin(){
    ListaFichero.append("</Folder>");
    ListaFichero.append("</Document>");
    ListaFichero.append("</kml>");

}

 //Almacenará la lista en el fichero ==============================================
void Generar_KML::escribir_KML(QString ruta_fichero){
    QFile guardar(ruta_fichero);
    guardar.open(QIODevice::ReadWrite); //Abro para lectura y escritura
    QTextStream guardarstream(&guardar);
    for(int i=0;i<ListaFichero.count();i++){//Recorro la lista de lineas
        guardarstream<<ListaFichero.at(i)<<Qt::endl;//Guardo cada linea
    }
    guardar.close();//Cierro el fichero
}

//===================================================================================
//Agrega los puntos dela lista al fichero. Los coloca en la capa indicada como parametro.
void Generar_KML::agregar_Lista_Puntos(QList<PuntosCampo> lista_puntos)
 {
    //QMessageBox::information(this,"Mensaje de Prueba","Alerta de proceso puntos");

    for(int i=0;i<lista_puntos.count();i++){//Recorro la lista de lineas
        ListaFichero.append("<Placemark>"); //Inicia definicion de datos punto

            ListaFichero.append(QString("  <name>").append(QString(lista_puntos.at(i).idelem)).append("</name>"));//Marcador cerrado para Coord elemento
            ListaFichero.append("  <LookAt>");//Marcador abierto para localizacion elemento
            ListaFichero.append(QString("    <latitude>").append(QString::number(lista_puntos.at(i).x).append("</latitude>")));
            ListaFichero.append(QString("    <longitude>").append(QString::number(lista_puntos.at(i).y).append("</longitude>")));
            ListaFichero.append("    </LookAt>");//Marcador abierto para localizacion elemento
            //Agrega las coordenadas del punto, con zoom al sitio

            ListaFichero.append("    <styleUrl>#downArrowIcon</styleUrl>");//Marcador cerrado para Coord elemento

            ListaFichero.append("  <Point>");//Marcador abierto para coordenadas del punto
            ListaFichero.append(QString("    <coordinates>").append(QString::number(lista_puntos.at(i).x)).append(",").append(QString::number(lista_puntos.at(i).y)).append("</coordinates>"));
            //Que sigue el indicador de entidad
            ListaFichero.append("  </Point>");//Cierre de marcador para coordenadas del punto

            ListaFichero.append("    <description>");//Inicio etiqueta observacion
            ListaFichero.append(QString("    ").append(QString(lista_puntos.at(i).observacion)));//Que sigue el indicador de entidad
            ListaFichero.append("    </description>");//Fin etiqueta observacion

            //ListaFichero.append("    <href>");//Inicio etiqueta imagen
            ListaFichero.append(QString("    <img src=\"//").append(QString(lista_puntos.at(i).imagen1)).append("\" width=\"800\" height=\"600\" />"));
            //ListaFichero.append("    </href>");//Fin etiqueta imagen

        ListaFichero.append("</Placemark>"); //Fin definicion de datos punto
    }
}

