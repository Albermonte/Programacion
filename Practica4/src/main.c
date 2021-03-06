/* Nombre Fichero: src/main.c */

#include "../include/prog04.h" 

int main() 
{
    Ciudad_t ciudades[MAX_ARRAY];
    int n = 0;
    int ret = 0;
    float retF = 0;
    char *TxtError1 = "Error en implementacion de funcion introducirCiudad , línea %d del main, práctica no apta!!!\n";
    char *TxtError2 = "Error en implementacion de funcion mostrarCiudades, línea %d del main, práctica no apta!!!\n";
    char *TxtError3 = "Error en implementacion de funcion mostrarCiudadesDespobladas, línea %d del main, práctica no apta!!!\n";
    char *TxtError4 = "Error en implementacion de funcion buscarCiudadMasPoblada, línea %d del main, práctica no apta!!!\n";
    char *TxtError5 = "Error en implementacion de funcion calcularPoblacionMedia, línea %d del main, práctica no apta!!!\n";
    char *TxtError6 = "Error en implementacion de funcion ordenarCiudadesPorPoblacion, línea %d del main, práctica no apta!!!\n";

    
    printf("\nComprobando parámetros de introducirCiudad en línea %d\n",__LINE__);
    
    ret = introducirCiudad(ciudades, MAX_ARRAY, 0, "Cáceres", 1500);
    if (ret >= 0) {
        printf(TxtError1, __LINE__);
    }
    ret = introducirCiudad(0, MAX_ARRAY, &n, "Cáceres", 1500);
    if (ret >= 0) {
        printf(TxtError1, __LINE__);
    }
    ret = introducirCiudad(ciudades, 0, &n, "Cáceres", 1500);
    if (ret >= 0) {
        printf(TxtError1, __LINE__);
    }
    ret = introducirCiudad(ciudades, MAX_ARRAY, &n, "CáceresMAX_ARRAYMAX_ARRAY", 1500);
    if (ret >= 0) {
        printf(TxtError1, __LINE__);
    }   
    ret = introducirCiudad(ciudades, MAX_ARRAY, 0, "Cáceres", -1500);
    if (ret >= 0) {
        printf(TxtError1, __LINE__);
    }
    
    printf("\nParámetros de introducirCiudad en línea %d correctos\n\n\n",__LINE__);

    ret = introducirCiudad(ciudades, MAX_ARRAY, &n, "Madrid", 700);
    if (ret < 0) {
        printf(TxtError1, __LINE__);
        exit(-1);
    }
    ret = introducirCiudad(ciudades, MAX_ARRAY, &n, "Murcia", 500);
    if (ret < 0) {
        printf(TxtError1, __LINE__);
        exit(-1);
    }
    ret = introducirCiudad(ciudades, MAX_ARRAY, &n, "Cáceres", 1500);
    if (ret < 0) {
        printf(TxtError1, __LINE__);
        exit(-1);
    }
    ret = introducirCiudad(ciudades, MAX_ARRAY, &n, "Salamanca", 200);
    if (ret < 0) {
        printf(TxtError1, __LINE__);
        exit(-1);
    }
    ret = introducirCiudad(ciudades, MAX_ARRAY, &n, "Toledo", 50);
    if (ret < 0) {
        printf(TxtError1, __LINE__);
        exit(-1);
    }
    ret = introducirCiudad(ciudades, MAX_ARRAY, &n, "Pinto", 1300);
    if (ret < 0) {
        printf(TxtError1, __LINE__);
        exit(-1);
    }
        ret = introducirCiudad(ciudades, MAX_ARRAY, &n, "Valdemoro", 30);
    if (ret < 0) {
        printf(TxtError1, __LINE__);
        exit(-1);
    }
    ret = introducirCiudad(ciudades, MAX_ARRAY, &n, "Alicante", 11500);
    if (ret < 0) {
        printf(TxtError1, __LINE__);
        exit(-1);
    }
    ret = introducirCiudad(ciudades, MAX_ARRAY, &n, "Badajoz", 1500);
    if (ret < 0) {
        printf(TxtError1, __LINE__);
        exit(-1);
    }    
    
    ret = introducirCiudad(ciudades, MAX_ARRAY, &n, "Melilla", 700);
    if (ret < 0) {
        printf(TxtError1, __LINE__);
        exit(-1);
    }

    ret = introducirCiudad(ciudades, MAX_ARRAY, &n, "Murcia", 500);
    if (ret > 0) {
        printf(TxtError1, __LINE__);
        exit(-1);
    }
    
    
    printf("\nComprobando parámetros de mostrarCiudades en línea %d\n",__LINE__);
    
    ret = mostrarCiudades(NULL, MAX_ARRAY, n);
    if (ret > 0) {
        printf(TxtError2, __LINE__);
        exit(-1);
    }
    
    ret = mostrarCiudades(ciudades, 0, n);
    if (ret > 0) {
        printf(TxtError2, __LINE__);
        exit(-1);
    }
    
    ret = mostrarCiudades(ciudades, MAX_ARRAY, 0);
    if (ret > 0) {
        printf(TxtError2, __LINE__);
        exit(-1);
    }
    
    printf("\nParámetros de mostrarCiudades en línea %d correctos\n\n\n",__LINE__);

    ret = mostrarCiudades(ciudades, MAX_ARRAY, n);
    if (ret < 0) {
        printf(TxtError2, __LINE__);
        exit(-1);
    }

    printf("\nComprobando parámetros de mostrarCiudadesDespobladas en línea %d\n",__LINE__);

    ret = mostrarCiudadesDespobladas(NULL, MAX_ARRAY, n);
    if (ret > 0) {
        printf(TxtError3,  __LINE__);
        exit(-1);
    }
    
    ret = mostrarCiudadesDespobladas(ciudades, 0, n);
    if (ret > 0) {
        printf(TxtError3,  __LINE__);
        exit(-1);
    }
    
    ret = mostrarCiudadesDespobladas(ciudades, MAX_ARRAY, 0);
    if (ret > 0) {
        printf(TxtError3,  __LINE__);
        exit(-1);
    }
    
    printf("\nParámetros de mostrarCiudadesDespobladas en línea %d correctos\n\n\n",__LINE__);

    printf("\nListado de ciudades despobaldas:\n");
    
    ret = mostrarCiudadesDespobladas(ciudades, MAX_ARRAY, n);
    if (ret < 0) {
        printf(TxtError3, __LINE__);
        exit(-1);
    } else
        printf("Hay %d ciudades despobladas\n", ret);

    
    
    printf("\nComprobando parámetros de buscarCiudadMasPoblada en línea %d\n",__LINE__);
    
    ret = buscarCiudadMasPoblada(0, MAX_ARRAY, n);
    if (ret > 0) {
        printf(TxtError4,  __LINE__);
        exit(-1);
    }
    
    ret = buscarCiudadMasPoblada(ciudades, 0, n);
    if (ret > 0) {
        printf(TxtError4,  __LINE__);
        exit(-1);
    }
    
        
        ret = buscarCiudadMasPoblada(ciudades, MAX_ARRAY, 0);
    if (ret > 0) {
        printf(TxtError4,  __LINE__);
        exit(-1);
    }
    
    printf("\nParámetros de buscarCiudadMasPoblada en línea %d correctos\n\n\n",__LINE__);
    
    ret = buscarCiudadMasPoblada(ciudades, MAX_ARRAY, n);
    if (ret < 0) {
        printf(TxtError4,  __LINE__);
        exit(-1);
    } else
        printf("La ciudad mas poblada es %s con %d habitantes\n", ciudades[ret].nombre, ciudades[ret].poblacion);

    
   printf("\nComprobando parámetros de calcularPoblacionMedia en línea %d\n",__LINE__);

    
    retF = calcularPoblacionMedia(0, MAX_ARRAY, n);
    if (retF > 0) {
        printf(TxtError5, __LINE__);
        exit(-1);
    }
    
    retF = calcularPoblacionMedia(ciudades, 0, n);
    if (retF > 0) {
        printf(TxtError5, __LINE__);
        exit(-1);
    }
    
    retF = calcularPoblacionMedia(ciudades, MAX_ARRAY, 0);
    if (retF > 0) {
        printf(TxtError5, __LINE__);
        exit(-1);
    }
    
    printf("\nParámetros de calcularPoblacionMedia en línea %d correctos\n\n\n",__LINE__);

    
    retF = calcularPoblacionMedia(ciudades, MAX_ARRAY, n);
    if (retF < 0) {
        printf(TxtError5, __LINE__);
        exit(-1);
    } else
        printf("\nLa poblacion media de las ciudades es: %.1f\n", retF);


   printf("\nComprobando parámetros de ordenarCiudadesPorPoblacion en línea %d\n",__LINE__);


    ret = ordenarCiudadesPorPoblacion(0, MAX_ARRAY, n, 1);
    if (ret > 0) {
        printf(TxtError6, __LINE__);
        exit(-1);
    } 

    ret = ordenarCiudadesPorPoblacion(ciudades, 0, n, 1);
    if (ret > 0) {
        printf(TxtError6, __LINE__);
        exit(-1);
    } 

    ret = ordenarCiudadesPorPoblacion(ciudades, MAX_ARRAY, 0, 1);
    if (ret > 0) {
        printf(TxtError6, __LINE__);
        exit(-1);
    } 

    
    printf("\nParámetros de ordenarCiudadesPorPoblacion en línea %d correctos\n\n\n",__LINE__);

    
    ret = ordenarCiudadesPorPoblacion(ciudades, MAX_ARRAY, n, 1);
    if (ret < 0) {
        printf(TxtError6, __LINE__);
        exit(-1);
    } else {
        printf("\nCiudades ordenadas por poblacion descendente:\n");
        ret = mostrarCiudades(ciudades, MAX_ARRAY, n);
        if (ret < 0) {
            printf(TxtError2, ret);
            exit(-1);
        }
    }
    
    
    ret = ordenarCiudadesPorPoblacion(ciudades, MAX_ARRAY, n, -1);
    if (ret < 0) {
        printf(TxtError6, __LINE__);
        exit(-1);
    } else {
        printf("\nCiudades ordenadas por poblacion ascendente:\n");
        ret = mostrarCiudades(ciudades, MAX_ARRAY, n);
        if (ret < 0) {
            printf(TxtError2, __LINE__);
            exit(-1);
        }
    }
    
    

    return 0;
}
