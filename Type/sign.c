#include <stdio.h>

int main()
{
	char c = -5;
	short s = 6;
	int i = -7;

	printf("%d\n",((c & 0x80) != 0));
	printf("%d\n",((s & 0x8000) != 0));
	printf("%d\n",((i & 0x80000000) != 0));
	printf("%x\n",i);
	return 0;
}
