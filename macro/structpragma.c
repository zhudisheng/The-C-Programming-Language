#include <stdio.h>

#pragma pack(4)
struct Test1
{
	char c1;
	short s;
	char c2;
	int i;
};
#pragma pack(4)
struct Test2
{
	char c1;	
	char c2;
	short s;
	int i;
};

int main()
{
	printf("sizeof(struct Test1) = %d\n",sizeof(struct Test1));
	printf("sizeof(struct Test2) = %d\n",sizeof(struct Test2));
	return 0;
}
