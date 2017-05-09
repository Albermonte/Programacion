/*
 * arboles.h
 *
 *  Created on: Jan 26, 2017
 *      Author: Departamento de Automática - UAH
 */

#ifndef ARBOLES_H_
#define ARBOLES_H_

// Estructura de un nodo de árbol binario
// Representa puntos de un mapa y las distancias entre ellos.
struct Punto
{
    char id; //Identificador del punto
    float distancia; //distancia entre el punto del nodo actual y el punto del nodo padre.
};

struct Nodo
{
	struct Punto punto;
	struct Nodo *hijoIzq;
	struct Nodo *hijoDer;
};
// Tipo de la estructura del nodo del árbol
typedef struct Nodo Nodo_t;


/* Añade un nuevo nodo a un árbol binario ordenado. Si el árbol está vacio crea el primer nodo.
 * Si el id es mayor que el nodo padre se inserta a la derecha. Si es menor a la izquierda.
 * Si es igual no se inserta y se devuelve -1 
 * Esta función se debe implementar recursivamente.
 * [OUT] puntero al nodo padre
 * [IN] identificador de un punto
 * [IN] distancia del punto del nodo padre al nuevo punto
 * [RET] return: devuelve -1 si la operación no se ha podido realizar */
int aniadirNodo(Nodo_t**, char, float);

/* Elimina un nodo del arbol y todo lo que cuelga de él. Esta función es recursiva
 * [OUT] nodo raiz de árbol
 * [IN] identificador del punto a eliminar
 * [RET] return: devuelve -1 si la operación no se ha podido realizar */
int eliminarNodo(Nodo_t**, char);

/* Cuenta el número de nodos del arbol. Esta función es recursiva
 * [IN] nodo raiz de árbol
 * [RET] return: devuelve el número de nodos */
int contarNodos(const Nodo_t*);

/* Libera la memoria del árbol. Va liberando la memoria de las hojas a la raiz.
 * Esta función es recursiva
 * [OUT] puntero a la raiz del árbol
 * [RET] return: devuelve -1 si la operación no se ha podido realizar */
int borrarArbol(Nodo_t**);


#endif /* ARBOLES_H_ */
