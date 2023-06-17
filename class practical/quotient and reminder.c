//Variable Type
// Write a C program to calculate the integral quotient and remainder of a division.
/*Input numerator : 2500                                                 
 Input denominator : 235  */
 
 #include<stdio.h>
 int main()
 {
 	int n=2500;
 	int d=235;
 	int q;
 	int r;
 	
 	q=n/d; //quotient
 	r=n%d; //reminder
 	
 	printf("quotient=%d\t reminder=%d",q,r);
 	
 	return 0;
 }
