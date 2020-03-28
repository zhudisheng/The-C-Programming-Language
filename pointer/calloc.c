#include <stdio.h>
#include <malloc.h>

#define SIZE 5

int main()
{
	int i = 0;
	int *pI = (int*)malloc(SIZE*sizeof(int));
	short *pS = (short*)calloc(SIZE,sizeof(short));
	
	for(i=0;i<SIZE;i++)
	{
		printf("pI[%d] = %d,pS[%d] = %d\n",i,pI[i],i,pS[i]);
	}
	printf("Before:pI = %p\n",pI);
	pI = (int*)realloc(pI,2*SIZE*sizeof(int));
	printf("After:pI = %p\n",pI);
	for(i=0;i<10;i++)
	{
		printf("pI[%d] = %d\n",i,pI[i]);
	}
	free(pI);
	free(pS);
	return 0;
}
