#include <stdio.h>

const int g_cc = 2;

int main()
{
	const int cc = 1;
	int *p = (int *)&cc;
	printf("cc = %d\n",cc);
	*p = 3;
	printf("cc = %d\n",cc);
	p = (int *)&g_cc;
	printf("g_cc = %d\n",g_cc);
	*p = 4;
	printf("g_cc = %d\n",g_cc);
	return 0;
}
