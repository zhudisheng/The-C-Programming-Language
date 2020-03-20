#include <stdio.h>
int main()
{
	char c = 'a';
	int i = c;
	unsigned int j = 0x11223344;
	short s = j;
	
	printf("c = %c\n",c);
	printf("i = %d\n",i);
	printf("j = %x\n",j);
	printf("s = %x\n",s);
	printf("sizeof(c+s) = %d\n",sizeof(c+s));

	return 0;
}
