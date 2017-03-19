/* Nombre Fichero: src/argumentos.c */

#include "argumentos.h"

int leerArgs(int argc, char **argv, double *op1, double *op2, char *operacion)
{
	if(0/*strlen(argv[2])!=1*/)
	{
		return -1;
	}
	else
	{
	int i,j,n=0;
	switch(argc)
	{
		case 4: 					//5.0 + 6.0
			*op1=0; //Inicializar a 0 para que no afecte el case anterior ya que el main no lo hace
			*op2=0;
			*op1=atof(argv[1]);
			*op2=atof(argv[3]);
			*operacion=argv[2][0];
			break;
		case 3:
			
			for(i=0;i<(int)strlen(argv[1]);i++)	//5.0+ 6.0
			{
				if(argv[1][i]=='+')
				{
				*op1=0; //Inicializar a 0 para que no afecte el case anterior ya que el main no lo hace
				*op2=0;
					
					*op1=atof(argv[1]);
					*op2=atof(argv[2]);
					strcpy(operacion,"+");
				}
				if(argv[1][i]=='-')
				{
					argv[strlen(argv[1])-1]='\0';
					*op1=atof(argv[1]);
					*op2=atof(argv[2]);
					strcpy(operacion,"-");
				}
				if(argv[1][i]=='*')
				{
					argv[strlen(argv[1])-1]='\0';
					*op1=atof(argv[1]);
					*op2=atof(argv[2]);
					strcpy(operacion,"*");
				}
				if(argv[1][i]=='/')
				{
					argv[strlen(argv[1])-1]='\0';
					*op1=atof(argv[1]);
					*op2=atof(argv[2]);
					strcpy(operacion,"/");
				}
				
			}
			
			
			for(i=0;i<(int)strlen(argv[2]);i++)	//5.0 +6.0
			{
				if(argv[2][i]=='+')
				{
				*op1=0; //Inicializar a 0 para que no afecte el case anterior ya que el main no lo hace
				*op2=0;
					*op1=atof(argv[1]);
					*op2=atof(argv[2]);
					strcpy(operacion,"+");
				}
				if(argv[2][i]=='-')
				{
					*op1=atof(argv[1]);
					*op2=atof(argv[2]);
					strcpy(operacion,"-");
				}
				if(argv[2][i]=='*')
				{
					*op1=atof(argv[1]);
					*op2=atof(argv[2]);
					strcpy(operacion,"*");
				}
				if(argv[2][i]=='/')
				{
					*op1=atof(argv[1]);
					*op2=atof(argv[2]);
					strcpy(operacion,"/");
				}
				
			}	
			break;
		case 2:
			*op1=0; //Inicializar a 0 para que no afecte el case anterior ya que el main no lo hace
			*op2=0;
			for(i=0;i<(int)strlen(argv[1]);i++)
			{
				if(argv[1][i]=='+')
				{
					for(j=i+1;j(int)strlen(argv[1]);j++)
					{
						argv[2][n]=argv[1][i+1];
						n++;
						i++;
					}
					argv[1][i]='\0';
					*op1=atof(argv[1]);
					*op2=atof(argv[2]);
					strcpy(operacion,"+");
					printf("1: %f \n2: %f\n",*op1,*op2);
				}
				if(argv[1][i]=='-')
				{
					strcpy(operacion,"-");
				}
				if(argv[1][i]=='*')
				{
					strcpy(operacion,"*");
				}
				if(argv[1][i]=='/')
				{
					strcpy(operacion,"/");
				}
				
			}
			
			break;
					
		
	}
	return 0;
	}
}
