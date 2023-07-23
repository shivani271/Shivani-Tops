//WAP to find factorial using recursion

#include<stdio.h>
int fact(int n);

int main()
{
	int n;
	printf("enter the number ");
	scanf("%d",&n);
	
	fact(n);
	printf("factorial of %d is %d ",n,fact(n));
	return 0;
}

int fact(int n)
{
	if(n==0)
	{
		return 1;
	}
	int factn = fact(n-1);
	int factN = factn*n;
	//printf("n=%d\n",n);
	//printf("factn %d\n",factn);
	//printf(" factN %d\n",factN);
	return factN;
}
