/* Nombre Fichero: include/palindromo.h */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>


// Definicion de funciones

/* funcion que permite quitar espacios y comas de una cadena de longitud indefinida
 * [OUT] textoCon, array de char para eliminar espacios y comas
 * [ IN] textoSin, array de char para copiar la cadena sin espacios y comas (Reservar memoria para él)
 * [RET] return, Si error 0 */
int quitarEspacios(const char */*textoCon*/, char */*textoSin*/);


/* funcion que permite comprobar si una cadena es palídromo
 * [ IN] cadena, array de char para comprobar si es palíndromo
 * [RET] return, Si error o no es palíndromo 0. Si es palídromo 1 */
int comprobarPalindromo(const char */*cadena*/);
