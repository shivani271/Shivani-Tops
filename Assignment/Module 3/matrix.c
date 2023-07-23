//WAP to make addition, Subtraction and multiplication of two matrix using 2-D Array

#include<stdio.h>

int main()
{
	int a[2][2],b[2][2],mul[2][2],i,j,k,c[2][2];
	
	printf("\n\n---------------Matrix: 1--------------\n\n");	
	for(i=0;i<2;i++) //row of matrix 1
	{
		for(j=0;j<2;j++) //column  of matrix 1
		{
			printf("Enter the elements : ");
			scanf("%d",&a[i][j]);
		}
	}
	
	printf("\n"); 	
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++) 
		{
			printf("%d   ",a[i][j]);
		}
		printf("\n");
	}
	
	printf("\n\n\n---------------Matrix: 2--------------\n\n");	
	for(i=0;i<2;i++) //row of matrix 2
	{
		for(j=0;j<2;j++) //column  of matrix 2
		{
			printf("Enter the elements : ");
			scanf("%d",&b[i][j]);
		}
	}
	
	printf("\n");
	for(i=0;i<2;i++) 
		{
		for(j=0;j<2;j++) 
		{
			printf("%d   ",b[i][j]);
		}
		printf("\n");
	}
		
	for(i=0;i<2;i++) 
	{
		for(j=0;j<2;j++) 
		{
			mul[i][j]=0;
			for(k=0;k<2;k++)   //for multiplicatn
			{
				mul[i][j]=mul[i][j]+a[i][k]*b[k][j];
			}
		}
	}
	
	printf("\n\n\n---------------Result : Multiplication Matrix--------------\n\n");
	for(i=0;i<2;i++) 
		{
		for(j=0;j<2;j++) 
		{
			printf("%d   ",mul[i][j]);
		}
		printf("\n");
	}
	
	for(i=0;i<2;i++) 
		{
		for(j=0;j<2;j++) 
		{
			c[i][j]=a[i][j]+b[i][j];
		}
		printf("\n");
		}
	printf("\n\n---------------Result : Addition of Matrix--------------\n\n");		
	for(i=0;i<2;i++) 
		{
		for(j=0;j<2;j++) 
		{
			printf("%d   ",c[i][j]);
		}
		printf("\n");
	   }
	   
	   for(i=0;i<2;i++) 
		{
		for(j=0;j<2;j++) 
		{
			c[i][j]=a[i][j]-b[i][j];
		}
		printf("\n");
		}
	printf("\n\n---------------Result : Subtraction of Matrix--------------\n\n");		
	for(i=0;i<2;i++) 
		{
		for(j=0;j<2;j++) 
		{
			printf("%d   ",c[i][j]);
		}
		printf("\n");
	   }
	   
	return 0;
}
