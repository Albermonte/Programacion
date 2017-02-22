#include <stdlib.h>
#include "../include/array.h"

int copiarArray(double *p, int num_elem, const double * datos)
{
	/*double *p=NULL;
	int num_elem;

	printf("Num elementos:\t");
	scanf("%d",&num_elem);
	*/
	p=malloc(num_elem*sizeof(double));
	double * strcpy(double *p,double *datos);
	
	if (strcmp(p,datos)==0)
	{
		return 0;
	}
	else
	{
		return -1;
	}
}
