//WAP to find reverse of string using recursion

#include<stdio.h>
#include<string.h>
void reverse();

int main()
{
	reverse();
	
	return 0;
}

void reverse()
{
	char a[20];
	int len,i;
	
	printf("enter the string : ");
	scanf("%s",&a);
	
	len=strlen(a);
	
	printf("reverse string : ");
	for(i=len-1;i>=0;i--)
	{
		printf("%c",a[i]);
	}
	
}
