//Write a C program to accept two integers and check whether they are equal or not.
//Test Data : 15 15

#include<stdio.h>
int main()
{
	int a,b;
	printf("enter the value of a and b: ");
	scanf("%d%d",&a,&b);
	
	if(a==b)
	{
		printf("number a and number b are equal");
	}
	else
	{
		printf("number a and b are not equal");
	}
	return 0;
}
