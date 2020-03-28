 #include <stdio.h>
void han_move(int n,char a,char b,char c)
{
	if(n == 1)
	{
		printf("%c---->%c\n",a,c);
	}
	else
	{
		han_move(n-1,a,c,b);
		han_move(1,a,b,c);
		han_move(n-1,b,a,c);
	}
}
int main()
{
	han_move(3,'A','B','C');
	 return 0;
}
