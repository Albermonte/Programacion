/* Nombre Fichero: src/lista.c */

#include "lista.h"
/*Añade un nuevo nodo al principio de la lista y rellena el nodo con la matrícula pasada como parametro.
 [IN/OUT] pcab. Dirección del puntero al primer nodo de la lista.
 [IN] coche. Nuevo elemento a añadir.
 Devuelve 0 si todo ha salido bien o -1 si ha habido errores*/
int aniadirPrincipio(Coche_t **pcab, const char *matricula) 
{
	int ret=-1;
	if(matricula == NULL || pcab == NULL)
	return ret;
	Coche_t *nuevo;
	nuevo=(Coche_t*)malloc(sizeof(Coche_t));
	if (nuevo == NULL )
	return ret;
	else
	{
	  strcpy(nuevo->matricula,matricula);

	  nuevo->sig=(*pcab);
	  *pcab=nuevo;
	}
	return 0;
}


/*Muestra por pantalla informacion sobre la lista
 [IN] pcab. Puntero a la lista a mostrar por pantalla
 Devuelve 0 si todo ha salido bien o -1 si ha habido errores*/
int listar(Coche_t *pcab) 
{
	Coche_t *p=NULL;
	int ret=-1;
	if(pcab==NULL)
		return ret;
	p=pcab;
	while(p!=NULL)
	{
		printf("ELEMENTO:%s\n",p->matricula);
		p=p->sig;
	}

   return 0;
}

/*busca el nodo con la matricula deseada y modifica su valor 
 [IN/OUT] incio. Puntero al primer nodo de la lista
 [IN] matricula. Matricula a modificar
 [IN] nueva. Nueva matricula que sustituye a la anterior
 Devuelve 0 si ha encontrado la clave o -1 en caso contrario*/
int modificar(Coche_t **pcab, char *matricula, char *nueva) 
{
	Coche_t *p=NULL;
	int ret=-1;
	if(pcab==NULL || matricula==NULL || nueva==NULL )
		return ret;
	p=buscarNodo(pcab, matricula);
	if(p==NULL)
		return ret;
	strcpy(p->matricula,nueva);
 	return 0;  
}

/*busca el nodo con la matricula deseada y lo elimina de la lista
 [IN/OUT] incio. Puntero al primer nodo de la lista
 [IN] matricula. Matricula a eliminar
 Devuelve 0 si ha encontrado la clave o -1 en caso contrario*/
int borrarNodo(Coche_t **pcab, char *matricula) 
{
	Coche_t *p=NULL, *p_ant = NULL;
	int ret=-1;
	if(pcab==NULL || matricula==NULL || *pcab == NULL)
	return ret;

	p=buscarNodo(pcab,matricula);
	p_ant=buscarNodoAnt(pcab, matricula);
	p_ant->sig=p->sig;
	p->sig=NULL;
	free(p);

    return 0;
}

/*busca el nodo con la matricula deseada y devuelve el puntero anterior a ese nodo.
 Si no encuentra el nodo devuelve NULL
 [IN/OUT] incio. Puntero al primer nodo de la lista
 [IN] matricula. Matricula a buscar*/
Coche_t* buscarNodoAnt(Coche_t **pcab, char *matricula) 
{
	Coche_t *p=NULL;
	if(pcab==NULL || matricula==NULL)
		return NULL;
	p=*pcab;
	while(p!=NULL)
	{
		if(strcmp(p->sig->matricula,matricula)==0)
		return p;

		else
		p=p->sig;
	}
   return NULL;
    

}

/*busca el nodo con la matricula deseada y devuelve el puntero a ese nodo.
 Si no lo encuentra devuelve NULL
 [IN/OUT] incio. Puntero al primer nodo de la lista
 [IN] matricula. Matricula a buscar*/
Coche_t* buscarNodo(Coche_t **pcab, char *matricula) {
	Coche_t *p=NULL;
	if(pcab==NULL || matricula==NULL)
		return NULL;
	p=*pcab;
	while(p!=NULL){
		if(strcmp(p->matricula,matricula)==0){
			return p;
		}
		p=p->sig;
	}
   return NULL;
}

/*Borra el primer elemento de la lista
 [IN/OUT] incio. Puntero al primer nodo de la lista
 Devuelve 0 si todo ha salido bien o -1 si ha habido errores*/
int borrarAlPrincipio(Coche_t **pcab) 
{
	Coche_t *p=NULL;
	int ret=-1;
	if(pcab == NULL || *pcab == NULL)
	return ret;
	p=*pcab;
	*pcab=p->sig;
	p->sig=NULL;
	free(p);
    return 0;
  
}

/*Libera toda la memoria reservada.
 [IN/OUT] pcab. Dirección del puntero al primer nodo de la lista*/
void liberarMemoria(Coche_t **pcab) 
{
    while (*pcab != NULL) 
{
        borrarAlPrincipio(pcab);
}
}

/*ordena la lista alfabeticamente segun la matricula. 
 [IN/OUT] pcab. Puntero al primer nodo de la lista
 [IN] orden. Indica si es ascendente o descendente 
 Devuelve 0 si se ha ordenado correctamente o -1 en caso contrario*/
int ordenarLista(Coche_t **pcab, int orden) {
	Coche_t *p=NULL, *q=NULL;
	char aux[TAM_MATRICULA];
	if(pcab==NULL || (orden!=1 && orden!=-1))
		return -1;
	p=*pcab;
	q=p->sig;
	if(orden == ASC){
		while(p!=NULL){
			while(q!=NULL){
				if(p->matricula[0]>q->matricula[0]){
					strcpy(aux,p->matricula);
					strcpy(p->matricula,q->matricula);
					strcpy(q->matricula,aux);
				}if(p->matricula[0]==q->matricula[0]){
					if(p->matricula[1]>q->matricula[1]){
						strcpy(aux,p->matricula);
						strcpy(p->matricula,q->matricula);
						strcpy(q->matricula,aux);
					}if(p->matricula[1]==q->matricula[1]){
						if(p->matricula[2]>q->matricula[2]){
							strcpy(aux,p->matricula);
							strcpy(p->matricula,q->matricula);
							strcpy(q->matricula,aux);
						}
					}
				}
				q=q->sig;	
			}
			if(p->sig!=NULL)
				q=p->sig;
			p=p->sig;
		}
	}else{
		while(p!=NULL){
			while(q!=NULL){
				if(p->matricula[0]<q->matricula[0]){
					strcpy(aux,p->matricula);
					strcpy(p->matricula,q->matricula);
					strcpy(q->matricula,aux);
				}if(p->matricula[0]==q->matricula[0]){
					if(p->matricula[1]<q->matricula[1]){
						strcpy(aux,p->matricula);
						strcpy(p->matricula,q->matricula);
						strcpy(q->matricula,aux);
					}if(p->matricula[1]==q->matricula[1]){
						if(p->matricula[2]<q->matricula[2]){
							strcpy(aux,p->matricula);
							strcpy(p->matricula,q->matricula);
							strcpy(q->matricula,aux);
						}
					}
				}
				q=q->sig;	
			}
			if(p->sig!=NULL)
				q=p->sig;
			p=p->sig;
		}
	}
    return 0;
 
}

/*Añade un nuevo nodo en una lista ya ordenada y rellena el nodo con la matricula pasada como parametro.
 [IN/OUT] pcab. Puntero al primer nodo de la lista.
 [IN] matricula. Nuevo elemento a añadir.
 [IN] orden. Indica si es ascendente o descendente 
 Devuelve 0 si todo ha salido bien o -1 si ha habido errores*/
int aniadirOrdenado(Coche_t **pcab, char *matricula, int orden) 
{
	if(pcab==NULL || matricula==NULL)
		return -1;
	if(aniadirPrincipio(pcab, matricula)==-1)
		return -1;
	if(ordenarLista(pcab, orden) == -1)
		return -1;
    return 0;

}
