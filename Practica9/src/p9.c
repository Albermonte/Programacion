/* Nombre Fichero: src/p9.c */

#include "p9.h"

short int crearBBDDbinario(char *nombreFich)
{
  FILE *fd = NULL;
  short int ret = -1;
  Ficha_t peli;

  fd = fopen(nombreFich,"wb");    
	      
  if (fd != NULL)
    {
      
      peli.year = 2016;
      strcpy(peli.titulo,"La la land");
      peli.genero = MUSICAL;
      peli.notaIMDB = 8.7;
      
      fwrite(&peli, sizeof(Ficha_t), 1, fd);

      peli.year = 1976;
      strcpy(peli.titulo,"Rocky");
      peli.genero = DRAMA;
      peli.notaIMDB = 8.1;
      
      fwrite(&peli, sizeof(Ficha_t), 1, fd);

      peli.year = 1975;
      strcpy(peli.titulo,"The rocky horror picture show");
      peli.genero = MUSICAL;
      peli.notaIMDB = 7.4;
 
      fwrite(&peli, sizeof(Ficha_t), 1, fd);

      peli.year = 1977;
      strcpy(peli.titulo,"Saturday night fever");
      peli.genero = DRAMA;
      peli.notaIMDB = 6.8;
 
      fwrite(&peli, sizeof(Ficha_t), 1, fd);

      peli.year = 1960;
      strcpy(peli.titulo,"The apartment");
      peli.genero = COMEDIA;
      peli.notaIMDB = 8.3;
 
      fwrite(&peli, sizeof(Ficha_t), 1, fd);

      peli.year = 1959;
      strcpy(peli.titulo,"Some like it hot");
      peli.genero = COMEDIA;
      peli.notaIMDB = 8.3;
 
      fwrite(&peli, sizeof(Ficha_t), 1, fd);

      peli.year = 1995;
      strcpy(peli.titulo,"Se7en");
      peli.genero = THRILLER;
      peli.notaIMDB = 8.6;
 
      fwrite(&peli, sizeof(Ficha_t), 1, fd);
 
      peli.year = 1997;
      strcpy(peli.titulo,"Seven years in Tibet");
      peli.genero = DRAMA;
      peli.notaIMDB = 7.0;
 
      fwrite(&peli, sizeof(Ficha_t), 1, fd);

      peli.year = 2002;
      strcpy(peli.titulo,"The ring");
      peli.genero = TERROR;
      peli.notaIMDB = 7.1;
 
      fwrite(&peli, sizeof(Ficha_t), 1, fd);

      peli.year = 2004;
      strcpy(peli.titulo,"Saw");
      peli.genero = TERROR;
      peli.notaIMDB = 7.7;
 
      fwrite(&peli, sizeof(Ficha_t), 1, fd);


      fclose(fd);
      ret = 1;
    }

     return ret;
}

short int cargarBBDDdesdeFichero(BaseDatos_t *bbdd, char *nombreFich)
{
  int ret = -1;
  FILE *fd = NULL;
  int i=0;
  
  if (bbdd!=NULL && nombreFich!=NULL)
    {     
      if( access( nombreFich, F_OK ) != -1 ) 
	{
	  // file exists
	  if( access( nombreFich, R_OK ) != -1 ) 
	    {
	      // file is readable
	      fd = fopen(nombreFich,"rb");    
	      
	      if (fd != NULL)
		{
		  while(!feof(fd) && i < TAM_BBDD)
		    {
		      fread(&bbdd->listaPeliculas[i],sizeof(Ficha_t),1,fd);
		      i++;
		    }

		  if (i==1)
		    {
		      // file error in fread
		      printf("\nError leyendo el fichero !!\n");
		      ret = -1;
		    }
		  else
		    {
		      ret = 1;
		      printf("\nLeídos %d fichas de %s\n", i-1, nombreFich);
		      bbdd->num_peliculas = i-1;
		      
		      while(i < TAM_BBDD)
			{
			  bbdd->listaPeliculas[i].year = -1;
			  bbdd->listaPeliculas[i].notaIMDB = -1;
			  i++;
			}

		      fclose(fd);
		    }
		}
	      else
		{
		  // file is not readable
		  printf("\nError leyendo el fichero!!\n");
		  ret = -1;
		}

	    }
	  else
	    {
	      // file is not readable
	      printf("\nError no tenemos permisos de lectura!!\n");
	      ret = -1;
	    }


	} 
      else 
	{
	  // file doesn't exist
	  printf("\nError el fichero no existe!!\n");
	  ret = -1;
	}
    }
  else
    printf("\nError en los parámetros de entrada\n");


  printf("\n");

  return ret;

}



short int compararBBDD(BaseDatos_t *bbdd, unsigned short op)
{
  short int ret = 0;
  int  i=0;
  
  if(bbdd->num_peliculas != 10)
    return -1;
  
  switch (op)
  {
    case 0:
      ret = 0;
      for (i=0;i<bbdd->num_peliculas-1;i++)
      {
	if (strcmp(bbdd->listaPeliculas[i].titulo,bbdd->listaPeliculas[i+1].titulo)>0)
	  ret = -1;
      }
      
      break;
    case 1:
      ret = 0;
      for (i=0;i<bbdd->num_peliculas-1;i++)
      {
	if (bbdd->listaPeliculas[i].year > bbdd->listaPeliculas[i+1].year)
	  ret = -1;
      }
      break;
    case 2:
           ret = 0;
      for (i=0;i<bbdd->num_peliculas-1;i++)
      {
	if (bbdd->listaPeliculas[i].notaIMDB > bbdd->listaPeliculas[i+1].notaIMDB)
	  ret = -1;
      }
      break;
    default:
      ret = 0;
      break;
  }
  return ret;
}



int mostrarPelicula(const Ficha_t *peli)
{
  int ret=-1;
  if(peli!=NULL)
  {
  	  printf ("Título : \t\t%s\n", peli->titulo);

		  printf ("Año : \t\t\t%d\n", peli->year);

		  switch (peli->genero)
		    {
		    case DRAMA:
		      printf ("Género : \t\tDrama\n");

		      break;

		    case COMEDIA:
		      printf ("Género : \t\tComedia\n");

		      break;

		    case THRILLER:
		      printf ("Género : \t\tThriller\n");
		      break;

		    case MUSICAL:
		      printf ("Género : \t\tMusical\n");
		      break;

		    case TERROR:
		      printf ("Género : \t\tTerror\n");
		      break;

		    default:
		      break;
		    }

		  printf ("Nota IMDB : \t\t%f\n\n", peli->notaIMDB);
		  
		  ret=1;
  }
  return ret;
}





int mostrarBBDDenPantallaDesdeFichero(const char *nombreFich)
{
  int ret = -1;
  FILE *fd = NULL;
  int n=0;
  Ficha_t temp;
  
  if (nombreFich!=NULL)
    {     
      if( access( nombreFich, F_OK ) != -1 ) 
	{
	  // file exists
	  if( access( nombreFich, R_OK ) != -1 ) 
	    {
	      // file is readable
	      fd = fopen(nombreFich,"rb");    
	      
	      if (fd != NULL)
		{
		  while(!feof(fd))
		    {
		      n = fread(&temp,sizeof(Ficha_t),1,fd);
		      
		      if (n>0)
			mostrarPelicula(&temp);
		    }
		  fclose(fd);
		  ret = 1;
		}
	      else
		{
		  // file is not readable
		  printf("\nError leyendo el fichero!!\n");
		  ret = -1;
		}

	    }
	  else
	    {
	      // file is not readable
	      printf("\nError no tenemos permisos de lectura!!\n");
	      ret = -1;
	    }


	} 
      else 
	{
	  // file doesn't exist
	  printf("\nError el fichero no existe!!\n");
	  ret = -1;
	}
    }
  else
    printf("\nError en los parámetros de entrada\n");


  printf("\n");

  return ret;

}


short int ordenarPorTitulo(const char *nombreFich)
{
	int i,j,tam;
	if (nombreFich==NULL)
    {
    	return -1;
    }
    else
    {     
      if( access( nombreFich, F_OK ) != -1 ) 
	{
	  if( access( nombreFich, W_OK ) != -1 ) 
	    {
	      FILE * fd;
	      fd = fopen(nombreFich,"r+b");    
	      Ficha_t aux1;
	      Ficha_t aux2;
	      
	      	if (fd != NULL)
		{
		rewind(fd);
		fseek(fd, 0, SEEK_END);
		tam=ftell(fd)/sizeof(Ficha_t); //Medir tamaño
		rewind(fd);
		  for(i=0;i<tam;i++); 
		    {
		    for(j=0;j<tam-i;j++)
		    {
		      fseek(fd,sizeof(Ficha_t)*j,SEEK_SET);
		      fread(&aux1,sizeof(Ficha_t),1,fd);
		      fseek(fd,sizeof(Ficha_t)*(j+1),SEEK_SET);
		      fread(&aux2,sizeof(Ficha_t),1,fd);
		      
		      if(strcmp(aux2.titulo,aux1.titulo)<0)
		      { 
		        //fseek(fd,(sizeof(Ficha_t)*-2),SEEK_CUR);// fseek para volver a la posicion deseada y reescribir
		        if(fseek(fd,sizeof(Ficha_t)*j,SEEK_SET)){
		        printf("ERROR");
		        }
		      	fwrite(&aux2, sizeof(Ficha_t), 1, fd);
		      	fseek(fd,sizeof(Ficha_t)*(j+1),SEEK_SET);
		      	fwrite(&aux1, sizeof(Ficha_t), 1, fd);
		      }
		     }
		    }
		    rewind(fd);
		  }
	printf("AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA\n");
		    mostrarBBDDenPantallaDesdeFichero("bbddPeliculas.dat");
	}
	}
	}
	return 0;
}



short int ordenarPorYear(const char *nombreFich)
{
  

}



short int ordenarPorNota(const char *nombreFich)
{
 

}






