//Input Output 
// Write a C program that takes hours and minutes as input, and calculates the total number of minutes.
/*Input hours: 5
  Input minutes: 37*/
  
  #include<stdio.h>
  int main()
  {
  	int hr=5;
  	int min=37;
  	int m;
  	
  	m=(hr*60)+min;
  	printf("total number of minutes is %d minutes",m);
  	return 0;
  }
