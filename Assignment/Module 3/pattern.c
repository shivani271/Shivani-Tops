// pattern5
#include<stdio.h>
int main()
{
	char i,j;
	
	for(i='A';i<='E';i++) //row
	{
		for(j='A';j<=i;j++) //column
		{
			printf("%c ",j);
		}
		printf("\n");
	}
	return 0;
}
