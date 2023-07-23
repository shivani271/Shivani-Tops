//WAP Find out length of string without using inbuilt function

#include<stdio.h>

int main()
{
	char a[20],i,l=0;
	
	printf("enter the string : ");
	scanf("%s",&a);
	
	for(i=0;a[i]!= 0;i++)
	{
		l++;
	}
	printf("length of the string is %d",l);
	return 0;
}
