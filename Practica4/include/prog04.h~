/* Nombre Fichero: include/prog04.h */

#ifndef PROG04_H
#define PROG04_H


// Librerias
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

// Definicion de constantes
#define MAX_NOMBRE 20
#define MAX_ARRAY  10

/* RECUERDE
 * NO MODIFIQUE LOS NOMBRES DE LAS FUNCIONES NI EL NOMBRE DE LOS ARGUMENTOS
 * NO AÑADA PARAMETROS A LAS FUNCIONES */


// Definicion de tipos

typedef struct {
    char nombre[MAX_NOMBRE];
    int poblacion;
} Ciudad_t;


// Definicion de funciones

/* funcion que permite rellenar el array de estructuras
 * [OUT] datos, array de estructuras donde se almacenan los datos introducidos por teclado
 * [ IN] tam, tamaño maximo del array datos
 * [OUT] n, variable que contiene el numero de elementos intoducidos en el array
 * [ IN] nombre, nombre de la ciudad a introducir
 * [ IN] poblacion, poblacion de la ciudad a introducir 
 * [RET] return, codigos de error con valor negativo */
int introducirCiudad(Ciudad_t* datos, int tam, int* n, const char* nombre, int poblacion);

/* funcion que muestra por pantalla una lista de todas las ciudades
 * [ IN] datos, array de estructuras donde se encuentran los datos
 * [ IN] tam, tamaño maximo del array datos
 * [ IN] n, vairable que contiene el numero de elementos intoducidos en el array 
 * [RET] return, codigos de error con valor negativo */
int mostrarCiudades(Ciudad_t* datos, int tam, int n);

/* funcion que muestra por pantalla una lista de todas las cuidades cuya poblacion sea inferior a 100 habitantes
 * [ IN] datos, array de estructuras donde se encuentran los datos
 * [ IN] tam, tamaño maximo del array datos
 * [ IN] n, vairable que contiene el numero de elementos intoducidos en el array 
 * [RET] return, numero de ciudades despobladas o codigos de error con valor negativo */
int mostrarCiudadesDespobladas(Ciudad_t* datos, int tam, int n);

/* funcion que retorna el indice de la ciudad mas poblada
 * [ IN] datos, array de estructuras donde se encuentran los datos
 * [ IN] tam, tamaño maximo del array datos
 * [ IN] n, vairable que contiene el numero de elementos intoducidos en el array
 * [RET] return, indice de la cuidad mas poblada o codigos de error con valor negativo */
int buscarCiudadMasPoblada(Ciudad_t* datos, int tam, int n);

/* funcion que retorna la poblacion media de las ciudades 
 * [ IN] datos, array de estructuras donde se encuentran los datos
 * [ IN] tam, tamaño maximo del array datos
 * [ IN] n, vairable que contiene el numero de elementos intoducidos en el array
 * [RET] return, poblacion media de las ciudades o codigos de error con valor negativo */
float calcularPoblacionMedia(Ciudad_t* datos, int tam, int n);

/* funcion que ordena las ciudades por poblacion de mayor a menor 
 * [OUT] datos, array donde se encuentran los datos
 * [ IN] tam, tamaño maximo del array datos 
 * [ IN] n, vairable que contiene el numero de elementos intoducidos en el array
 * [ IN] orden, si es positivo o cero, ordenado de mayor a menor, si es negativo ordenado de menor a mayor
 * [RET] return, codigos de error con valor negativo */
int ordenarCiudadesPorPoblacion(Ciudad_t* datos, int tam, int n, int orden);

#endif
