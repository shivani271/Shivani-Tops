//Write a program to find out the max from given number(E.g., No: -1562 Max number is 6)

#include<stdio.h>
int main()
{
	int a,b,c,d;
	printf("enter the numbers ");
	scanf("%d%d%d%d",&a,&b,&c,&d);
	
	if((a>b) && (a>c) && (a>d))
	{
		printf("maximum number is %d",a);
	}
	else if((b>c) && (b>d))
	{
		printf("maximum number is %d",b);
	}
	else if((c>d))
	{
		printf("maximum number is %d",c);
	}
	else
	{
		printf("maximum number is %d",d);
	}
	return 0;
}
