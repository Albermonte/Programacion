/* Nombre Fichero: include/temperaturas.h */

struct fecha_t {
    int anyo;
	int mes;
	int dia;
};

typedef struct dateTemp {
	struct fecha_t momento;
	float temperatura;
}dateTemp_t;

//funcion que abre y lee el archivo dado y guarda todas las fechas y temperaturas
//Al leer las fechas y las temperaturas comprobar que tienen sentido 
//(Fechas entre el 1 de enero de 1988 y el 31 de diciembre de 1991; Temperaturas entre -100º y 100º). 
//Si hay alguna línea incorrecta hay que descartarla y seguir leyendo.
//Se debe reservar el espacio suficiente para guardar los datos contenidos en el archivo.
//[IN] nombre del archivo
//[OUT] datos leidos 
//[OUT] número de fechas registradas
//[OUT] número de líneas incorrectas
//[RET] Si error < 0
int leerFichero(const char*, dateTemp_t**, int*, int*);

//funcion que guarda los datos en un nuevo archivo cuyo nombre se pasa como parámetro.
//[IN] datos a guardar
//[IN] número de fechas registradas 
//[IN] nombre del archivo 
//[RET] Si error < 0
int guardarFichero(const dateTemp_t*, int, const char*);

//funcion que recibe la fecha del dato que se desea modificar y cambia su temperatura
//[OUT] datos a modificar 
//[IN] número de fechas registradas
//[IN] fecha a cambiar
//[IN] nueva temperatura
//[RET] Si error < 0
int modificarRegistro(dateTemp_t**, int, struct fecha_t, float);

//funcion que calcula la temperatura máxima y el día que se dió
//[IN] datos leidos
//[IN] número de fechas registradas
//[OUT] temperatura máxima
//[OUT] fecha de la temperatura máxima
//[RET] Si error < 0
int calcularTempMaxima(const dateTemp_t*, int, float*, struct fecha_t*);

//funcion que calcula la temperatura mínima y el día que se dió
//[IN] datos leidos
//[IN] número de fechas registradas
//[OUT] temperatura mínima
//[OUT] fecha de la temperatura mínima
//[RET] Si error < 0
int calcularTempMinima(const dateTemp_t*, int, float*, struct fecha_t*);

//funcion que calcula la temperatura media.  
//[IN] datos leidos
//[IN] número de fechas registradas
//[OUT] temperatura media
//[RET] Si error < 0
int calcularTempMedia(const dateTemp_t*, int, float*);





