/* Nombre Fichero: src/main.c */

#include "../include/lista.h"

int validarLista(Coche_t **, int );

int main() {
	int a;
    int test = 0, i, j;
    const int NUM_MAT = 5;
    Coche_t *lista = NULL;
    char mat[][TAM_MATRICULA] = {
        "1254GBT",
        "6512HDT",
        "0145FTD",
        "3008CSR",
        "2543BHY"
    };
    int lista_ok = -1;

    //------------- Testeando prueba de errores ---------------------------
    test = aniadirPrincipio(0, mat[0]);
    if(test != -1)
    {
	printf("Error en %s en la línea %d,  práctica no apta!!!!\n",  __FILE__, __LINE__);
    }
    else
    {
	printf("Test 1 OK\n");     
    }
    
    test = aniadirPrincipio(&lista, 0);
    if(test != -1)
    {
	printf("Error en %s en la línea %d,  práctica no apta!!!!\n",  __FILE__, __LINE__);
    } 
    else
    {
	printf("Test 2 OK\n");     
    }   
    
    test = modificar(0, mat[1], mat[3]);
    if(test != -1)
    {
	printf("Error en %s en la línea %d,  práctica no apta!!!!\n",  __FILE__, __LINE__);
    }
    else
    {
	printf("Test 3 OK\n");     
    }     
    
    test = modificar(&lista, 0, mat[3]);
    if(test != -1)
    {
	printf("Error en %s en la línea %d,  práctica no apta!!!!\n",  __FILE__, __LINE__);
    }
    else
    {
	printf("Test 4 OK\n");     
    }     
    
    test = modificar(&lista, mat[1], 0);
    if(test != -1)
    {
	printf("Error en %s en la línea %d,  práctica no apta!!!!\n",  __FILE__, __LINE__);
    }
    else
    {
	printf("Test 5 OK\n");     
    }     
    
    test = borrarAlPrincipio(0);
    if(test != -1)
    {
	printf("Error en %s en la línea %d,  práctica no apta!!!!\n",  __FILE__, __LINE__);
    }
    else
    {
	printf("Test 6 OK\n");     
    }     
    
    test = borrarNodo(0, mat[2]);
    if(test != -1)
    {
	printf("Error en %s en la línea %d,  práctica no apta!!!!\n",  __FILE__, __LINE__);
    }
    else
    {
	printf("Test 7 OK\n");     
    }     
     
    test = borrarNodo(&lista, 0);
    if(test != -1)
    {
	printf("Error en %s en la línea %d,  práctica no apta!!!!\n",  __FILE__, __LINE__);
    }
    else
    {
	printf("Test 8 OK\n");     
    }     
      
    //------------- Testeando listas ---------------------------
    for (i = 0; i < 3; i++) {
        printf("-----------------------------\n");        

        test = modificar(&lista, mat[1], mat[3]);
        printf("Modificar(%s,%s):%d\n", mat[1], mat[3], test);
        listar(lista);
	
	if(i==0 && test!=-1)
	{
	  printf("Error en %s en la línea %d,  práctica no apta!!!!\n",  __FILE__, __LINE__);
	  exit(-1);
	}
	else if(i==1 && test!=-1)
	{
	  printf("Error en %s en la línea %d,  práctica no apta!!!!\n",  __FILE__, __LINE__);
	  exit(-1);
	}
	
        test = borrarAlPrincipio(&lista);
        printf("BorrarAlPrincipio:%d\n", test);
        listar(lista);
	
	if(i==0 && test!=-1)
	{
	  printf("Error en %s en la línea %d,  práctica no apta!!!!\n",  __FILE__, __LINE__);
	  exit(-1);
	}
	
        test = borrarNodo(&lista, mat[2]);
        printf("Borrar(%s):%d\n", mat[2], test);
        listar(lista);
	
	if(i==0 && test!=-1)
	{
	  printf("Error en %s en la línea %d,  práctica no apta!!!!\n",  __FILE__, __LINE__);
	  exit(-1);
	}
	else if(i==1 && test!=-1)
	{
	  printf("Error en %s en la línea %d,  práctica no apta!!!!\n",  __FILE__, __LINE__);
	  exit(-1);
	}
	

        test = aniadirPrincipio(&lista, mat[i]);
        printf("Aniadir(%s):%d\n", mat[i], test);

        if (i == 1) {
            for (j = 0; j < NUM_MAT; j++) {
                test = aniadirPrincipio(&lista, mat[j]);
                printf("Aniadir(%s):%d\n", mat[j], test);
            }
        }
	printf("Lista:\n");
        listar(lista);
	lista_ok = validarLista(&lista, i);
        if (lista_ok == 1)
	{
	  printf("Lista OK\n");
	}
	else
	{
	  printf("Error en %s en la línea %d,  práctica no apta!!!!\n",  __FILE__, __LINE__);
	  exit(-1);
	}

    }    

    test = ordenarLista(&lista, ASC);
    printf("ordenarLista Asc:%d\n", test);    
    listar(lista);
    lista_ok = validarLista(&lista, 3);
        if (lista_ok == 1)
	{
	  printf("Lista OK\n");
	}
	else
	{
	  printf("Error en %s en la línea %d,  práctica no apta!!!!\n",  __FILE__, __LINE__);
	  exit(-1);
	}
    
    test = aniadirOrdenado(&lista, "0057KWQ", ASC);
    printf("aniadirOrdenado(0057KWQ):%d\n", test);    
    listar(lista);
    lista_ok = validarLista(&lista, 4);
        if (lista_ok == 1)
	{
	  printf("Lista OK\n");
	}
	else
	{
	  printf("Error en %s en la línea %d,  práctica no apta!!!!\n",  __FILE__, __LINE__);
	  exit(-1);
	}
    
    test = ordenarLista(&lista, DES);
    printf("ordenarLista Des:%d\n", test);    
    listar(lista);
    lista_ok = validarLista(&lista, 5);
        if (lista_ok == 1)
	{
	  printf("Lista OK\n");
	}
	else
	{
	  printf("Error en %s en la línea %d,  práctica no apta!!!!\n",  __FILE__, __LINE__);
	  exit(-1);
	}
      
    test = aniadirOrdenado(&lista, "2658HYT", DES);
    printf("aniadirOrdenado(2658HYT):%d\n", test);    
    listar(lista);
    lista_ok = validarLista(&lista, 6);
        if (lista_ok == 1)
	{
	  printf("Lista OK\n");
	}
	else
	{
	  printf("Error en %s en la línea %d,  práctica no apta!!!!\n",  __FILE__, __LINE__);
	  exit(-1);
	}    
    
    test = aniadirOrdenado(&lista, "0000AAA", DES);
    printf("aniadirOrdenado(0000AAA):%d\n", test);    
    listar(lista);
    lista_ok = validarLista(&lista, 7);
        if (lista_ok == 1)
	{
	  printf("Lista OK\n");
	}
	else
	{
	  printf("Error en %s en la línea %d,  práctica no apta!!!!\n",  __FILE__, __LINE__);
	  exit(-1);
	}  
    
    liberarMemoria(&lista);
    listar(lista);
    
    printf("\n\n\t\t Práctica Apta!!!\n\n");

    return 0;
}

/*Función para validar el contenido de la lista en cada prueba.
  YA ESTA IMPLEMENTADA */
int validarLista(Coche_t **pcab, int caso)
{
    Coche_t *pAux = NULL;
    int ret = -1;
    int comparaciones = 0;
    
    pAux = *pcab;
    switch ( caso ) 
    {
        case 0:
	  if (strcmp(pAux->matricula,"1254GBT")==0 && pAux->sig==NULL) ret = 1;
	  break;
	case 1:
          comparaciones = 0;
	  pAux = *pcab;
	  if (strcmp(pAux->matricula,"2543BHY")==0) comparaciones ++;
	  pAux = pAux->sig;
	  if (strcmp(pAux->matricula,"3008CSR")==0) comparaciones ++; 
	  pAux = pAux->sig;
	  if (strcmp(pAux->matricula,"0145FTD")==0) comparaciones ++; 
	  pAux = pAux->sig;
	  if (strcmp(pAux->matricula,"6512HDT")==0) comparaciones ++; 
 	  pAux = pAux->sig;
	  if (strcmp(pAux->matricula,"1254GBT")==0) comparaciones ++; 
	  pAux = pAux->sig;
	  if (strcmp(pAux->matricula,"6512HDT")==0) comparaciones ++;
	  if (pAux->sig==NULL) comparaciones ++;
	  if (comparaciones == 7) ret = 1;
	  break;
	case 2:
          comparaciones = 0;
	  pAux = *pcab;
	  if (strcmp(pAux->matricula,"0145FTD")==0) comparaciones ++;
	  pAux = pAux->sig;
	  if (strcmp(pAux->matricula,"3008CSR")==0) comparaciones ++; 
	  pAux = pAux->sig;
	  if (strcmp(pAux->matricula,"3008CSR")==0) comparaciones ++; 
	  pAux = pAux->sig;
	  if (strcmp(pAux->matricula,"1254GBT")==0) comparaciones ++; 
 	  pAux = pAux->sig;
	  if (strcmp(pAux->matricula,"6512HDT")==0) comparaciones ++;
 	  if (pAux->sig==NULL) comparaciones ++; 
	  if (comparaciones == 6) ret = 1;
	  break;

	case 3:
          comparaciones = 0;
	  pAux = *pcab;
	  if (strcmp(pAux->matricula,"0145FTD")==0) comparaciones ++;
	  pAux = pAux->sig;
	  if (strcmp(pAux->matricula,"1254GBT")==0) comparaciones ++; 
	  pAux = pAux->sig;
	  if (strcmp(pAux->matricula,"3008CSR")==0) comparaciones ++; 
	  pAux = pAux->sig;
	  if (strcmp(pAux->matricula,"3008CSR")==0) comparaciones ++; 
 	  pAux = pAux->sig;
	  if (strcmp(pAux->matricula,"6512HDT")==0) comparaciones ++;
 	  if (pAux->sig==NULL) comparaciones ++; 
	  if (comparaciones == 6) ret = 1;
	  break;

  	case 4:
          comparaciones = 0;
	  pAux = *pcab;
	  if (strcmp(pAux->matricula,"0057KWQ")==0) comparaciones ++;
	  pAux = pAux->sig;
	  if (strcmp(pAux->matricula,"0145FTD")==0) comparaciones ++;
	  pAux = pAux->sig;
	  if (strcmp(pAux->matricula,"1254GBT")==0) comparaciones ++; 
	  pAux = pAux->sig;
	  if (strcmp(pAux->matricula,"3008CSR")==0) comparaciones ++; 
	  pAux = pAux->sig;
	  if (strcmp(pAux->matricula,"3008CSR")==0) comparaciones ++; 
 	  pAux = pAux->sig;
	  if (strcmp(pAux->matricula,"6512HDT")==0) comparaciones ++;
 	  if (pAux->sig==NULL) comparaciones ++; 
	  if (comparaciones == 7) ret = 1;
	  break;

 	case 5:
          comparaciones = 0;
	  pAux = *pcab;
	  if (strcmp(pAux->matricula,"6512HDT")==0) comparaciones ++;
	  pAux = pAux->sig;
	  if (strcmp(pAux->matricula,"3008CSR")==0) comparaciones ++; 
	  pAux = pAux->sig;
	  if (strcmp(pAux->matricula,"3008CSR")==0) comparaciones ++; 
	  pAux = pAux->sig;
	  if (strcmp(pAux->matricula,"1254GBT")==0) comparaciones ++; 
	  pAux = pAux->sig;
	  if (strcmp(pAux->matricula,"0145FTD")==0) comparaciones ++;
	  pAux = pAux->sig;  
 	  if (strcmp(pAux->matricula,"0057KWQ")==0) comparaciones ++;
 	  if (pAux->sig==NULL) comparaciones ++; 	  
	  
	  if (comparaciones == 7) ret = 1;
	  break;	  
	  
	case 6:
          comparaciones = 0;
	  pAux = *pcab;
	  if (strcmp(pAux->matricula,"6512HDT")==0) comparaciones ++;
	  pAux = pAux->sig;
	  if (strcmp(pAux->matricula,"3008CSR")==0) comparaciones ++; 
	  pAux = pAux->sig;
	  if (strcmp(pAux->matricula,"3008CSR")==0) comparaciones ++; 
	  pAux = pAux->sig;
	  if (strcmp(pAux->matricula,"2658HYT")==0) comparaciones ++; 
	  pAux = pAux->sig;
	  if (strcmp(pAux->matricula,"1254GBT")==0) comparaciones ++; 
	  pAux = pAux->sig;
	  if (strcmp(pAux->matricula,"0145FTD")==0) comparaciones ++;
	  pAux = pAux->sig;  
 	  if (strcmp(pAux->matricula,"0057KWQ")==0) comparaciones ++;
 	  if (pAux->sig==NULL) comparaciones ++; 	  
	  
	  if (comparaciones == 8) ret = 1;
	  break;	  	  

	case 7:
          comparaciones = 0;
	  pAux = *pcab;
	  if (strcmp(pAux->matricula,"6512HDT")==0) comparaciones ++;
	  pAux = pAux->sig;
	  if (strcmp(pAux->matricula,"3008CSR")==0) comparaciones ++; 
	  pAux = pAux->sig;
	  if (strcmp(pAux->matricula,"3008CSR")==0) comparaciones ++; 
	  pAux = pAux->sig;
	  if (strcmp(pAux->matricula,"2658HYT")==0) comparaciones ++; 
	  pAux = pAux->sig;
	  if (strcmp(pAux->matricula,"1254GBT")==0) comparaciones ++; 
	  pAux = pAux->sig;
	  if (strcmp(pAux->matricula,"0145FTD")==0) comparaciones ++;
	  pAux = pAux->sig;  
	  if (strcmp(pAux->matricula,"0057KWQ")==0) comparaciones ++;
	  pAux = pAux->sig;  	  
 	  if (strcmp(pAux->matricula,"0000AAA")==0) comparaciones ++;
 	  if (pAux->sig==NULL) comparaciones ++; 	  
	  
	  if (comparaciones == 9) ret = 1;
	  break;	  
	default:
	  break;
	  
	  
    }
    return ret;
}


