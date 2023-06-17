//Input Output 
//Write a C program that prints the perimeter of a rectangle 
/*Input the height of the Rectangle : 5
Input the width of the Rectangle : 7 */

#include<stdio.h>
int main()
{
	int l=5;
	int w=7;
	int p;
	
	p=2*(l+w);
	printf("perimeter of rectangle is %d",p);
	return 0;
}
