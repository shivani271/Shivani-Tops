//WAP to print Fibonacci series up to given numbers

#include<stdio.h>
int main()
{
	int n1=0,n2=1,n3,num,i;
	printf("enter the number of elements : ");
	scanf("%d",&num);
	
    //	printf("%d%d\n",n1,n2);
	
	for(i=1;i<=num;i++)
	{
		n3=n2+n1;
		printf("%d\n",n3);
		n1=n2;
		n2=n3;
	}
	return 0;
}
