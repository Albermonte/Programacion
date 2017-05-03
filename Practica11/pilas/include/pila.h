/* Nombre Fichero: include/pila.h */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAM_MATRICULA 10

typedef struct Aux Coche_t;

struct Aux {
    char matricula[TAM_MATRICULA];
    Coche_t *sig;
};

/*Añade un nuevo nodo al principio de la lista y rellena el nodo con la clave pasada como parametro.
 [IN/OUT] incio. Puntero al primer nodo de la lista.
 [IN] matricula. Nuevo elemento a añadir.
 Devuelve 0 si todo ha salido bien o -1 si ha habido errores*/
int aniadirPrincipio(Coche_t **pcab, const char *matricula);

/*Muestra por pantalla informacion sobre la lista
 [IN] inicio. Lista a mostrar por pantalla
 Devuelve 0 si todo ha salido bien o -1 si ha habido errores*/
int listar(Coche_t *inicio);

/*Borra el primer elemento de la lista
 [IN/OUT] incio. Puntero al primer nodo de la lista
 Devuelve 0 si todo ha salido bien o -1 si ha habido errores*/
int borrarAlPrincipio(Coche_t **inicio);

/*Libera toda la memoria reservada.
 [IN/OUT] incio. Puntero al primer nodo de la lista*/
void liberarMemoria(Coche_t **inicio);