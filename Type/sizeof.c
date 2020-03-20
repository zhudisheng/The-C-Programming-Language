#include <stdio.h>

int main()
{
	char c = 0;
	short s = 0;
	int i = 0;

	printf("%lu,%lu\n",sizeof(char),sizeof(c));
	printf("%lu,%lu\n",sizeof(short),sizeof(s));
	printf("%lu,%lu\n",sizeof(int),sizeof(i));
	return 0;
	
}
