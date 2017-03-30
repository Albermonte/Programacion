/* Nombre Fichero: src/main.c */
 
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "temperaturas.h"

int main() { 
    dateTemp_t* temperaturasRegistradas;
    int numTemperaturasRegistradas;
    int numLineasIncorrectas;
    int ret = 0;
    char* nombreRead = "mean-daily-temperature.txt";//nombre del fichero de lectura
    int k=1;

    printf("Pruebas Cargar Archivo:\n");
    printf("-----------------------\n" );
    ret = leerFichero(nombreRead, &temperaturasRegistradas, &numTemperaturasRegistradas, &numLineasIncorrectas);
    if (ret < 0 ) printf("(%d) Incorrecto. \n",k);
    else printf("(%d) Correcto. \n",k);
    k++;
    
    printf("numTemperaturasRegistradas: %d\n", numTemperaturasRegistradas);
    
    if (numTemperaturasRegistradas == 1461 ) printf("(%d) Correcto. \n",k);
    else printf("(%d) Incorrecto. \n",k);
    k++;
    
    //------------------------------------------------------------------------------------------------------//
    
    printf("Pruebas Modificar Registros:\n");
    printf("----------------------------\n" );
    struct fecha_t diaM;
    diaM.anyo = 1989; diaM.mes=6; diaM.dia=1;
    float temp = 15.55;
    ret = modificarRegistro(&temperaturasRegistradas, numTemperaturasRegistradas, diaM, temp);
    if (ret < 0 ) printf("(%d) Incorrecto. \n",k);
    else printf("(%d) Correcto. \n",k);
    k++;
    
    printf ("%d %d %d %f \n",temperaturasRegistradas[517].momento.anyo, temperaturasRegistradas[517].momento.mes, temperaturasRegistradas[517].momento.dia, temperaturasRegistradas[517].temperatura);
    
    if (fabs(temperaturasRegistradas[517].temperatura-15.55) < 0.01) printf("(%d) Correcto. \n",k);
    else printf("(%d) Incorrecto. \n",k);
    k++;
    
    //------------------------------------------------------------------------------------------------------//
    
    diaM.anyo = 2099; diaM.mes=6; diaM.dia=1;
    temp = 47.55;
    ret = modificarRegistro(&temperaturasRegistradas, numTemperaturasRegistradas, diaM, temp);
    if (ret < 0 ) printf("(%d) Correcto. \n",k);
    else printf("(%d) Incorrecto. \n",k);
    k++;
    
    //------------------------------------------------------------------------------------------------------//
    
    diaM.anyo = 1989; diaM.mes=6; diaM.dia=1;
    temp = 110.55;
    ret = modificarRegistro(&temperaturasRegistradas, numTemperaturasRegistradas, diaM, temp);
    if (ret < 0 ) printf("(%d) Correcto. \n",k);
    else printf("(%d) Incorrecto. \n",k);
    k++;
    
    //------------------------------------------------------------------------------------------------------//
    
    printf("Pruebas Calcular Maximos, Minimos y Media:\n");
    printf("------------------------------------------\n" );
    float max, min, media;
    struct fecha_t diaMax;
    struct fecha_t diaMin;
    ret = calcularTempMaxima(temperaturasRegistradas, numTemperaturasRegistradas, &max, &diaMax);
    if (ret < 0 ) printf("(%d) Incorrecto. \n",k);
    else printf("(%d) Correcto. \n",k);
    k++;
    
    ret = calcularTempMinima(temperaturasRegistradas, numTemperaturasRegistradas, &min, &diaMin);
    if (ret < 0 ) printf("(%d) Incorrecto. \n",k);
    else printf("(%d) Correcto. \n",k);
    k++;
    
    ret = calcularTempMedia(temperaturasRegistradas, numTemperaturasRegistradas, &media);
    if (ret < 0 ) printf("(%d) Incorrecto. \n",k);
    else printf("(%d) Correcto. \n",k);
    k++;
    
    printf("Maxima: %f el %d del %d de %d\n", max, diaMax.dia, diaMax.mes, diaMax.anyo); 
    printf("Mininma: %f el %d del %d de %d\n", min, diaMin.dia, diaMin.mes, diaMin.anyo);
    printf("Media: %f\n", media);
    
    if (fabs(max - 27.0) < 0.01) printf("(%d) Correcto. \n",k);
    else printf("(%d) Incorrecto. \n",k);
    k++;
    
    if (fabs(min + 35.0) < 0.01) printf("(%d) Correcto. \n",k);
    else printf("(%d) Incorrecto. \n",k);
    k++;
    
    if (fabs(media - 0.804381) < 0.01) printf("(%d) Correcto. \n",k);
    else printf("(%d) Incorrecto. \n",k);
    k++;
    
    //------------------------------------------------------------------------------------------------------//
    
    int numTemperaturasRegistradasVacio = 0;
    
    ret = calcularTempMaxima(temperaturasRegistradas, numTemperaturasRegistradasVacio, &max, &diaMax);
    if (ret < 0 ) printf("(%d) Correcto. \n",k);
    else printf("(%d) Incorrecto. \n",k);
    k++;
    
    ret = calcularTempMinima(temperaturasRegistradas, numTemperaturasRegistradasVacio, &min, &diaMin);
    if (ret < 0 ) printf("(%d) Correcto. \n",k); 
    else printf("(%d) Incorrecto. \n",k);
    k++;
    
    ret = calcularTempMedia(temperaturasRegistradas, numTemperaturasRegistradasVacio, &media);
    if (ret < 0 ) printf("(%d) Correcto. \n",k);
    else printf("(%d) Incorrecto. \n",k);
    k++;
    
    //------------------------------------------------------------------------------------------------------//
    
    dateTemp_t* temperaturasRegistradasVacio = NULL;
    
    ret = calcularTempMaxima(temperaturasRegistradasVacio, numTemperaturasRegistradas, &max, &diaMax);
    if (ret < 0 ) printf("(%d) Correcto. \n",k); 
    else printf("(%d) Incorrecto. \n",k);
    k++;
    
    ret = calcularTempMinima(temperaturasRegistradasVacio, numTemperaturasRegistradas, &min, &diaMin);
    if (ret < 0 ) printf("(%d) Correcto. \n",k); 
    else printf("(%d) Incorrecto. \n",k);
    k++;
    
    ret = calcularTempMedia(temperaturasRegistradasVacio, numTemperaturasRegistradas, &media);
    if (ret < 0 ) printf("(%d) Correcto. \n",k); 
    else printf("(%d) Incorrecto. \n",k);
    k++;
    
    //------------------------------------------------------------------------------------------------------//
    
    printf("Guardar los datos en un nuevo archivo\n" );
    printf("-------------------------------------\n" );
    char* nombreArchivo = "temperaturas.txt";
    ret = guardarFichero(temperaturasRegistradas, numTemperaturasRegistradas, nombreArchivo);
    if (ret < 0 ) printf("(%d) Incorrecto. \n",k);
    else printf("(%d) Correcto. \n",k);
    k++;
    
    free(temperaturasRegistradas);
    
    //------------------------------------------------------------------------------------------------------//
    
    printf("Pruebas Cargar Archivo con Errores:\n");
    printf("-----------------------------------\n" );
    nombreRead = "mean-daily-temperature2.txt";
    ret = leerFichero(nombreRead, &temperaturasRegistradas, &numTemperaturasRegistradas, &numLineasIncorrectas);
    if (ret < 0 ) printf("(%d) Incorrecto. \n",k);
    else printf("(%d) Correcto. \n",k);
    k++;
    
    printf("numTemperaturasRegistradas: %d\n", numTemperaturasRegistradas);
    if (numTemperaturasRegistradas == 1457 ) printf("(%d) Correcto. \n",k);
    else printf("(%d) Incorrecto. \n",k);
    k++;
    
    printf("numLineasIncorrectas: %d\n", numLineasIncorrectas);
    if (numLineasIncorrectas == 4 ) printf("(%d) Correcto. \n",k);
    else printf("(%d) Incorrecto. \n",k);
    k++;
    
    //------------------------------------------------------------------------------------------------------//
            
    free(temperaturasRegistradas);
    return 0;
}