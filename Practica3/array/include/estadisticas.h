/* Nombre Fichero: include/estadisticas.h */
#include <stdio.h>
#include <math.h>


/* funcion que permite encontrar el mayor valor en un array
 * [ IN] p, array de doubles
 * [ IN] num_element, número de elementos del array
 * [OUT] mayor, puntero a double para devolver el mayor valor del array
 * [RET] return, Si error 0 */
int calcularMayor(const double */*p*/,  int /*num_elem*/, double * /*mayor*/);

/* funcion que permite encontrar el menor valor en un array
 * [ IN] p, array de doubles
 * [ IN] num_element, número de elementos del array
 * [OUT] menor, puntero a double para devolver el menor valor del array
 * [RET] return, Si error 0 */
int calcularMenor(const double */*p*/, int /*num_elem*/, double * /*menor*/);

/* funcion que permite calcular la media de los valores en un array
 * [ IN] p, array de doubles
 * [ IN] num_element, número de elementos del array
 * [OUT] media, puntero a double para devolver la media de los valores del array
 * [RET] return, Si error 0 */
int calcularMedia(const double * /*p*/, int /*num_elem*/, double * /*media*/);

/* funcion que permite calcular la varianza de los valores en un array
 * [ IN] p, array de doubles
 * [ IN] num_element, número de elementos del array
 * [OUT] var, puntero a double para devolver la varianza de los valores del array
 * [RET] return, Si error 0 */
int calcularVar(const double * /*p*/, int /*num_elem*/, double /*media*/, double * /*var*/);


/* funcion que permite calcular la desviación típica de los valores en un array
 * [ IN] p, array de doubles
 * [ IN] num_element, número de elementos del array
 * [OUT] desviacionTipica, puntero a double para devolver la desviación típica de los valores del array
 * [RET] return, Si error 0 */
int calcularDesviacionTipica(double /*var*/, int /*num_elem*/, double * /*desviacionTipica*/);
