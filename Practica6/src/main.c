/* Nombre Fichero: src/main.c */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

#include "../include/argumentos.h"
#include "../include/operaciones.h"


int main(int argc, char** argv)
{
  double op1 = 0;//operando 1
  double  op2 = 0;//operando 2
  char operacion=' ';
  int ret = 0;
  char *TxtError = "Práctica incorrecta. File %s, Line %d \n";
  
  
  printf("\nComprobando primera operacion en línea %d\n",__LINE__);

  
  ret = leerArgs(argc, argv, &op1, &op2, &operacion);

  if (ret == 0)
    {
      ret = realizarOperacion(op1, op2, operacion);

      if (realizarOperacion(op1, 0, '/') != -1) {
	printf (TxtError,  __FILE__, __LINE__);
	return -1;
      }
    }

  argv[1] = "5.0";

  argv[2] = "+";

  argv[3] = "6.0";

  printf("\nComprobando operacion 5.0 + 6.0 en línea %d\n",__LINE__);

  
  ret = leerArgs(4, argv, &op1, &op2, &operacion);

  if (ret != 0 || op1!=5.0 || op2 != 6.0 || operacion!='+') 
    {
      printf (TxtError,  __FILE__, __LINE__);
      return -1;
    }

  argv[1] = "5.0+";
  argv[2] = "6.0";

 printf("\nComprobando operacion 5.0+ 6.0 en línea %d\n",__LINE__);

  
  ret = leerArgs(3, argv, &op1, &op2, &operacion);

  if (ret != 0 || op1!=5.0 || op2 != 6.0 || operacion!='+') 
    {
      printf (TxtError,  __FILE__, __LINE__);
      return -1;
    }

   	

  argv[1] = "5.0";

  argv[2] = "+6.0";
  
  
 printf("\nComprobando operacion 5.0 +6.0 en línea %d\n",__LINE__);


  ret = leerArgs(3, argv, &op1, &op2, &operacion);

  if (ret != 0 || op1!=5.0 || op2 != 6.0 || operacion!='+') 
    {
      printf (TxtError,  __FILE__, __LINE__);
      return -1;
    }
  
   	

  argv[1] = "5.0+6.0";
  
  printf("\nComprobando operacion 5.0+6.0 en línea %d\n",__LINE__);

  
  ret = leerArgs(2, argv, &op1, &op2, &operacion);
  
  if (ret != 0 || op1!=5.0 || op2 != 6.0 || operacion!='+') 
    {
      printf (TxtError,  __FILE__, __LINE__);
      return -1;
    }

  return 0;

}
