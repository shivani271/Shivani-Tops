//Input Output 
//Write a C program that converts kilometers per hour to miles per hour.
//Input kilometers per hour: 15

#include<stdio.h>
int main()
{
	int a=15;
	printf("kilometer per hour is %d ",a);
	float b; 
	
	b=a/1.609344;
	printf("miles per hour is %f",b);
	return 0;
}
