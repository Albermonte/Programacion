/*
 * arboles.c
 *
 *  Created on: Jan 26, 2017
 *      Author: Departamento de Automática - UAH
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "arboles.h"



/* Añade un nuevo nodo a un árbol binario ordenado. Si el árbol está vacio crea el primer nodo.
 * Si el id es mayor que el nodo padre se inserta a la derecha. Si es menor a la izquierda.
 * Si es igual no se inserta y se devuelve -1 
 * Esta función se debe implementar recursivamente.
 * [OUT] puntero al nodo padre
 * [IN] identificador de un punto
 * [IN] distancia del punto del nodo padre al nuevo punto
 * [RET] return: devuelve -1 si la operación no se ha podido realizar */
int aniadirNodo(Nodo_t** nodo, char id, float distancia)
{
  
 
}


/* Elimina un nodo del arbol y todo lo que cuelga de él. Esta función es recursiva
 * [OUT] nodo raiz de árbol
 * [IN] identificador del punto a eliminar
 * [RET] return: devuelve -1 si la operación no se ha podido realizar */
int eliminarNodo(Nodo_t** nodo, char id)
{
  
}


/* Cuenta el número de nodos del arbol. Esta función es recursiva
 * [IN] nodo raiz de árbol
 * [RET] return: devuelve el número de nodos */
int contarNodos(const Nodo_t* nodo)
{
  
}


/* Libera la memoria del árbol. Va liberando la memoria de las hojas a la raiz.
 * Esta función es recursiva
 * [OUT] puntero a la raiz del árbol
 * [RET] return: devuelve -1 si la operación no se ha podido realizar */
int borrarArbol(Nodo_t** nodo)
{
  
}
