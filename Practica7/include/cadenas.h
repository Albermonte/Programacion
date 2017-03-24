/* Nombre Fichero: include/cadenas.h */

//funcion que modifica el nombre del archivo que se va a escribir para aclarar que el nuevo archivo no tiene vocales.
//el nombre del archivo se construirá a partir del nombre recibido como parámetro añadiendo "SinVocales" antes de la cadena ".txt". 
//en caso de no recibir ningún nombre se usará “SinVocales.txt” como nombre.
//[IN] nombre original
//[OUT] nombre modificado
void modificarNombre(const char*, char **);

//funcion que convierte las vocales de una cadena de caracteres a x
//[OUT] cadena de caracteres
//[IN] tamaño de la cadena
//[OUT] numero de caracteres modificado
void vocalAx(char*, int, int*);




