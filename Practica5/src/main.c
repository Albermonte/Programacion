/* Nombre Fichero: src/main.c */
#include "prog05.h"
#include <math.h>

int main() {
    Cliente_t arrayClientes[MAX_ARRAY];
    Cliente_t * punteroClientes[MAX_ARRAY];

    int n = 0;
    int ret = 0;
    float retF = 0;
    char *TxtError = "Error en %s, en la línea %d, práctica no apta!!!\n";    
    
    
    printf("\nComprobando parámetros de inicializarPunteros en línea %d\n",__LINE__);

    
    ret = inicializarPunteros(0, punteroClientes, MAX_ARRAY);
    if (ret > 0) {
        printf(TxtError,  __FILE__, __LINE__);
        exit(-1);
    }
    
    ret = inicializarPunteros(arrayClientes, 0, MAX_ARRAY);
    if (ret > 0) {
        printf(TxtError,  __FILE__, __LINE__);
        exit(-1);
    }
    
    
    ret = inicializarPunteros(arrayClientes, punteroClientes, -1);
    if (ret > 0) {
        printf(TxtError,  __FILE__, __LINE__);
        exit(-1);
    }
    
    
    
    printf("\nParámetros de inicializarPunteros en línea %d correctos\n\n\n",__LINE__);

    ret = inicializarPunteros(arrayClientes, punteroClientes, MAX_ARRAY);
    if (ret < 0) {
        printf("Error en implementacion funcion inicializarPunteros, codigo %d\n", ret);
        exit(-1);
    }

    
    printf("\nComprobando parámetros de introducirCliente en línea %d\n",__LINE__);

    ret = introducirCliente(0, MAX_ARRAY, &n, "ruben", "izquierdo", 37.5);
    if (ret > 0) {
        printf(TxtError,  __FILE__, __LINE__);
        exit(-1);
    }

    ret = introducirCliente(arrayClientes, 0, &n, "ruben", "izquierdo", 37.5);
    if (ret > 0) {
        printf(TxtError,  __FILE__, __LINE__);
        exit(-1);
    }

    ret = introducirCliente(arrayClientes, MAX_ARRAY, 0, "ruben", "izquierdo", 37.5);
    if (ret > 0) {
        printf(TxtError,  __FILE__, __LINE__);
        exit(-1);
    }

    ret = introducirCliente(arrayClientes, MAX_ARRAY, &n, 0, "izquierdo", 37.5);
    if (ret > 0) {
        printf(TxtError,  __FILE__, __LINE__);
        exit(-1);
    }
    
    ret = introducirCliente(arrayClientes, MAX_ARRAY, &n, "ruben", 0, 37.5);
    if (ret > 0) {
        printf(TxtError,  __FILE__, __LINE__);
        exit(-1);
    }

    ret = introducirCliente(arrayClientes, MAX_ARRAY, &n, "ruben", "izquierdo", -1);
    if (ret > 0) {
        printf(TxtError,  __FILE__, __LINE__);
        exit(-1);
    }

    printf("\nParámetros de introducirCliente en línea %d correctos\n\n\n",__LINE__);

    
    ret = introducirCliente(arrayClientes, MAX_ARRAY, &n, "ruben", "izquierdo", 37.5);
    if (ret < 0) {
        printf(TxtError,  __FILE__, __LINE__);
        exit(-1);
    }
    ret = introducirCliente(arrayClientes, MAX_ARRAY, &n, "carlos", "fernandez", 92.2);
    if (ret < 0) {
        printf(TxtError,  __FILE__, __LINE__);
        exit(-1);
    }
    ret = introducirCliente(arrayClientes, MAX_ARRAY, &n, "raul", "quintero", 120.5);
    if (ret < 0) {
        printf(TxtError,  __FILE__, __LINE__);
        exit(-1);
    }

    printf("\nComprobando parámetros de mostrarDatosArrayEstructuras en línea %d\n",__LINE__);


    ret = mostrarDatosArrayEstructuras(0, MAX_ARRAY, n);
    if (ret > 0) {
        printf(TxtError,  __FILE__, __LINE__);
        exit(-1);
    }
    
    ret = mostrarDatosArrayEstructuras(arrayClientes, 0, n);
    if (ret > 0) {
        printf(TxtError,  __FILE__, __LINE__);
        exit(-1);
    }
    
    ret = mostrarDatosArrayEstructuras(arrayClientes, MAX_ARRAY, -1);
    if (ret > 0) {
        printf(TxtError,  __FILE__, __LINE__);
        exit(-1);
    }    
    
    printf("\nParámetros de mostrarDatosArrayEstructuras en línea %d correctos\n\n\n",__LINE__);

    
    printf("\nLista de clientes contenida en el array de estructuras:\n");
    ret = mostrarDatosArrayEstructuras(arrayClientes, MAX_ARRAY, n);
    if (ret < 0) {
        printf(TxtError,  __FILE__, __LINE__);
        exit(-1);
    }

    
    printf("\nComprobando parámetros de ordenarPorNombreArrayPunteros en línea %d\n",__LINE__);

    
    ret = ordenarPorNombreArrayPunteros(0, MAX_ARRAY, n);
    if (ret > 0) {
        printf(TxtError,  __FILE__, __LINE__);
        exit(-1);
    }

    ret = ordenarPorNombreArrayPunteros(punteroClientes, 0, n);
    if (ret > 0) {
        printf(TxtError,  __FILE__, __LINE__);
        exit(-1);
    }

    ret = ordenarPorNombreArrayPunteros(punteroClientes, MAX_ARRAY, -1);
    if (ret > 0) {
        printf(TxtError,  __FILE__, __LINE__);
        exit(-1);
    }
    
    printf("\nParámetros de ordenarPorNombreArrayPunteros en línea %d correctos\n\n\n",__LINE__);

    
    ret = ordenarPorNombreArrayPunteros(punteroClientes, MAX_ARRAY, n);
    if (ret < 0) {
        printf(TxtError,  __FILE__, __LINE__);
        exit(-1);
    }

    
    printf("\nComprobando parámetros de mostrarDatosArrayPunteros en línea %d\n",__LINE__);

    
    ret = mostrarDatosArrayPunteros(0, MAX_ARRAY, n);
    if (ret > 0) {
        printf(TxtError,  __FILE__, __LINE__);
        exit(-1);
    }
   
    
    ret = mostrarDatosArrayPunteros(punteroClientes, 0, n);
    if (ret > 0) {
        printf(TxtError,  __FILE__, __LINE__);
        exit(-1);
    }
   
    ret = mostrarDatosArrayPunteros(punteroClientes, MAX_ARRAY, -1);
    if (ret > 0) {
        printf(TxtError,  __FILE__, __LINE__);
        exit(-1);
    }

    printf("\nParámetros de mostrarDatosArrayPunteros en línea %d correctos\n\n\n",__LINE__);

     
    
    printf("\nLista de clientes contenida en el array de punteros ordenado alfabeticamente:\n");
    ret = mostrarDatosArrayPunteros(punteroClientes, MAX_ARRAY, n);
    if (ret < 0) {
        printf(TxtError,  __FILE__, __LINE__);
        exit(-1);
    }

    
    printf("\nComprobando parámetros de calcularVarianzaIngresosArrayEstructuras en línea %d\n",__LINE__);
     
    retF = calcularVarianzaIngresosArrayEstructuras(0, MAX_ARRAY, n);
    if (retF > 0) {
        printf(TxtError,  __FILE__, __LINE__);
        exit(-1);
    }
    
    retF = calcularVarianzaIngresosArrayEstructuras(arrayClientes, 0, n);
    if (retF > 0) {
        printf(TxtError,  __FILE__, __LINE__);
        exit(-1);
    }
    
    retF = calcularVarianzaIngresosArrayEstructuras(arrayClientes, MAX_ARRAY, -1);
    if (retF > 0) {
        printf(TxtError,  __FILE__, __LINE__);
        exit(-1);
    }
     printf("\nParámetros de calcularVarianzaIngresosArrayEstructuras en línea %d correctos\n\n\n",__LINE__);
    
    
    retF = calcularVarianzaIngresosArrayEstructuras(arrayClientes, MAX_ARRAY, n);
    if (retF < 0 || fabs(retF - 1186.886597) > 0.001) {
        printf(TxtError,  __FILE__, __LINE__);
        exit(-1);
    } else
        printf("\nLa varianza de los ingresos de los clientes es: %.2f\n", retF);

    return 0;
}







