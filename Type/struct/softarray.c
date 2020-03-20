#include <stdio.h>
struct SoftArray
{
	int len;
	int array[];
};
struct SoftArray1
{
	int len;
	void *t;
};
struct SoftArray* create_soft_array(int size)
{
	struct SoftArray *ret = NULL;
	if(size > 0)
	{
		ret = (struct SoftArray *)malloc(sizeof(struct SoftArray)+sizeof(int)*size);
		ret->len = size;
	}

	return ret;
}
void delete_soft_array(struct SoftArray *sa)
{
	free(sa);
}
void func(struct SoftArray *sa)
{
	
	int i = 0;
	if(NULL != sa )
	{
		for(i = 0;i < sa->len;i++)
		{
			sa->array[i] = i+1;
		}
	}
}
int main()
{
	struct SoftArray *sa = create_soft_array(8);
	func(sa);
	for(int i = 0;i < sa->len;i++)
	{
		printf("%d\n",sa->array[i]);
	}
	printf("sizeof(SoftArray)=%d\n",sizeof(struct SoftArray));
	printf("sizeof(SoftArray)=%d\n",sizeof(struct SoftArray1));
	return 0;
}
