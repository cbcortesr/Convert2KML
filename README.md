# Convert CSV2KML
Convertidor de csv a KML personalizado ( Programa ha sido elaborado en C++ )

Requiere cumplir la estructura de 28 columnas de un archivo base generado CSV en QGIS, este deberá ser exportado y previamente se suprime la primera fila. (ver archivos Datos Piloto.csv y xlsx) en donde podrá clarificar la estructura de datos a seguir.

El convertidor es totalmente funcional y permite configurar dos opciones de formato para el KML, la primera dará configuración de iconos por Tipo de Estructura y la segunda lo hará por el estado de cada una de ellas.

Adicionalmente, como se cuenta con un registro fotográfico asociado en la tabla de datos, con la generación del KML se asociará este registro para que permita el despliegue de una imagen al momento de pinchar el punto.

Instalación.
Para utilizar la herramienta podrá descargar los ficheros que se encuentran en este repositorio y correla dentro de una carpeta "convKML4", corre perfecto (sin generación de errores) para Qt 5.14.2 con WinGW 32 Bit.
