//WAP to convert years into days and days into years

#include<stdio.h>
int main()
{
	int convert;
	float year,day;
	
	printf("enter the case : ");
	scanf("%d",&convert);
	
	switch(convert)
	{
		case 1: //day into year
			printf("\nenter the value of day : ");
			scanf("%f",&day);
			printf("year = %f\n",(day/365));
			break;
			
		default: //year into day
			printf("\nenter the value of year : ");
			scanf("%f",&year);
			printf("days = %f\n",(year*365));
	}
	return 0;
}
