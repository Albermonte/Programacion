/* Nombre Fichero: src/lista.c */

#include "lista.h"

/*Añade un nuevo nodo al principio de la lista y rellena el nodo con la matrícula pasada como parametro.
 [IN/OUT] pcab. Dirección del puntero al primer nodo de la lista.
 [IN] coche. Nuevo elemento a añadir.
 Devuelve 0 si todo ha salido bien o -1 si ha habido errores*/
int aniadirPrincipio(Coche_t **pcab, const char *matricula) {
   
}


/*Muestra por pantalla informacion sobre la lista
 [IN] pcab. Puntero a la lista a mostrar por pantalla
 Devuelve 0 si todo ha salido bien o -1 si ha habido errores*/
int listar(Coche_t *pcab) {
   
}

/*busca el nodo con la matricula deseada y modifica su valor 
 [IN/OUT] incio. Puntero al primer nodo de la lista
 [IN] matricula. Matricula a modificar
 [IN] nueva. Nueva matricula que sustituye a la anterior
 Devuelve 0 si ha encontrado la clave o -1 en caso contrario*/
int modificar(Coche_t **pcab, char *matricula, char *nueva) {
    
}

/*busca el nodo con la matricula deseada y lo elimina de la lista
 [IN/OUT] incio. Puntero al primer nodo de la lista
 [IN] matricula. Matricula a eliminar
 Devuelve 0 si ha encontrado la clave o -1 en caso contrario*/
int borrarNodo(Coche_t **pcab, char *matricula) 
{
   
}

/*busca el nodo con la matricula deseada y devuelve el puntero anterior a ese nodo.
 Si no encuentra el nodo devuelve NULL
 [IN/OUT] incio. Puntero al primer nodo de la lista
 [IN] matricula. Matricula a buscar*/
Coche_t* buscarNodoAnt(Coche_t **pcab, char *matricula) {
   
}

/*busca el nodo con la matricula deseada y devuelve el puntero a ese nodo.
 Si no lo encuentra devuelve NULL
 [IN/OUT] incio. Puntero al primer nodo de la lista
 [IN] matricula. Matricula a buscar*/
Coche_t* buscarNodo(Coche_t **pcab, char *matricula) {
   
}

/*Borra el primer elemento de la lista
 [IN/OUT] incio. Puntero al primer nodo de la lista
 Devuelve 0 si todo ha salido bien o -1 si ha habido errores*/
int borrarAlPrincipio(Coche_t **pcab) {
    
}

/*Libera toda la memoria reservada.
 [IN/OUT] pcab. Dirección del puntero al primer nodo de la lista*/
void liberarMemoria(Coche_t **pcab) {
    while (*pcab != NULL) {
        borrarAlPrincipio(pcab);
    }
}

/*ordena la lista alfabeticamente segun la matricula. 
 [IN/OUT] pcab. Puntero al primer nodo de la lista
 [IN] orden. Indica si es ascendente o descendente 
 Devuelve 0 si se ha ordenado correctamente o -1 en caso contrario*/
int ordenarLista(Coche_t **pcab, int orden) {
   
}

/*Añade un nuevo nodo en una lista ya ordenada y rellena el nodo con la matricula pasada como parametro.
 [IN/OUT] pcab. Puntero al primer nodo de la lista.
 [IN] matricula. Nuevo elemento a añadir.
 [IN] orden. Indica si es ascendente o descendente 
 Devuelve 0 si todo ha salido bien o -1 si ha habido errores*/
int aniadirOrdenado(Coche_t **pcab, char *matricula, int orden) {
    
}
