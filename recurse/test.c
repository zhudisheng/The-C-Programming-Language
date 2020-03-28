#include <stdio.h>

int strlen_r(const char *s)
{
	if(*s)
	{
		return 1+strlen_r(s+1);
	}
	else
	{
		return 0;
	}
}
int main()
{
	printf("%d\n",strlen_r("abc"));
	printf("%d\n",strlen_r(""));
	return 0;
}
