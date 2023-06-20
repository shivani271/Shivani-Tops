//Marksheet

#include<stdio.h>
int main()
{
	float percentage;
	printf("enter the percentage:");
	scanf("%f",&percentage);
	
	if(percentage>70)
	{
		printf("grade A++");
	}
	else if(percentage>=60)
	{
		printf("grade A");
	}
	else if(percentage>=35)
	{
		printf("pass");
	}
	else
	{
		printf("fail");
	}
	return 0;
}
