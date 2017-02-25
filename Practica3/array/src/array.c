#include <stdlib.h>
#include "../include/array.h"

int copiarArray(double *p, int num_elem, const double * datos)
{
	int i;
	if(!p || num_elem>0 || datos!=0)
	{
		p=malloc(num_elem*sizeof(double));
		double * strcpy(double *p,double *datos);
	
		return 0;
		
	}
	else
	{
		return -1;
	}
}

int  imprimirArray(const double * p, int num_elem)
{
	int i;
	if(!p || num_elem>0)
	{
	for(i=0;i<num_elem;i++)
	{
		printf("Elemento %d:\t%f",i,p[i]);
	}
	}
}

