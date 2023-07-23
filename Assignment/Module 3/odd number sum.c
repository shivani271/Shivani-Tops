//Sum of odd numbers 

#include<stdio.h>
int main()
{
	int i,sum1,num;
	printf("enter the number : ");
	scanf("%d",&num);
	
	for(i=1;i<=num;i+=2)
	{
	sum1=sum1+i;
	printf("%d\t",i);
	}
	printf("\nsum of odd numbers = %d\n",sum1);
	
	return 0;
}
