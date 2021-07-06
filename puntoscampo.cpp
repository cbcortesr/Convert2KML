#include "puntoscampo.h"
#include <QtMath>       //Si vamos a calcular algunas operaciones


//Constructor por defecto ==============================================
PuntosCampo::PuntosCampo()   //defino valores de inicialización del constructor
{    
    id=0;
    idelem="";
    fechareg="";
    ancho=0;
    alto=0;
    diametro=0;
    proyecto=""; //Aprovechamos el proyecto para asignar el color en el caso de que usemos color DXF
    tipoelemento="";
    responsable="";
    observacion="";
    estconducto="";
    x=0;
    y=0;
    imagen1="";

    }

//Constructor de copia =================================================
PuntosCampo::PuntosCampo(const PuntosCampo &p2)
{   // Asigno los valores del punto recibido a las variables del punto que estamos creando
    id=p2.id;
    idelem=p2.idelem;
    fechareg=p2.fechareg;
    ancho=p2.ancho;
    alto=p2.alto;
    diametro=p2.diametro;
    proyecto=p2.proyecto;
    tipoelemento=p2.tipoelemento;
    responsable=p2.responsable;
    observacion=p2.observacion;
    estconducto=p2.estconducto;
    x=p2.x;
    y=p2.y;
    imagen1=p2.imagen1;
}

//Constructor de parametros =================================================
PuntosCampo::PuntosCampo(int fid, double longitud,double latitud )
{
    id=fid;
    idelem="";
    fechareg="";
    ancho=0;
    alto=0;
    diametro=0;
    proyecto=""; //Nombre del proyecto
    tipoelemento="";
    responsable="";
    observacion="";
    estconducto="";
    x=longitud;
    y=latitud;
    imagen1="";
}

