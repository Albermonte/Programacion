/* Nombre Fichero: include/argumentos.h */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>


// Declaracion de los prototipos de las funciones

/* funcion que lee los argumentos introducidos y devuelve separados la operación y los argumentos
 * [ IN] argc, numero de argumentos 
 * [ IN] argv, array de punteros a cadenas de caracteres que contiene los argc argumentos
 * [OUT] op1, puntero a un double que se rellenará con el primer operando
 * [OUT] op2, puntero a un double que se rellenará con el segundo operando
 * [OUT] operacion, puntero a un char que se rellenará con el carácter de la operación
 * [RET] Menor que cero si hay error
 */

int leerArgs(int /*argc*/, char **/*argv*/, double */*op1*/, double */*op2*/, char */*operacion*/);
