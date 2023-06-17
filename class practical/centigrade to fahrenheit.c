//Input Output 
//Write a program that converts Centigrade to Fahrenheit.
//Input the radius of the sphere : 2.56

#include<stdio.h>
int main()
{
	float c,F;
	printf("temperature in centigrade");
	scanf("%f",&c);
	
	F=(c*9/5)+32;
	printf("temperature in fahernheit %f",F);
	return 0;
}
