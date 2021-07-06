#ifndef GENERAR_KML_H
#define GENERAR_KML_H
#include <QStringList>
#include "puntoscampo.h"

class Generar_KML
{
public:
    Generar_KML();
    QStringList ListaFichero; //Variable que almacenará el contenido del KML linea a linea
    void escribir_KML(QString ruta_fichero); //Almacenará la lista en el fichero
    void agregar_comienzo();  //Escribe en el KML los renglones del comienzo según protocolo
    void agregar_fin();       //Escribe la parte final del final
    void agregar_Lista_Puntos(QList<PuntosCampo> lista_puntos);
    //Agrega los puntos de la lista al fichero.
};

#endif // GENERAR_KML_H
