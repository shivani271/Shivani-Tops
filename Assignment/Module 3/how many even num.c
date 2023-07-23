//How many Even numbers are there

#include<stdio.h>
int main()
{
	int i,n,s=0;
	printf("enter the number: ");
	scanf("%d",&n);
	
	printf("even numbers are  ");
	for(i=1;i<=n;i++)
	{
		if((i%2)==0)
		{
			printf("%d  ",i);
			s++;
		}
	}
	printf("\n\n%d even numbers are there ",s);
	
	return 0;
}
