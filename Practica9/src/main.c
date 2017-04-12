/* Nombre Fichero: src/main.c */

#include "p9.h"

int main()
{

  BaseDatos_t myDB;

  crearBBDDbinario("bbddPeliculas.dat");
  
  cargarBBDDdesdeFichero(&myDB, "bbddPeliculas.dat");
 
  mostrarBBDDenPantallaDesdeFichero("bbddPeliculas.dat");
  printf("---------------------------------------");
  ordenarPorTitulo("bbddPeliculas.dat");
  mostrarBBDDenPantallaDesdeFichero("bbddPeliculas.dat");

  cargarBBDDdesdeFichero(&myDB, "bbddPeliculas.dat");

  if(compararBBDD(&myDB, 0)<0)
  {
    printf("\nPráctica no apta!!! No se han ordenado por Título \n");
      return 0;
   }

  printf("---------------------------------------");
  ordenarPorYear("bbddPeliculas.dat");
  mostrarBBDDenPantallaDesdeFichero("bbddPeliculas.dat");
  printf("---------------------------------------");

  cargarBBDDdesdeFichero(&myDB, "bbddPeliculas.dat");
  
  if(compararBBDD(&myDB, 1)<0)
  {
    printf("\nPráctica no apta!!! No se han ordenado por año \n");
      return 0;
   }

  
  ordenarPorNota("bbddPeliculas.dat");
  mostrarBBDDenPantallaDesdeFichero("bbddPeliculas.dat");

  cargarBBDDdesdeFichero(&myDB, "bbddPeliculas.dat");
  
   if(compararBBDD(&myDB, 2)<0)
   {
      printf("\nPráctica no apta!!! No se han ordenado por nota \n");
      return 0;
   }

  printf("\nPráctica apta! \n");

   
  return 0;

}
