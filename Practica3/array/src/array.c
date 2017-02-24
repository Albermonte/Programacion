#include <stdlib.h>
#include "../include/array.h"

int copiarArray(double *p, int num_elem, const double * datos)
{
	if(*p)
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
	for(i=0;i<num_elem;i++)
	{
		printf("Elemento %d:\t%f",i,p[i]);
	}

}
