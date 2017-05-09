/* Nombre Fichero: src/main.c */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "arboles.h"

int buscarPunto(const Nodo_t* nodo, char *fd);


int main()
{ 
	int ret = 0;
	
	// Pruebas insertar el nodo por la izquierda ----------------------------- //
	Nodo_t* raizArbol = NULL;
	ret = borrarArbol(&raizArbol);
	if (ret > 0 || raizArbol!= NULL) printf("(1.1) Practica INCORRECTA \n");
	else printf("(1.1) Practica correcta \n");
	
	ret = aniadirNodo(&raizArbol, 'A', 0.0);
	if (ret < 0 ) printf("(1.2) Practica INCORRECTA \n");
	else printf("(1.2) Practica correcta \n");
	printf("raizArbol: %p\n",raizArbol);
	if( raizArbol != NULL )
	{
		printf("raizArbol->punto.id: %c\n",raizArbol->punto.id);
		printf("raizArbol->punto.distancia: %f\n",raizArbol->punto.distancia);
		printf("raizArbol->hijoIzq: %p\n",raizArbol->hijoIzq);
		printf("raizArbol->hijoDer: %p\n",raizArbol->hijoDer);
	}
	
	ret = contarNodos(raizArbol);
	if (ret != 1) printf("(1.3) Practica INCORRECTA \n");
	else printf("(1.3) Practica correcta \n");
	
	ret = aniadirNodo(&raizArbol, 'B', 10.0);
	if (ret < 0 ) printf("(1.4) Practica INCORRECTA \n");
	else printf("(1.4) Practica correcta \n");
	printf("raizArbol: %p\n",raizArbol);
	if( raizArbol != NULL )
	{
		printf("raizArbol->punto.id: %c\n",raizArbol->punto.id);
		printf("raizArbol->punto.distancia: %f\n",raizArbol->punto.distancia);
		printf("raizArbol->hijoIzq: %p\n",raizArbol->hijoIzq);
		printf("raizArbol->hijoDer: %p\n",raizArbol->hijoDer);
	}
	printf("(raizArbol->hijoIzq): %p\n",raizArbol->hijoIzq);
	if( raizArbol->hijoIzq != NULL )
	{
		printf("(raizArbol->hijoIzq)->punto.id: %c\n",(raizArbol->hijoIzq)->punto.id);
		printf("(raizArbol->hijoIzq)->punto.distancia: %f\n",(raizArbol->hijoIzq)->punto.distancia);
		printf("(raizArbol->hijoIzq)->hijoIzq: %p\n",(raizArbol->hijoIzq)->hijoIzq);
		printf("(raizArbol->hijoIzq)->hijoDer: %p\n",(raizArbol->hijoIzq)->hijoDer);
	}
	printf("(raizArbol->hijoDer): %p\n",raizArbol->hijoDer);
	if( raizArbol->hijoDer != NULL )
	{
		printf("(raizArbol->hijoDer)->punto.id: %c\n",(raizArbol->hijoDer)->punto.id);
		printf("(raizArbol->hijoDer)->punto.distancia: %f\n",(raizArbol->hijoDer)->punto.distancia);
		printf("(raizArbol->hijoDer)->hijoIzq: %p\n",(raizArbol->hijoDer)->hijoIzq);
		printf("(raizArbol->hijoDer)->hijoDer: %p\n",(raizArbol->hijoDer)->hijoDer);
	}
	
	
	ret = contarNodos(raizArbol);
	if (ret != 2) printf("(1.5) Practica INCORRECTA %d\n", ret);
	else printf("(1.5) Practica correcta \n");
	
	ret = aniadirNodo(&raizArbol, 'C', 13.4);
	if (ret > 0 ) printf("(1.6) Practica correcta \n");
	else printf("(1.6) Practica INCORRECTA \n");
        
        ret = aniadirNodo(&(raizArbol), 'B', 11.4);
	if (ret < 0 ) printf("(1.7) Practica correcta \n");
	else printf("(1.7) Practica INCORRECTA %d\n", ret);
	
	ret = borrarArbol(&raizArbol);
	if (ret < 0 || raizArbol!= NULL) printf("(1.8) Practica INCORRECTA\n");
	else printf("(1.8) Practica correcta \n");
	
	ret = contarNodos(raizArbol);
	if (ret != 0) printf("(1.9) Practica INCORRECTA \n");
	else printf("(1.9) Practica correcta \n");
	
	// Pruebas insertar el nodo por la derecha ----------------------------- //
	if (raizArbol != NULL) raizArbol = NULL; //Debería ser NULL
	ret = aniadirNodo(&raizArbol, 'A', 0.0);
	if (ret < 0 ) printf("(2.1) Practica INCORRECTA \n");
	else printf("(2.1) Practica correcta \n");
	
	ret = aniadirNodo(&raizArbol, 'B', 10.0);
	if (ret < 0 ) printf("(2.2) Practica INCORRECTA \n");
	else printf("(2.2) Practica correcta \n");
	
	ret = aniadirNodo(&raizArbol, 'C', 13.4);
	if (ret > 0 ) printf("(2.3) Practica correcta \n");
	else printf("(2.3) Practica INCORRECTA \n");
	
	ret = contarNodos(raizArbol);
	if (ret != 3) printf("(2.4) Practica INCORRECTA \n");
	else printf("(2.4) Practica correcta \n");
	
	ret = borrarArbol(&raizArbol);
	if (ret < 0 || raizArbol!= NULL) printf("(2.5) Practica INCORRECTA \n");
	else printf("(2.5) Practica correcta \n");
	
	ret = contarNodos(raizArbol);
	if (ret != 0) printf("(2.6) Practica INCORRECTA \n");
	else printf("(2.6) Practica correcta \n");
	
	// Cargar un arbol ----------------------------- //
	if (raizArbol != NULL) raizArbol = NULL; //Debería ser NULL
	ret = 0;
	ret += aniadirNodo(&raizArbol, 'H', 0.0);
	ret += aniadirNodo(&raizArbol, 'M', 7.3);
	ret += aniadirNodo(&raizArbol, 'E', 9.5);
	// &(raizArbol->hijoIzq)
	ret += aniadirNodo(&(raizArbol), 'J', 8.8);
	ret += aniadirNodo(&(raizArbol), 'L', 9.4);
	// &(raizArbol->hijoDer)
	ret += aniadirNodo(&(raizArbol), 'S', 9.2);
	ret += aniadirNodo(&(raizArbol), 'G', 11.4);
	// &(raizArbol->hijoIzq->hijoIzq)
	ret += aniadirNodo(&(raizArbol), 'B', 7.6);
	ret += aniadirNodo(&(raizArbol), 'I', 6.5);
	// &(raizArbol->hijoIzq->hijoDer)
	ret += aniadirNodo(&(raizArbol), 'D', 5.4);
	ret += aniadirNodo(&(raizArbol), 'Q', 4.3);
	// &(raizArbol->hijoDer->hijoIzq)
	ret += aniadirNodo(&(raizArbol), 'C', 9.2);
	ret += aniadirNodo(&(raizArbol), 'T', 4.2);
	// &(raizArbol->hijoDer->hijoDer)
	ret += aniadirNodo(&(raizArbol), 'Z', 8.9);
	ret += aniadirNodo(&(raizArbol), 'A', 5.6);
	
	
	if (ret != 15) printf("(3.0) Practica INCORRECTA %d\n", ret);
	else printf("(3.0) Practica correcta \n");
	
	
	ret = contarNodos(raizArbol);
	if (ret != 15) printf("(3.1) Practica INCORRECTA %d\n", ret);
	else printf("(3.1) Practica correcta \n");

	char fd[200];
	fd[0]='\0';
	buscarPunto(raizArbol, fd);
	
	
	if(strcmp(fd, "H E B A D C G M J I L S Q T Z ")==0)
	  printf("(3.2) Comprobando estructura árbol Practica correcta \n");
	else printf("(3.2)  Comprobando estructura árbol  Practica INCORRECTA %s\n", fd); 
	
      
        
        // FINAL ---------------------------------------------------- //
        ret = borrarArbol(&raizArbol);
	if (ret < 0 || raizArbol!= NULL) printf("(5.0) Practica INCORRECTA \n");
	else printf("(5.0) Practica correcta \n");
	
	
	return 0;
}


/* Cuenta el número de nodos del arbol con el id dado 
 * [IN] nodo raiz de árbol
 * [IN] identificador del punto a buscar
 * [OUT] número de nodos del árbol
 * [RET] return: devuelve -1 si la operación no se ha podido realizar */
int buscarPunto(const Nodo_t* nodo, char *fd)
{
  int ret= -1;
  char temp[10];
  
  if(nodo==NULL)
  {
//      printf("Error en los parámetros de %s\n", __FUNCTION__);
      ret = -1;
  }
  else
  {   
    sprintf(temp, "%c ", nodo->punto.id);
    strcat(fd,temp);
    buscarPunto(nodo->hijoIzq, fd);
    buscarPunto(nodo->hijoDer, fd);
    
    
    ret= 1;
  }
    	
    return ret;
}
