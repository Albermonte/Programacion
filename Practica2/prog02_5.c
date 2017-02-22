#include <stdio.h>
#include "./prog/lab.h"

int main()
{
	int array[5];
	int *p=&array[0];
	
	printf("%lx\n",(long)p);
	printf("%lx\n",(long)&array[0]);

	return 0;
}
