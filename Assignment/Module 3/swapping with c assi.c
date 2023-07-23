//swapping using third variable

#include<stdio.h>
int main()
{
	int a,b,c;
	printf("\nBEFORE SWAPPING\n");
	printf("enter the values of a and b\n");
	scanf("%d%d",&a,&b);
	
	c=a;
	a=b;
	b=c;
	printf("\nAFTER SWAPPING\n");
	printf("Value of a = %d & b = %d",a,b);
	
	return 0;
	
}
