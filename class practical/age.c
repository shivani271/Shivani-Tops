//drive

#include<stdio.h>
int main()
{
	int age;
	printf("enter the age: ");
	scanf("%d",&age);
	
	if(age>18)
	{
		printf("user can drive");
	}
	else
	{
		printf("user can not drive");
	}
	return 0;
}
