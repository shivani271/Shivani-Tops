//minimum 

#include<stdio.h>
int main()
{
	float a,b,c;
	printf("enter the vale of a and b and c: ");
	scanf("%d%d%d",&a,&b,&c);
	
	if(a<b)
	{
		printf("a is minimum");
	}
	else if(a<c)
	{
		printf("a is minimum");
	}
	else if(b<c)
	{
		printf("b is minimum");
	}
	else
	{
		printf("c is minimum");
	}
	return 0;
}
