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
	int i,j;
	switch(argc)
	{
		case 4: 					//5.0 + 6.0
			*op1=atof(argv[1]);
			*op2=atof(argv[3]);
			printf("Op:%s\n",argv[2]);
			*operacion=argv[2][0];
			break;
		case 3:
			for(i=0;i<(int)strlen(argv[1]);i++)	//5.0+ 6.0
			{
				if(argv[1][i]=='+')
				{
					argv[strlen(argv[1])-1]='\0';
					*op1=atof(argv[1]);
					*op2=atof(argv[2]);
					strcpy(operacion,"+");
					printf("Suma %s",operacion);
				}
				if(argv[1][i]=='-')
				{
					argv[strlen(argv[1])-1]='\0';
					*op1=atof(argv[1]);
					*op2=atof(argv[2]);
					strcpy(operacion,"-");
					printf("Suma %s",operacion);
				}
				if(argv[1][i]=='*')
				{
					argv[strlen(argv[1])-1]='\0';
					*op1=atof(argv[1]);
					*op2=atof(argv[2]);
					strcpy(operacion,"*");
					printf("Suma %s",operacion);
				}
				if(argv[1][i]=='/')
				{
					argv[strlen(argv[1])-1]='\0';
					*op1=atof(argv[1]);
					*op2=atof(argv[2]);
					strcpy(operacion,"/");
					printf("Suma %s",operacion);
				}
			}
			
			for(i=0;i<(int)strlen(argv[2]);i++)	//5.0 +6.0
			{
				if(argv[2][i]=='+')
				{
					for(j=0;j<(int)strlen(argv[2]);j++)
					{
					argv[2][j]=argv[2][j+1];
					argv[strlen(argv[2])-1]='\0';
					}
					*op1=atof(argv[1]);
					*op2=atof(argv[2]);
					printf("op2: %f",*op2);
					strcpy(operacion,"+");
					printf("Suma %s",operacion);
				}
				if(argv[2][i]=='-')
				{
					*op1=atof(argv[1]);
					strcpy(operacion,"-");
					printf("Suma %s",operacion);
				}
				if(argv[2][i]=='*')
				{
					*op1=atof(argv[1]);
					strcpy(operacion,"*");
					printf("Suma %s",operacion);
				}
				if(argv[2][i]=='/')
				{
					*op1=atof(argv[1]);
					strcpy(operacion,"/");
					printf("Suma %s",operacion);
				}
			}	
			break;
		case 2:
			for(i=0;i<(int)strlen(argv[1]);i++)
			{
				if(argv[1][i]=='+')
				{
					strcpy(operacion,"+");
					printf("Suma %s",operacion);
				}
				if(argv[1][i]=='-')
				{
					strcpy(operacion,"-");
					printf("Suma %s",operacion);
				}
				if(argv[1][i]=='*')
				{
					strcpy(operacion,"*");
					printf("Suma %s",operacion);
				}
				if(argv[1][i]=='/')
				{
					strcpy(operacion,"/");
					printf("Suma %s",operacion);
				}
			}
			
			break;
					
		
	}
	return 0;
	}
}
