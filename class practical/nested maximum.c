#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter the value of a and b and c:");
	scanf("%d%d%d",&a,&b,&c);
	
	if(a>b)
	{
		printf("a is maximum");
	}
	else if(a>c)
	{
		printf("a is maximum");
	}
	else if(b>c)
	{
		printf("b is maximum");
	}
	else
	{
		printf("c is maximum");
	}
	return 0;
}
