#include <stdio.h>

#define RESET(p,len) \
	while(len>0) \
		((char*)p)[--len] = 0
void reset(void *p,int len)
{
	while(len>0)
		((char*)p)[--len] = 0;
}
int main()
{
	int array[] = {1,2,3,4,5};
	int len = sizeof(array);
	int i = 0;
	//RESET(6,len);
	//reset(6,len);
	for(i=0;i<5;i++)
	{
		printf("array[%d]=%d\n",i,array[i]);
	}
	return 0;
}
