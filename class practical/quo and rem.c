//Variable Type
//Write a C program to return the quotient and remainder of a division.
/*Input numerator : 2000                                                 
 Input denominator : 235  */
  #include<stdio.h>
  int main()
  {
  	int n=2000;
  	int d=235;
  	int q,r;
  	
  	q=n/d; //quotient
 	r=n%d; //reminder
 	
 	printf("quotient=%d\t reminder=%d",q,r);
  	return 0;
  }
