#ifndef PUNTOSCAMPO_H
#define PUNTOSCAMPO_H
#include <QString>


class PuntosCampo // Constructor
{
public:
    //Variables de la clase Punto son publicas, permitiran acceder a ellas.
        int id, ii;
        double x,y,ancho, alto, diametro, longitud;
        QString proyecto,idelem,responsable, tipoelemento, estconducto, observacion, imagen1, fechareg;
        //Defino las variables con las que predendemos generar alguna salida adiocional

        PuntosCampo();                           //Constructor por defecto
        PuntosCampo(const PuntosCampo &otropunto);//Constructor de copia
        PuntosCampo(int fid, double longitud, double latitud);//Constructor de parametros

};

#endif // PUNTOSCAMPO_H
