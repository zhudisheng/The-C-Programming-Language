#include <stdio.h>

int main(int argc,char *argv[],char *env[])
{
	int i = 0;
	printf("==============Begin array =============\n");

	for(i = 0;i < argc;i++)
	{
		printf("%s\n",argv[i]);
	}
	printf("==============End array =============\n");
	printf("\n");
	printf("\n");
	printf("\n");
	
	printf("==============Begin Env =============\n");

	for(i = 0;env[i] != NULL;i++)
	{
		printf("%s\n",env[i]);
	}

	printf("==============End Env =============\n");
	return 0;
}
