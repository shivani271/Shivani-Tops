//Input Output 
//Write a program in C that takes minutes as input, and display the total number of hours and minutes.
//Input minutes: 546

#include<stdio.h>
int main()
{
	int min=546;
	int t;
	int r;
	
	t=min/60;
	r=min%60;
	printf("total number of hours and minutes is %d hrs %d minutes",t,r);
	return 0;
}
