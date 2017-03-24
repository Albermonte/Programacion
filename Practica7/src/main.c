/* Nombre Fichero: src/main.c */
#include <stdio.h>
#include "ficheros.h"
#include "cadenas.h"

int main() { 
    int ret = 0;
    FILE* fichRead = NULL;//fichero de lectura
    FILE* fichWrite = NULL;//fichero de escritura
    
    int numCambios = 0;
    char* nombreFichero = "prac07_prueba01.txt";  
    ret = abrirFicheroLectura(nombreFichero, &fichRead);
    if (ret < 0 ) printf("(1) Incorrecto. \n");
    else printf("(1) Correcto. \n");
    
    ret = escribirFicheroSinVocales(nombreFichero, fichRead, &fichWrite, &numCambios);
    if (ret < 0 ) printf("(2) Incorrecto. \n");
    else printf("(2) Correcto. \n");
    
    if (numCambios == 25 ) printf("(3) Correcto. \n");
    else printf("(3) Incorrecto. \n");
    
    if(fichRead!=NULL)
    {
      fclose(fichRead);
      fichRead = NULL;
    }
    
    nombreFichero = "prac07_prueba01SinVocales.txt";
    ret = abrirFicheroLectura(nombreFichero, &fichRead);
    if (ret < 0 ) printf("(4) Incorrecto. \n");
    else printf("(4) Correcto. \n");
    
    if(fichRead!=NULL)
    {
      fclose(fichRead);
      fichRead = NULL;      
    }
    
    if(fichWrite!=NULL)
    {
      fclose(fichWrite);
      fichWrite = NULL;
    }
    
    //-------------------------------------------------------------------------------------//
    
    numCambios = 0;
    nombreFichero = NULL;
    ret = abrirFicheroLectura(nombreFichero, &fichRead);
    if (ret < 0 ) printf("(5) Correcto. \n");
    else printf("(5) Incorrecto. \n");
    
    ret = escribirFicheroSinVocales(nombreFichero, fichRead, &fichWrite, &numCambios);
    if (ret < 0 ) printf("(6) Correcto. \n");
    else printf("(6) Incorrecto. \n");

    if(fichRead!=NULL)
    {
      fclose(fichRead);
      fichRead = NULL;      
    }
    if(fichWrite!=NULL)
    {
      fclose(fichWrite);
      fichWrite = NULL;
    }
    
    //-------------------------------------------------------------------------------------//
    
    numCambios = 0;
    nombreFichero = "prac07_prueba01.txt";
    ret = abrirFicheroLectura(nombreFichero, &fichRead);
    
    nombreFichero = NULL; 
    ret = escribirFicheroSinVocales(nombreFichero, fichRead, &fichWrite, &numCambios);
    if (ret < 0 ) printf("(7) Incorrecto. \n");
    else printf("(7) Correcto. \n");
    

    if(fichRead!=NULL)
    {
      fclose(fichRead);
      fichRead = NULL;
    }
    
    if(fichWrite!=NULL)
    {
      fclose(fichWrite);
      fichWrite = NULL;
    }

    nombreFichero = "SinVocales.txt";
    ret = abrirFicheroLectura(nombreFichero, &fichRead);
    if (ret < 0 ) printf("(8) Incorrecto. \n");
    else printf("(8) Correcto. \n");
    
    if(fichRead!=NULL)
    {
      fclose(fichRead);
      fichRead = NULL;
    }
    
    if(fichWrite!=NULL)
    {
      fclose(fichWrite);
      fichWrite = NULL;
    }

    //-------------------------------------------------------------------------------------//
    
    numCambios = 0;
    nombreFichero = "prac07_prueba02.txt";  
    ret = abrirFicheroLectura(nombreFichero, &fichRead);
    if (ret < 0 ) printf("(9) Correcto. \n");
    else printf("(9) Incorrecto. \n");
     

    if(fichRead!=NULL)
    {
      fclose(fichRead);
      fichRead = NULL;
    }
    
    if(fichWrite!=NULL)
    {
      fclose(fichWrite);
      fichWrite = NULL;
    }
    return 0;
}