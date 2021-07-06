#include "generar_kml2.h"
#include <QTextStream>
#include <QMessageBox>
#include <QFile>
#include "puntoscampo.h"
#include <QString>

//Generador KML por ESTADO DE LA ESTRUCTURA =======================================
//=================================================================================
Generar_KML2::Generar_KML2()
{
// Constructor por defecto
}

//Escribe en el KML los renglones del comienzo del KML ============================

void Generar_KML2::agregar_comienzo(){
    ListaFichero.append(QString("<?xml version=\"1.0\" encoding=\"UTF-8\"?>"));
    //ListaFichero.append(QString("<?xml version=").append(QString(""1.0"").append(" encoding=").append("'UTF-8'").append("?>")));
    ListaFichero.append("<kml xmlns=\"http://www.opengis.net/kml/2.2\">");
    ListaFichero.append(QString("<Document>"));
    ListaFichero.append("<Folder>");
    ListaFichero.append("    <name>""Inventario Infraestructura""</name>");
    ListaFichero.append("    <visibility>0</visibility>");
    ListaFichero.append("    <description>""Obras de drenaje""</description>");

    //Definición de estilos de indicadores para estructuras
    //http://kml4earth.appspot.com/icons.html... Ruta para tipos de iconos
    //Estilo 1: flechaRoja
    ListaFichero.append("    <Style id=\"flechaRoja\">");
    ListaFichero.append("       <IconStyle>");
    ListaFichero.append("       <color>ff0000ff</color>");
    ListaFichero.append("       <scale>1.0</scale>");
    ListaFichero.append("         <Icon>");
    ListaFichero.append("            <href>http://maps.google.com/mapfiles/kml/pal4/icon28.png</href>");
    ListaFichero.append("         </Icon>");
    ListaFichero.append("       </IconStyle>");
    ListaFichero.append("    </Style>");

    //Estilo 2: globeIcon
    ListaFichero.append("    <Style id=\"globeIcon\">");
    ListaFichero.append("       <IconStyle>");
    ListaFichero.append("       <scale>1.1</scale>");
    ListaFichero.append("         <Icon>");
    ListaFichero.append("            <href>http://maps.google.com/mapfiles/kml/paddle/ylw-blank.png</href>");
    ListaFichero.append("         </Icon>");
    ListaFichero.append("       </IconStyle>");
    ListaFichero.append("    </Style>");

    //Estilo 3: normalPlacemark
    ListaFichero.append("    <Style id=\"normalPlacemark\">");
    ListaFichero.append("       <IconStyle>");
    ListaFichero.append("       <scale>1.0</scale>");
    ListaFichero.append("         <Icon>");
    ListaFichero.append("            <href>http://maps.google.com/mapfiles/kml/pushpin/grn-pushpin.png</href>");
    ListaFichero.append("         </Icon>");
    ListaFichero.append("       </IconStyle>");
    ListaFichero.append("    </Style>");

    //Estilo 4: highlightPlacemark
    ListaFichero.append("    <Style id=\"highlightPlacemark\">");
    ListaFichero.append("       <IconStyle>");
    ListaFichero.append("       <scale>1.0</scale>");
    ListaFichero.append("         <Icon>");
    ListaFichero.append("            <href>http://maps.google.com/mapfiles/kml/paddle/red-stars.png</href>");
    ListaFichero.append("         </Icon>");
    ListaFichero.append("       </IconStyle>");
    ListaFichero.append("    </Style>");

}

//Escribe la parte final del KML ==================================================
void Generar_KML2::agregar_fin(){
    ListaFichero.append("</Folder>");
    ListaFichero.append("</Document>");
    ListaFichero.append("</kml>");

}

 //Almacenará la lista en el fichero ==============================================
void Generar_KML2::escribir_KML2(QString ruta_fichero){
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
void Generar_KML2::agregar_Lista_Puntos(QList<PuntosCampo> lista_puntos)

 {
    QString estado_conducto;
    //QMessageBox::information(this,"Mensaje de Prueba","Alerta de proceso puntos");

    for(int i=0;i<lista_puntos.count();i++){//Recorro la lista de lineas
            ListaFichero.append("<Placemark>"); //Inicia definicion de datos punto

            ListaFichero.append(QString("  <name>").append(lista_puntos.at(i).idelem).append("</name>"));//Marcador para identificador de elemento
            ListaFichero.append("   <visibility>1</visibility>"); //Definición de visibilidad del punto 1->si 0->no
            ListaFichero.append("   <LookAt>");//Marcador abierto para localizacion elemento
            ListaFichero.append(QString("      <latitude>").append(QString::number(lista_puntos.at(i).x).append("</latitude>")));
            ListaFichero.append(QString("      <longitude>").append(QString::number(lista_puntos.at(i).y).append("</longitude>")));
            ListaFichero.append("   </LookAt>");//Marcador abierto para localizacion elemento
            //Agrega las coordenadas del punto, con zoom al sitio

            estado_conducto = lista_puntos.at(i).estconducto;

            if (estado_conducto == "Destruido" || estado_conducto == "Semidestruido" || estado_conducto== "Agrietado"){
                ListaFichero.append("   <styleUrl>#flechaRoja</styleUrl>");//Marcador por estado "1" para estructuras con falla
                }
            else if (estado_conducto == "Bueno")
                {
                ListaFichero.append("   <styleUrl>#normalPlacemark</styleUrl>");//Tipo de Marcador 2 para estructuras en buen estado
                }
            else
                {
                ListaFichero.append("   <styleUrl>#highlightPlacemark</styleUrl>");//Tipo de Marcador 3 para que no se identifico estado adecuadamente.
                }
            ListaFichero.append("   <Point>");//Marcador abierto para coordenadas del punto
            ListaFichero.append(QString("      <coordinates>").append(QString::number(lista_puntos.at(i).x)).append(",").append(QString::number(lista_puntos.at(i).y)).append("</coordinates>"));
            //Que sigue el indicador de entidad
            ListaFichero.append("   </Point>");//Cierre de marcador para coordenadas del punto

            ListaFichero.append("   <description>");//Inicio etiqueta observacion
            //ListaFichero.append(QString("    <![CDATA[<img style=\"max-width:300px;\"").append(" src=\"").append(QString(lista_puntos.at(i).imagen1)).append("\">").append("]]>"));
            ListaFichero.append("    <![CDATA[<h3>Inventario Infraestructura TFM USAL</h3><br>");
            ListaFichero.append(QString("    <img style=\"max-width:300px;\"").append(" src=\"").append(QString(lista_puntos.at(i).imagen1)).append("\">"));
            ListaFichero.append("     <br><table border=\"2\" padding=\"1\">");            
            ListaFichero.append(QString("     <tr><td>Estado del conducto</td><td>").append(QString(lista_puntos.at(i).estconducto)).append("</td></tr>"));
            ListaFichero.append(QString("     <tr><td>Observación de estado</td><td>").append(QString(lista_puntos.at(i).observacion)).append("</td></tr>"));
            ListaFichero.append(QString("     <tr><td>Responsable</td><td>").append(QString(lista_puntos.at(i).responsable)).append("</td></tr>"));
            ListaFichero.append(QString("     <tr><td>Fecha de registro</td><td>").append(QString(lista_puntos.at(i).fechareg)).append("</td></tr>"));
            ListaFichero.append("     </table>]]>");
            ListaFichero.append("   </description>");//Fin etiqueta observacion

        ListaFichero.append("</Placemark>"); //Fin definicion de datos punto
    }
}

