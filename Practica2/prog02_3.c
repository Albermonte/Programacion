#include <stdio.h>
#include "./prog/lab.h"

int main()
{
	int var1, *p=NULL;
	p=&var1;
	scanf("%d",p);
	printf("%d\n",var1);

	return 0;

}

