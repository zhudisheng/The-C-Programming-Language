#include <stdio.h>

int f1()
{
	int r = 0;
	r++;
	return r;
}
int f2()
{
	static int r = 0;
	r++;
	//k++;
	return r;
}
int main()
{
	auto int i = 0;
	static int k = 0;
	//auto int k = 0;
	register int j = 0;
	//printf("r = %d",r);

	printf("%p\n",&i);
	printf("%p\n",&k);
	//printf("%p\n",&j);error
	
	for(int i=0;i<5;i++)
	{
		printf("%d\n",f1());
	}
	for(int i=0;i<5;i++)
	{
		printf("%d\n",f2());
	}
	return 0;
}
