#include<stdio.h>
int main()
{
	int a,b;
	float c;
	
	printf("enter the values of a and b   ");
	scanf("%d%d",&a,&b);
	
	c=a+b;
	printf("addition = %f\n",c);
	
	c=a*b;
	printf("multiplication = %f\n",c);
	
	c=a-b;
	printf("subtraction = %f\n",c);
	
	c=a/b;
	printf("division = %f\n",c);
	
	c=a%b;
	printf("modulo = %f\n",c);
	
	
	return 0;
}
