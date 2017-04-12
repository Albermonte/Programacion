/* Nombre Fichero: include/p9.h */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <unistd.h>

#define TAM_NOMBRE 30
#define TAM_BBDD   100
#define NOM_BBDD "fichBBDD.dat"
#define NOM_LISTADO "listadoBBDD.dat"

// Enumerado para los géneros de películas

typedef enum {DRAMA, COMEDIA, THRILLER, MUSICAL, TERROR} Genero_t;

// Estructura que almacena las fichas de las películas

typedef struct{
    short int year;
    char titulo[TAM_NOMBRE];
    Genero_t genero;
    float notaIMDB;
}Ficha_t;

// // Estructura que almacena la lista de películas


typedef struct{
  Ficha_t listaPeliculas[TAM_BBDD];
  unsigned short int num_peliculas;
}BaseDatos_t;

/*Función que crea una bbdd en el fichero "nomFich"
 [ IN] nombreFich. nombre del fichero que se crea
 [RET] Si error <0 */
short int crearBBDDbinario(char */*nombreFich*/);

/*Función que carga los datos almacenados en el fichero "nomFich" en la estructura bbdd
 [ IN] bbdd. estructura donde se pondran los datos del fichero
 [ IN] nombreFich. nombre del fichero que contiene los datos
 [RET] Si error <0 */
short int cargarBBDDdesdeFichero(BaseDatos_t */*bbdd*/, char */*nombreFich*/);

/*Función que muestra por pantalla los datos almacenados en la estructura bbdd
 [ IN] bbdd. estructura donde se pondran los datos del fichero
 [RET] Si error <0 */
int mostrarBBDDenPantalla(BaseDatos_t */*bbdd*/);

/*Función que muestra por pantalla los datos almacenados en el fichero nombreFich
 [ IN] nombreFich. nombre del fichero que contiene los datos
 [RET] Si error <0 */
int mostrarBBDDenPantallaDesdeFichero(const char */*nombreFich*/);


/*Función que muestra por pantalla los datos almacenados en la estructura peli
 [ IN] peli. estructura donde se pondran los datos del fichero
 [RET] Si error <0 */
int mostrarPelicula(const Ficha_t */*peli*/);

/*Función que ordena los datos almacenados en el fichero "nomFich" en orden alfabético de título
 * Esta ordenación se realiza sobre el propio fichero no en estructuras intermedias
 * [ IN] nombreFich. nombre del fichero que contiene los datos
 * [RET] Si error <0 */
short int ordenarPorTitulo(const char *);

/*Función que ordena los datos almacenados en el fichero "nomFich" en orden ascendente de año
 * Esta ordenación se realiza sobre el propio fichero no en estructuras intermedias
 * [ IN] nombreFich. nombre del fichero que contiene los datos
 * [RET] Si error <0 */
short int ordenarPorYear(const char *);

/*Función que ordena los datos almacenados en el fichero "nomFich" en orden ascendente de nota
 * Esta ordenación se realiza sobre el propio fichero no en estructuras intermedias
 * [ IN] nombreFich. nombre del fichero que contiene los datos
 * [RET] Si error <0 */
short int ordenarPorNota(const char *);

/*Función que compara que los datos almacenados en la estructura bbdd están ordenados según el parámetro op
 * [ IN] bbdd.  estructura donde está la base de datos
 * [ IN] op. Si 0 compara alfabéticamente por título, si 1 ascendente por año, si 2 ascendente por nota
 * [RET] Si no está ordenada bbdd devuelve <0 */
short int compararBBDD(BaseDatos_t */*bbdd*/, unsigned short /*op*/);



