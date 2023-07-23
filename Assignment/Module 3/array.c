//WAP to take two Array input from user and sort them in ascending or descending order as per user’s choice

#include<stdio.h>

int main()
{
	int a[20],i,size,size1,b[20],size2,c[20],s,j;
	
	printf("\n\n---------Array 1----------");
	printf("\n\nenter the size of an array 1: ");
	scanf("%d",&size);
	
	printf("\n\n");
	for(i=0;i<size;i++)
	{
		printf("enter the element %d : ",i);
		scanf("%d",&a[i]);
	}
	
	printf("\n\nelements of an array 1: \n");
	for(i=0;i<size;i++)
	{
		printf("%d  ",a[i]);
	}
	
	printf("\n\n-------Array 2------\n\n");
	printf("enter the size of an array 2: ");
	scanf("%d",&size1);
	
	printf("\n\n");
	for(i=0;i<size1;i++)
	{
		printf("enter the element %d : ",i);
		scanf("%d",&b[i]);
	}
	
	printf("\n\nelements of an array 2: \n");
	for(i=0;i<size1;i++)
	{
		printf("%d  ",b[i]);
	}
	
	for(i=0;i<size;i++)
	{
		c[i]=a[i];
	}
	
	for(i=0;i<size1;i++)
	{
		c[i+size]=b[i];
	}
	
	printf("\n\nelements after merge of the two array : ");
	for(i=0;i<size1+size;i++)
	{
		printf("%d  ",c[i]);
	}
	
	/*for ascending elements*/
	for(i=0;i<size1+size;i++)
	{
		for(j=i+1;j<size1+size;j++)
		{
			if(c[i]>c[j])
			{
				s=c[j];
				c[j]=c[i];
				c[i]=s;
			}
		}
	}
	
	printf("\n\nelements in ascending order : ");
	
	/*for descending elements*/
	for(i=0;i<size1+size;i++)
	{
		printf("%d  ",c[i]);
	}
	
	for(i=0;i<size1+size;i++)
	{
		for(j=i+1;j<size1+size;j++)
		{
			if(c[i]<c[j])
			{
				s=c[j];
				c[j]=c[i];
				c[i]=s;
			}
		}
	}
	
	printf("\n\nelements in descending order : ");
	for(i=0;i<size1+size;i++)
	{
		printf("%d  ",c[i]);
	}
}
