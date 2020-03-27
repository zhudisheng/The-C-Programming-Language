#include <stdio.h>

int main()
{
	int a[10] = {1,2,3,4};
	int *array = a;
		
	printf("&a=%p\n",&a);
	printf("a=%p\n",a);
	printf("*a=%d\n",*a);

	printf("&array=%p\n",&array);
	printf("array=%p\n",array);
	printf("*array=%d\n",*array);
	
	return 0;
}
