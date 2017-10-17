//include libraries
#include<stdlib.h>
#include<stdio.h>

//prototypes
int posNeg(int);
int oddEven(int);
//macros
//#define DEBUG
//begin main
main()
{
//variable declaration

int num = 1;
int pos = 0, posSum = 0;
int neg = 0, negSum = 0;
int odd = 0, oddSum = 0;
int even = 0, evenSum = 0;
int negOdd = 0, negOddSum = 0;
int posEven = 0, posEvenSum = 0;
int totalNum = 0, total = 0;
//prompt user for a number  

	printf("Enter a number: \n");
	scanf("%d", &num); 

//initialize while loop A, loop ends when user inputs 0
	while(num != 0)
	{	
		if(num < 0)
			{neg = neg + 1;
			 negSum = num + negSum;                                                                        
			#ifdef DEBUG
			printf("debug: %d is negative(count = %d, total = %d)\n", num, neg, negSum);
			#endif
			if(num % 2 != 0)
					{odd = odd + 1;
					 oddSum = num + oddSum;
					 #ifdef DEBUG
					printf("debug: %d is odd(count = %d, total = %d)\n", num, odd, oddSum);
					 #endif
					 negOdd = negOdd + 1;
					negOddSum = negOddSum + num;
					 #ifdef DEBUG
					 printf("debug: %d is negative and odd(count = %d, total = %d)\n", num, negOdd, negOddSum);
					 #endif
					}
				else{even = even +1;
				     evenSum = evenSum + num;
					  #ifdef DEBUG
					 printf("debug: %d is even(count = %d, total = %d)\n", num, even, evenSum);
					  #endif
					 }				
			}
	 	if(num > 0)
			{pos = pos + 1;
			 posSum = posSum + num;  
			 #ifdef DEBUG
			 printf("debug: %d is positive(count = %d, total = %d)\n", num, pos, posSum);
			 #endif
			if(num % 2 ==0)
				{even = even +1;
				 evenSum = num + evenSum;                                                                                          
				 #ifdef DEBUG
				 printf("debug: %d is even(count = %d, total = %d)\n", num, even, evenSum);
				 #endif
				 posEven = posEven +1;
				posEvenSum = posEvenSum + num;
				 #ifdef DEBUG
				 printf("debug: %d is positive and even(count = %d, total = %d)\n", num, posEven, posEvenSum);
				 #endif
				}
			else{odd = odd + 1;
			     oddSum = oddSum + num;
				#ifdef DEBUG
				printf("debug: %d is odd(count = %d, total = %d)\n", num, odd, oddSum);
				#endif  
				 }  	
			}	
			
	totalNum = totalNum + 1;
	total = total + num;
	#ifdef DEBUG
	printf("debug: Total(count = %d, total = %d)\n", totalNum, total);
	#endif
//save variable for each one repeat loop

	
//end while loop A, when loop ends print the amount of each type of number
		printf("Enter a number:\n");
		scanf("%d", &num);
	}
//print outputs
	
	printf("You entered %d positive numbers totaling %d\n", pos, posSum);
	printf("You entered %d negative numbers totaling %d\n", neg, negSum);
	printf("You entered %d even numbers totaling %d\n", even, evenSum);
	printf("You entered %d odd numbers totaling %d\n", odd, oddSum); 
	printf("You entered %d positive even numbers totaling %d\n", posEven, posEvenSum);
	printf("You entered %d negative odd numbers totaling %d\n", negOdd, negOddSum);
	printf("You entered a total of %d numbers totaling %d\n", totalNum, total);
//end main
}
	
