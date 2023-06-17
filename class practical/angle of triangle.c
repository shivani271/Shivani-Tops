// Write a C program to find the third angle of a triangle if two angles are given.
//Input two angles of triangle separated by comma : 50,70
#include<stdio.h>
int main()
{ 
	int a=50,b=70;
	int c;
	
	c=180-(a+b);
	printf("the third angle of triangle is %d",c);
	
	return 0;
}
