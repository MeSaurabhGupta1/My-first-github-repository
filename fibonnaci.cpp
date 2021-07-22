#include<stdio.h>
int f(int n)
{
	if(n==1||n==2)
	return 1;
	else
	{
		return (f(n-2)+f(n-1));
	}
}
int main()
{
	int n;
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	printf("%d  ",f(i));
}
