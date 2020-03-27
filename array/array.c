#include <stdio.h>

int main()
{
	int a[10] = {0};
	printf("%p\n",a);
	printf("%p\n",&a);
	printf("%p\n",&a[0]);
	return 0;
}
