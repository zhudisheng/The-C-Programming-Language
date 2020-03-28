#include <stdio.h>

int main()
{
	char str1[] = "hello world";
	char *str2 = "hello world";
	char str3[] = {'h','e','l','l','o'};
	printf("%s\n",str1);
	printf("%s\n",str2);
	printf("%s\n",str3);
	str1[0] = 'a';
	//str2[0] = 'a';
	str3[0] = 'a';

	printf("%s\n",str1);
	printf("%s\n",str2);
	printf("%s\n",str3);
	return 0;
}
