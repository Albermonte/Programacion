#include "../include/palindromo.h"

int quitarEspacios(const char *textoCon, char *textoSin)
{
	int longitud, i, j;

	longitud = strlen(line);

	for (i = 0; i < longitud; i++)
	{
		if (line[i] == ' ')
		{
			for (j = i; j < longitud; j++)
			{
				line[j] = line[j+1];
			}
			longitud--;
			i--;
		}
		if (line[i] == ',')
		{
			for (j = i; j < longitud; j++)
			{
				line[j] = line[j + 1];
			}
			longitud--;
			i--;
		}
	}
	//Medir longitud de array
	//For i<longitud
	//Comparar cada elemento de array con ' ' y ','
	//Si elemento==' 'o','
	//For j=i;j<longitud;j++
	//array[i]=array[i++]
	//Fuera del for, longitud--
}
