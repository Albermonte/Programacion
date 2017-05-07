/* Nombre Fichero: src/main.c */

#include "pila.h"

int main() {
    int test = 0, i;
    const int NUM_MAT = 5;
    Coche_t *pila = NULL;
    char mat[][TAM_MATRICULA] = {
        "1254GBT",
        "6512HDT",
        "0145FTD",
        "3008CSR",
        "2543BHY"
    };

    test = borrarAlPrincipio(&pila);
    
    if(test != -1)
    {
	printf("Error en %s en la línea %d,  práctica no apta!!!!\n",  __FILE__, __LINE__);
        exit(-1);
    }
      
    test = borrarAlPrincipio(0);
    
    if(test != -1)
    {
	printf("Error en %s en la línea %d,  práctica no apta!!!!\n",  __FILE__, __LINE__);
        exit(-1);
    }
    
    test = listar(0);
    
    if(test != -1)
    {
	printf("Error en %s en la línea %d,  práctica no apta!!!!\n",  __FILE__, __LINE__);
        exit(-1);
    }
    
    
    
    test = aniadirPrincipio(0, mat[0]);
    if(test != -1)
    {
	printf("Error en %s en la línea %d,  práctica no apta!!!!\n",  __FILE__, __LINE__);
        exit(-1);
    }
    
    
    test = aniadirPrincipio(&pila, 0);
    if(test != -1)
    {
	printf("Error en %s en la línea %d,  práctica no apta!!!!\n",  __FILE__, __LINE__);
        exit(-1);
    }    
    
    
    listar(pila);

    test = aniadirPrincipio(&pila, mat[0]);
    printf("aniadirPrincipio(%s):%d\n", mat[0], test);
    listar(pila);

    test = borrarAlPrincipio(&pila);
    printf("borrarAlPrincipio:%d\n", test);
    listar(pila);

    for (i = 0; i < NUM_MAT; i++) {
        test = aniadirPrincipio(&pila, mat[i]);
        printf("aniadirPrincipio(%s):%d\n", mat[i], test);
        listar(pila);
    }

    for (i = 0; i < NUM_MAT; i++) {
        test = borrarAlPrincipio(&pila);
        printf("borrarAlPrincipio:%d\n", test);
        listar(pila);
    }

    liberarMemoria(&pila);
    listar(pila);
    return 0;
}


