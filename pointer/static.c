#include <stdio.h>

int g_v = 1;

static int g_vs = 2;

void f()
{
	static int g_vl = 3;
	printf("%p\n",&g_vl);
}
int main()
{
	printf("%p\n",&g_v);
	printf("%p\n",&g_vs);
	f();
	return 0;
}
