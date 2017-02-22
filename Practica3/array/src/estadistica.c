#include "../include/estadisticas.h"


int calcularMayor(const double *p,  int num_elem, double * mayor)
{
	int i;
	double var=0;
	double num=-1;
	
	if(*p=!NULL && num_elem>0 && mayor!=NULL){
	for (i=0;i<num_elem;i++)
	{
		if(p[i]>var)
		{
			var=p[i];
			num=i;
		}
	}
	if(num!=-1)
	{
		*mayor=num;
		return 0;
	}
	else
	{
		return -1;
	}
	}
		return 0;
	else
	{
		return -1;
	}
}

int calcularMenor(const double *p, int num_elem, double * menor)
{
	int i;
	double var=0;
	double num=-1;
	for (i=0;i<num_elem;i++)
	{
		if(p[i]<var)
		{
			var=p[i];
			num=i;
		}
	}
	if(num!=-1)
	{
		*menor=num;
		return 0;
	}
	else
	{
		return -1;
	}
}

int calcularMedia(const double * p, int num_elem, double * media)
{
	int i;
	int var=0;
	*media=-1;
	
	for(i=0;i<num_elem;i++)
	{
		var=var+p[i];
	}

	*media=var/num_elem;
	if (*media!=-1)
	{
		return 0;
	}
	else
	{
		return -1;
	}
}

int calcularVar(const double * p, int num_elem, double media, double * var)
{
	int i;
	double vari=0;

	for(i=0;i<num_elem;i++)
	{
		vari=vari+((pow((p[i]-media),2))/(double)num_elem);
	}
	
	if(vari!=0)
	{
		*var=vari;
		return 0;
	}
	
	else
	
	{
		return -1;
	}
}

int calcularDesviacionTipica(double var, int num_elem, double * desviacionTipica)
{
	*desviacionTipica=sqrt(var);
	
}

/*TEST*/
