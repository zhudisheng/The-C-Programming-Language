#include <stdio.h>
int main()
{
	int i = 0;
	char buf[128] = {0};
	snprintf(buf,sizeof(buf),"%s","Zhuxinran");
	printf("strlen(buf) = %d\n",strlen(buf));
	return 0;
}
