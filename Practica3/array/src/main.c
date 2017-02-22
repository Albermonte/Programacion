 /* Nombre Fichero: src/main.c */

#include <stdio.h>
#include "../include/array.h"
#include "../include/estadisticas.h"
#include "float.h"
// DBL_MAX está definido en float.h y es una constante con el máximo valor de una variable tipo double

#define N 10



int main()
{ 
  const int num_elem = N;
  const double datos[N]={ 5.6, 7.5, 9.1, 15.3, 17.9, 18.2, 22.9, 28.4, 31.8, 32.6 };
  const double datos2[N]={ DBL_MAX, DBL_MAX, DBL_MAX, DBL_MAX, DBL_MAX, DBL_MAX,DBL_MAX ,DBL_MAX ,DBL_MAX ,DBL_MAX};
  const double datos3[N]={ -DBL_MAX, -DBL_MAX, -DBL_MAX, -DBL_MAX, -DBL_MAX, -DBL_MAX, -DBL_MAX , -DBL_MAX , -DBL_MAX , -DBL_MAX};
  double temperaturas[N];
  double mayor = 0.0;
  double menor = 0.0;
  double media = 0.0;
  double var = 0.0;
  double desviacionTipica = 0.0;
  int i = 0;
  int ret = 0;

  // Las MACROS predefinidas __FILE__  y  __LINE__ son sustituidas por el compilador al compilar
  //  por el nombre del fichero y el número de línea respectivamente
  if (copiarArray(NULL, num_elem, datos)!=0)
  {
      printf("\n\nPráctica incorrecta. Fichero %s línea %d\n",  __FILE__, __LINE__);
  } 
    
  if (copiarArray(temperaturas, -5, datos)!=0)
  {
      printf("\n\nPráctica incorrecta. Fichero %s línea %d\n",  __FILE__, __LINE__);
  } 
    
  if(copiarArray(temperaturas, num_elem, NULL)!=-0)
  {
     printf("\n\nPráctica incorrecta. Fichero %s línea %d\n",  __FILE__, __LINE__);
  }

  ret = copiarArray(temperaturas, num_elem, datos); 

  if (ret == 0)
  {
      printf("\n\nPráctica incorrecta. Fichero %s línea %d\n",  __FILE__, __LINE__);
  }
  
  for (i = 0; i < N; i++)
  {

  	if (datos[i]!=temperaturas[i])
	{
	  printf("\n\nPráctica incorrecta. Fichero %s línea %d\n",  __FILE__, __LINE__);
  	}

  }


  
  if (imprimirArray(NULL, num_elem)!=0)
  {
      printf("\n\nPráctica incorrecta. Fichero %s línea %d\n",  __FILE__, __LINE__);
  } 
    
  if (imprimirArray(temperaturas, 0) !=0)
  {
      printf("\n\nPráctica incorrecta. Fichero %s línea %d\n",  __FILE__, __LINE__);
  } 
    
  
  ret = imprimirArray(temperaturas, num_elem);

  if (ret == 0)
  {
      printf("\n\nPráctica incorrecta. Fichero %s línea %d\n",  __FILE__, __LINE__);
  }


  
  if(calcularMayor(NULL, num_elem, &mayor) != 0)
  {
      printf("\n\nPráctica incorrecta. Fichero %s línea %d\n",  __FILE__, __LINE__);
  }
  
    
    
   if(calcularMayor(temperaturas, 0, &mayor) != 0)
   {
      printf("\n\nPráctica incorrecta. Fichero %s línea %d\n",  __FILE__, __LINE__);
   }
 
    
  
  ret = calcularMayor(temperaturas, num_elem, &mayor);

  printf("\n\tMayor = %lf\n", mayor);

  if (ret == 0 ||  mayor != 32.6 )
  {
      printf("\n\nPráctica incorrecta. Fichero %s línea %d\n",  __FILE__, __LINE__);
  }

  
  if(calcularMenor(NULL, num_elem, &menor) != 0)
  {
      printf("\n\nPráctica incorrecta. Fichero %s línea %d\n",  __FILE__, __LINE__);
  }
  
    
    
   if(calcularMenor(temperaturas, 0, &menor) != 0)
   {
      printf("\n\nPráctica incorrecta. Fichero %s línea %d\n",  __FILE__, __LINE__);
   }
 

  ret = calcularMenor(temperaturas, num_elem, &menor);

  printf("\n\tMenor = %lf\n", menor);

  if (ret == 0 ||  menor != 5.6 )
  {
      printf("\n\nPráctica incorrecta. Fichero %s línea %d\n",  __FILE__, __LINE__);
  }
  
  
  if(calcularMedia(NULL, num_elem, &media) != 0)
  {
      printf("\n\nPráctica incorrecta. Fichero %s línea %d\n",  __FILE__, __LINE__);
  }
   
    
  if(calcularMedia(temperaturas, -1, &media) != 0)
  {
     printf("\n\nPráctica incorrecta. Fichero %s línea %d\n",  __FILE__, __LINE__);
  }
    
  ret = calcularMedia(temperaturas, num_elem, &media);

  printf("\n\tMedia = %lf\n", media);

  if (ret == 0 || media != 18.93)
  {
      printf("\n\nPráctica incorrecta. Fichero %s línea %d\n",  __FILE__, __LINE__);
  }

  
  
  if(calcularVar(NULL, num_elem, media, &var) != 0)
 {
      printf("\n\nPráctica incorrecta. Fichero %s línea %d\n",  __FILE__, __LINE__);
  }

  
  
  if(calcularVar(temperaturas, 0, media, &var) != 0)
    {
      printf("\n\nPráctica incorrecta. Fichero %s línea %d\n",  __FILE__, __LINE__);
  }     

  
  ret = calcularVar(temperaturas, num_elem, media, &var);

  printf("\n\tVar = %lf\n", var);

  if (ret == 0 ||  fabs(var -  87.7681) > 0.01)
  {
      printf("\n\nPráctica incorrecta. Fichero %s línea %d\n",  __FILE__, __LINE__);
  }


 if(calcularDesviacionTipica(-10, num_elem, &desviacionTipica) != 0)
   {
      printf("\n\nPráctica incorrecta. Fichero %s línea %d\n",  __FILE__, __LINE__);
  }
   
   if(calcularDesviacionTipica(var, 0, &desviacionTipica) != 0) 
 {
      printf("\n\nPráctica incorrecta. Fichero %s línea %d\n",  __FILE__, __LINE__);
  }
  
  ret = calcularDesviacionTipica(var, num_elem, &desviacionTipica);

  printf("\n\tDesviación típica = %lf\n", desviacionTipica);

  if (ret == 0 || fabs(desviacionTipica - 9.368463)>0.01)
  {
      printf("\n\nPráctica incorrecta. Fichero %s línea %d\n",  __FILE__, __LINE__);
  }

  
  ret = copiarArray(temperaturas, num_elem, datos2); 

  if (ret == 0)
  {
      printf("\n\nPráctica incorrecta. Fichero %s línea %d\n",  __FILE__, __LINE__);
  }
  
  
  ret = calcularMenor(temperaturas, num_elem, &menor);

  printf("\n\tMenor = %lf\n\n", menor);

  if (ret == 0 ||  menor != DBL_MAX)
  {
      printf("\n\nPráctica incorrecta. Fichero %s línea %d\n",  __FILE__, __LINE__);
  }

  
  ret = copiarArray(temperaturas, num_elem, datos3); 

  if (ret == 0)
  {
      printf("\n\nPráctica incorrecta. Fichero %s línea %d\n",  __FILE__, __LINE__);
  }
  
  
  ret = calcularMayor(temperaturas, num_elem, &mayor);

  printf("\n\tMayor = %lf\n\n", mayor);

  if (ret == 0 ||  mayor != -DBL_MAX)
  {
      printf("\n\nPráctica incorrecta. Fichero %s línea %d\n",  __FILE__, __LINE__);
  }

  
  return 0;
}
