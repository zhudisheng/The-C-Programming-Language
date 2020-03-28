#include <stdio.h>
#include "mleak.h"
void f()
{
	MALLOC(100);
}
int main()
{
	int *p = (int*)MALLOC(3*sizeof(int));
	f();
	p[0] = 1;
	p[1] = 2;
	p[2] = 3;
	FREE(p);

	PRINT_LEAK_INFO();

	return 0;
}
