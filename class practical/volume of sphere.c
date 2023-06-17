//Input Output 
//Write a C program that calculates the volume of a sphere
//Input the radius of the sphere : 2.56

#include<stdio.h>
int main()
{ 
	float r=2.56;
	float pi=3.14;
	float V;
	
	V=(4*pi*r*r*r)/3;
	printf("Volume of sphere is %f",V);
	
	return 0;
}
