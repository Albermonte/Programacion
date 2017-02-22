#include <stdio.h>


int main()
{
	int array[5]={0};
	int i=0, a;
	
	for(i=0;i<5;i++)
	{
		a=sizeof(array[i]);
		printf("Tamaño de %d: %d\n",i,a);
	}
	
	a=sizeof(array);
	printf("Tamaño de todos: %d\n",a);
	
	int *p1,*p2;
	p1=&array[0];
	p2=&array[4];
	
	printf("Diferencia entre punteros: ");
	int n;
	n=p1-p2;
	printf("%lx\n",(long)n);
	
	printf("Incrementar puntero:\n");
	printf("%lx\n",(long)p1);
	p1++;
	printf("%lx\n",(long)p1);
	printf("Incrementar contenido de puntero:\n");
	printf("%d\n",*p1);
	*p1=(*p1)+1;
	printf("%d\n",*p1);

	return 0;
}
