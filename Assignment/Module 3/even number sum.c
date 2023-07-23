#include<stdio.h>
int main()
{
	int i,sum2,num;
	
	printf("enter the number  ");
	scanf("%d",&num);
	
	for(i=2;i<=num;i+=2)
	{
	sum2=sum2+i;
	printf("%d\t",i);
	}
	printf("\nsum of even numbers = %d\n",sum2);
	
	return 0;
}
