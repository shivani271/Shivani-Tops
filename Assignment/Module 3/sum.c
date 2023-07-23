//Write a program you have to make a summation of first and last Digit. (E.g., 1234 Ans: -5)

#include<stdio.h>

int main()
{
	int num,firstdigit,lastdigit,sum;
	printf("enter the number : ");
	scanf("%d",&num);
	
	lastdigit=num%10;
	
	while(num>=10)
	{
		num=num/10;
	}
	firstdigit=num;
	
	sum=firstdigit+lastdigit;
	printf("\nsummation of first and last Digit is %d ",sum);
	
	return 0;
}
