//vote

#include<stdio.h>
int main()
{
	int age;
	printf("enter the age:");
	scanf("%d",&age);
	
	if(age<18)
	{
		printf("user can not vote");
	}
	else
	{
		printf("user can vote");	
	}
	return 0;
}
