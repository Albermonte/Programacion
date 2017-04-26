/* Nombre Fichero: src/lista.c */

#include "lista.h"

/*Añade un nuevo nodo al principio de la lista y rellena el nodo con la matrícula pasada como parametro.
 [IN/OUT] pcab. Dirección del puntero al primer nodo de la lista.
 [IN] coche. Nuevo elemento a añadir.
 Devuelve 0 si todo ha salido bien o -1 si ha habido errores*/
int aniadirPrincipio(Coche_t **pcab, const char *matricula) {
if(*pcab==NULL || matricula==NULL)
{
return -1;
}
else
{
	Coche_t *coche;
	*coche=**pcab;
	if (coche == NULL)
	{
		return -1;
	}
	else
	{
		strcpy(coche->matricula,matricula);
		coche->sig=*pcab;
		*pcab=coche;
	}
	
return 0;
}  
}


/*Muestra por pantalla informacion sobre la lista
 [IN] pcab. Puntero a la lista a mostrar por pantalla
 Devuelve 0 si todo ha salido bien o -1 si ha habido errores*/
int listar(Coche_t *pcab) {
   while(pcab!=NULL)
   {
   		Coche_t *coche;
   		*coche=*pcab;
   		printf("Matricula [%s]",coche->matricula);
   		coche=coche->sig;
   		
   }
}

/*busca el nodo con la matricula deseada y modifica su valor 
 [IN/OUT] incio. Puntero al primer nodo de la lista
 [IN] matricula. Matricula a modificar
 [IN] nueva. Nueva matricula que sustituye a la anterior
 Devuelve 0 si ha encontrado la clave o -1 en caso contrario*/
int modificar(Coche_t **pcab, char *matricula, char *nueva) {
if(*pcab==NULL || matricula==NULL || nueva==NULL)
{
return -1;
}
else
{
Coche_t *nodo;

*nodo=**pcab;
nodo=buscarNodo(&nodo, matricula);

strcpy(nodo->matricula,nueva);

return 0;
}
}

/*busca el nodo con la matricula deseada y lo elimina de la lista
 [IN/OUT] incio. Puntero al primer nodo de la lista
 [IN] matricula. Matricula a eliminar
 Devuelve 0 si ha encontrado la clave o -1 en caso contrario*/
int borrarNodo(Coche_t **pcab, char *matricula) 
{
if(*pcab==NULL || matricula==NULL)
{
return -1;
}
else
{

return 0;
}   
}

/*busca el nodo con la matricula deseada y devuelve el puntero anterior a ese nodo.
 Si no encuentra el nodo devuelve NULL
 [IN/OUT] incio. Puntero al primer nodo de la lista
 [IN] matricula. Matricula a buscar*/
Coche_t* buscarNodoAnt(Coche_t **pcab, char *matricula) {
	Coche_t *coche;
	Coche_t *cocheAnt;
	
	*coche=**pcab;
	while(coche!=NULL && strcmp(coche->matricula,matricula)!=0)
   	{
   		cocheAnt=coche;
   		coche=coche->sig;
   		
  	}
  	return &cocheAnt;
   
}

/*busca el nodo con la matricula deseada y devuelve el puntero a ese nodo.
 Si no lo encuentra devuelve NULL
 [IN/OUT] incio. Puntero al primer nodo de la lista
 [IN] matricula. Matricula a buscar*/
Coche_t* buscarNodo(Coche_t **pcab, char *matricula) {
   Coche_t *coche;
   
   *coche=**pcab;
   while(coche!=NULL && strcmp(coche->matricula,matricula)!=0)
   {
   		coche=coche->sig;
   }
   if(coche==NULL)
   {
   return NULL;
   }
   else
   {
   return &coche;
   }
}

/*Borra el primer elemento de la lista
 [IN/OUT] incio. Puntero al primer nodo de la lista
 Devuelve 0 si todo ha salido bien o -1 si ha habido errores*/
int borrarAlPrincipio(Coche_t **pcab) {
if(pcab==NULL)
{
return -1;
}
else
{


return 0;    
}
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

