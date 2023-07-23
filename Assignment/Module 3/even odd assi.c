//WAP to find number is even or odd using ternary operator
 
#include<stdio.h>
int main()
{
	int num;
	printf("enter the number : ");
	scanf("%d",&num);
	
	if(num%2==0)
	{
		printf("given number is even");
	} 
	else
	{
		printf("given number is odd");
	}
	return 0;
}
