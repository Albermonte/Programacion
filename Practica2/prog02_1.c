#include <stdio.h>
#include "./prog/lab.h"

int main()
{
	int var1;
	int var2;
	int var3;
	float var4;

	printf("%lx\n", (long)&var1);
	printf("%lx\n", (long)&var2);
	printf("%lx\n", (long)&var3);
	printf("%lx\n", (long)&var4);

	return 0;
}
