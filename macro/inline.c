#include <stdio.h>
#include <malloc.h>

#define MALLOC(type,x) (type*)malloc(sizeof(type)*x)

#define FREE(p) (free(p),p=NULL)

#define LOG(s) printf("[%s] {%s:%d} %s\n",__DATE__,__FILE__,__LINE__,s)

#define FOREACH(i,m) for(i=0;i<m;i++)
#define BEGIN {
#define END }

int main()
{
	int x = 0;
	int *p = MALLOC(int,5);
	
	LOG("Begin to run main code...");
	
	FOREACH(x,5)
	BEGIN
		p[x] = x;
	END

	FOREACH(x,5)
	BEGIN
		printf("%d\n",p[x]);
	END
	FREE(p);
	
	LOG("End");
	return 0;
}
