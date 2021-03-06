/* Nombre Fichero: src/main.c */

#include "cola.h"

int main() {
	
    int test = 0, i;
    const int NUM_MAT = 5;
    Coche_t *cola = NULL;
    char mat[][TAM_MATRICULA] = {
        "1254GBT",
        "6512HDT",
        "0145FTD",
        "3008CSR",
        "2543BHY"
    };

    test = borrarAlFinal(&cola);
    
    if(test != -1)
    {
	printf("Error en %s en la línea %d,  práctica no apta!!!!\n",  __FILE__, __LINE__);
        exit(-1);
    }
      
    test = borrarAlFinal(0);
    
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
    
    
    test = aniadirPrincipio(&cola, 0);
    if(test != -1)
    {
	printf("Error en %s en la línea %d,  práctica no apta!!!!\n",  __FILE__, __LINE__);
        exit(-1);
    }    
    
    

    listar(cola);

    test = aniadirPrincipio(&cola, mat[0]);
    printf("aniadirPrincipio(%s):%d\n", mat[0], test);

    listar(cola);

    test = borrarAlFinal(&cola);

    printf("borrarAlFinal:%d\n", test);

    listar(cola);

    for (i = 0; i < NUM_MAT; i++) {
        test = aniadirPrincipio(&cola, mat[i]);
        printf("aniadirPrincipio(%s):%d\n", mat[i], test);
        listar(cola);
    }

    for (i = 0; i < NUM_MAT; i++) {
        test = borrarAlFinal(&cola);
        printf("borrarAlFinal:%d\n", test);
        listar(cola);
    }

    liberarMemoria(&cola);

    listar(cola);

    return 0;
}




