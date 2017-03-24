/* Nombre Fichero: include/ficheros.h */

//funcion que abre un fichero(archivo)
//[IN] nombre del fichero
//[OUT] fichero
int abrirFicheroLectura(const char*, FILE **);

//funcion que escribe en un nuevo archivo el contenido del fichero original sin vocales. 
//el nombre del nuevo archivo lo obtiene con la función "modificarNombre"
//el texto sin vocales se consigue usando la función "vocalAx".
//[IN] nombre del fichero original
//[IN] fichero original
//[OUT] fichero modificado
//[OUT] numero de caracteres modificados
int escribirFicheroSinVocales(const char* ,const FILE *, FILE **, int*);




