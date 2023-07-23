//WAP to reverse a string and check that the string is palindrome or not

#include<stdio.h>
#include<string.h>

int main()
{
	char str1[20],str2[20];
	printf("enter the string : ");
	scanf("%s",&str1);
	
	strcpy(str2,str1);
	printf("%S",str2);
	
	strrev(str2);
	printf("\nreverse string : %s\n\n",str2);
	
	if(strcmp(str1,str2)==0)
	{
		printf("given string is palindrome");
	}
	else
	{
		printf("given string is not palindrome");
	}
	return 0;
}
