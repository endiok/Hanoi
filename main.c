#define	_CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int count = 0;
void send(char n1,char n2)
{
	printf("%c-->%c\n",n1,n2);
}
void hanoi(int n,char a,char b,char c)
{
	count++;
	if (n == 1)
	{
		send(a,c);
	}
	else
	{
		hanoi(n-1,a,c,b);
		send(a, c);
		hanoi(n - 1,b, a,c);
	}
}
int main()
{
	int n = 0;
	scanf("%d",&n);
	hanoi(n,'A','B','C');
	printf("count=%d\n",count);
	return 0;
}