#include <stdio.h>

typedef int(FUNC)(int);
int test(int i)
{
	return i*i;
}
void f()
{
	printf("Call f()...\n");
}
int main()
{
	FUNC*pt = test;
	//void(*pf)() = &f;
	void(*pf)() = 0x400576;

	printf("pf = %p\n",pf);
	printf("f = %p\n",f);
	printf("&f = %p\n",&f);
	pf();
	(*pf)();
	printf("Function pointer call:%d\n",pt(2));
	return 0;
}
