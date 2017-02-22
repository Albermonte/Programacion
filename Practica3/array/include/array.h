/* Nombre Fichero: include/array.h */

#include <stdio.h>


// Definicion de funciones

/* funcion que permite copiar un array en otro
 * [OUT] p, array de doubles que recibe la copia
 * [ IN] num_element, número de elementos del array a copiar
 * [OUT] datos, array de doubles fuente para copiar
 * [RET] return, Si error 0 */
int copiarArray(double */*p*/, int /*num_elem*/, const double * /*datos*/);

/* funcion que permite sacar num_element elementos de un array por pantalla
 * [ IN] p, array 
 * [ IN] num_element, número de elementos del array a mostrar
 * [RET] return, Si error 0 */
int  imprimirArray(const double * /*p*/, int /*num_elem*/);
