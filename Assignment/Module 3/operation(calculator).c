//WAP of Addition, Subtraction, Multiplication and Division using Switchcase.(Must Be Menu Driven)

#include<stdio.h>
int main()
{
	int a,b,operation;
	printf("enter the case : ");
	scanf("%d",&operation);
	printf("enter the value of a and b : ");
	scanf("%d%d",&a,&b);
	
	switch(operation)
	{
	case 1: //addition
	printf("\nAddition\n");
	printf("%d + %d = %d\n",a,b,(a+b));
	break;
	
	case 2: //subtraction
	printf("\nSubtraction\n");
	printf("%d - %d = %d\n",a,b,(a-b));
	break;
	
	case 3: //multiplication
	printf("\nMultiplication\n");
	printf("%d * %d = %d\n",a,b,(a*b));
	break;
	
	case 4: //division
	printf("\nDivision\n");
 	printf("%d / %d = %d\n",a,b,(a/b));
	break;
	
	default: //modulo
	printf("\nModulo\n");
	printf("modulo =s %d",(a%b));	
	}
	return 0;
}
