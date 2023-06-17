//Variable type
//Write a C program to perform addition, subtraction, multiplication and division of two numbers
//Input any two numbers separated by comma : 10,5

#include<stdio.h>
int main()
{
	int a=10,b=5;
	int c;
		
	c=a+b;
	printf("sum of two numbers is %d\n",c);
	c=a+b;
	printf("difference of two numbers is %d\n",c);
	c=a*b;
	printf("product of two numbers is %d\n",c);
	c=a/b;
	printf("quotient of two numbers is %d\n",c);
	return 0;
}
