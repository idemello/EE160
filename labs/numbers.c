//include libraries
#include<stdlib.h>
#include<stdio.h>

//prototypes
int posNeg(int);
int oddEven(int);
//macros


//begin main
main()
{
//variable declaration

int num = 1;
int pos = 0, neg = 0;
int odd = 0, even = 0;
int negOdd = 0;
int posEven = 0;
int totalNum = 0;
//prompt user for a number  

	printf("Enter a number: \n");
	scanf("%d", &num); 

//initialize while loop A, loop ends when user inputs 0
	while(num != 0)
	{	
		if(num < 0)
			{neg = neg + 1;}
		else {pos = pos + 1;}  	
			
//function to test positive/negative
//function to test odd even
//save variable for each one repeat loop
//end while loop A, when loop ends print the amount of each type of number
		printf("Enter a number:\n");
		scanf("%d", &num);
	}
//print outputs
	
	printf("You entered %d positive numbers\n", pos);
	printf("You entered %d negative numbers\n", neg);
	printf("You entered %d odd numbers\n", odd);
	printf("You entered %d even numbers\n", even);
	printf("You entered %d positive even numbers\n", posEven);
	printf("You entered %d negative odd numbers\n", negOdd);
//end main
}
//function pos/neg
	
//function odd even
