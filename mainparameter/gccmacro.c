#include <stdio.h>

#ifndef __GNUC__
#define __attribute__(x)
#endif

__attribute__((constructor))
void before_main()
{
	printf("%s\n",__FUNCTION__);
}
__attribute__((destructor))
void after_main()
{
	printf("%s\n",__FUNCTION__);
}
int main()
{
	printf("%s\n",__FUNCTION__);
	return 0;
}
