#include <stdio.h>
#include "./prog/lab.h"

int main()
{
	int var1=1,var2=2;
	int *p=NULL;
	
	printf("%lx\n",(long)&var1);
	printf("%lx\n",(long)&var2);
	p=&var1;
	printf("%lx\n",(long)p);
	p=&var2;
	printf("%lx\n",(long)p);

	return 0;
}

