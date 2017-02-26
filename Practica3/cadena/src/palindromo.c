#include "../include/palindromo.h"

int quitarEspacios(const char *textoCon, char *textoSin)
{
	int longitud, i, j;
	
	longitud = strlen(textoCon); //Medir longitud de array

	for (i = 0; i < longitud; i++)
	{
		if (textoCon[i] == ' ') //Comprobar si cada elemento del array es un espacio
		{
			for (j = i; j < longitud; j++)
			{
				textoCon[j] = textoCon[j+1]; //Mover todo el array una posición atrás
			}
			longitud--; //Reducir la longitud del array
			i--; //Reducir el contador en uno ya que después de una coma va un espacio y no se comprobaría
		}
		if (textoCon[i] == ',') //Comprobar si cada elemento del array es una coma
		{
			for (j = i; j < longitud; j++)
			{
				textoCon[j] = textoCon[j + 1]; //Mover todo el array una posición atrás
			}
			longitud--; //Reducir la longitud del array
			i--; //Reducir el contador en uno ya que después de una coma va un espacio y no se comprobaría
		}
	}
	strcpy(textoSin,textoCon);
	
}

int comprobarPalindromo(const char *cadena)
{
	char *cadena2; //Array para invertir y comprobar
	longitud = strlen(cadena); 
	cadena2 = malloc(longitud);
	int c=0,a;
	a = longitud-1;
	while (c < longitud)
	{
		cadena2[c] = cadena[a]; //Guardar en el array cadena2, cadena invertido
		c++;
		a--;
	}

	if (strcmp(cadena2,cadena)!=0) 
	{
		return 0;
	}
	else
	{
		return 1; //Si son iguales strcmp==0, entonces return 1
	}

}
