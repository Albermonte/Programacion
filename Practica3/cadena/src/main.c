 /* Nombre Fichero: src/main.c */
#include <stdlib.h>
#include <stdio.h>
#include "palindromo.h"


int main() { 
    char cadena_pal[] = "Dabale arroz a la zorra el abad";
    char cadena_nopal[] = "Esto no es palídromo";
    char cadena_larga[] = "Adivina ya te opina, ya ni miles origina, ya ni cetro me domina, ya ni monarcas, a repaso ni mulato carreta, acaso nicotina, ya ni cita vecino, anima cocina, pedazo gallina, cedazo terso nos retoza de canilla goza, de panico camina, onice vaticina, ya ni tocino saca, a terracota luminosa pera, sacra nomina y animo de mortecina, ya ni giros elimina, ya ni poeta, ya ni vida";
    int esPalindromo = 0;

    esPalindromo = comprobarPalindromo(cadena_pal);

    if (esPalindromo ==  1)
      printf("La cadena \"%s\" SI es palindromo\n", cadena_pal);
    else
        printf("Práctica incorrecta.\n");

    esPalindromo = comprobarPalindromo(cadena_nopal);

    if (esPalindromo ==  0)
      printf("La cadena \"%s\" NO es palindromo\n", cadena_nopal);
    else
        printf("Práctica incorrecta.\n");
    
    
    esPalindromo = comprobarPalindromo(cadena_larga);

    if (esPalindromo ==  1)
      printf("La cadena \"%s\" SI es palindromo\n", cadena_larga);
    else
        printf("Práctica incorrecta.\n");   
    

    return 0;
} 
