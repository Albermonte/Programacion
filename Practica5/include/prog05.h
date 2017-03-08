/* Nombre Fichero: include/prog05.h */


#ifndef PROG05_H
#define PROG05_H

// Librerias
#include <stdlib.h>
#include <stdio.h>
#include <string.h>


// Definicion de constantes
#define MAX_NOMBRE 20
#define MAX_APELLIDO 30
#define MAX_ARRAY  10


/* RECUERDE
 * NO MODIFIQUE LOS NOMBRES DE LAS FUNCIONES NI EL NOMBRE DE LOS ARGUMENTOS
 * NO AÑADA PARAMETROS A LAS FUNCIONES */


// Declaracion de tipos

typedef struct {
    char nombre[MAX_NOMBRE];
    char apellido[MAX_APELLIDO];
    float ingresos;
} Cliente_t;


// Declaracion de los prototipos de las funciones

/* funcion que inicializa el array de punteros apuntando a cada una de los elementos del array de estructuras
 * [ IN] array, array de estructuras donde se encuentran los datos
 * [OUT] punteros, array de punteros de estructuras
 * [ IN] tam, tamaño maximo del array
 * [RET] return, codigos de error con valor negativo */
int inicializarPunteros(Cliente_t* array, Cliente_t** punteros, int tam);

/* funcion que permite introducir la informacion en el array de datos
 * [OUT] array, array de estructuras donde se encuentran los datos
 * [ IN] tam, tamaño maximo del array datos
 * [OUT] n, vairable que contiene el numero de elementos intoducidos en el array
 * [ IN] nombre, nombre del cliente a introducir
 * [ IN] apellido, apellido del cliente a introducir 
 * [RET] return, codigos de error con valor negativo */
int introducirCliente(Cliente_t *array, int tam, int* n, char* nombre, char* apellido, float ingresos);

/* funcion que muestra una lista de los datos a traves del array de datos
 * [ IN] array, array de estructuras donde se encuentran los datos
 * [ IN] tam, tamaño maximo del array datos
 * [ IN] n, numero de datos introducidos en el array
 * [RET] return, codigos de error con valor negativo */
int mostrarDatosArrayEstructuras(const Cliente_t* array, int tam, int n);

/* funcion que muestra una lista de los datos a traves del array de punteros
 * [ IN] punteros, array de punteros de estructuras
 * [ IN] tam, tamaño maximo del array datos
 * [ IN] n, numero de datos introducidos en el array
 * [RET] return, codigos de error con valor negativo */
int mostrarDatosArrayPunteros(Cliente_t** punteros, int tam, int n);

/* funcion que calcula al varianza del campo ingresos a traves del array de datos
 * [ IN] array, array de estructuras donde se encuentran los datos
 * [ IN] tam, tamaño maximo del array datos
 * [ IN] n, numero de datos introducidos en el array
 * [RET] return, valor de la varianza del campo ingresos o codigos de error con valor negativo */
float calcularVarianzaIngresosArrayEstructuras(const Cliente_t* array, int tam, int n);

/* funcion que ordena el array de punteros de forma que coincida con el orden alfabetico de campo nombre
 * [ IN] punteros, array de punteros de estructuras
 * [ IN] tam, tamaño maximo del array datos
 * [ IN] n, numero de datos introducidos en el array
 * [RET] return, codigos de error con valor negativo */
int ordenarPorNombreArrayPunteros(Cliente_t** punteros, int tam, int n);

#endif