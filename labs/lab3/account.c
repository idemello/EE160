//account.c algorightim

//Name:Isaac DeMello

/* Input: Initial Investment, # of years, interest rate
   Output: Accumulated value
*/

//Library Inclusion
#include<stdio.h>
#include<stdlib.h>

//prototypes

float calc_acc_amt(float, float, int);

//begin main
main() 
{
	//declare variables
		float acct, interest;
		int initial = 0; 
		int yearsf;
		float sub_amt;

//prompt user for inputs

		printf("Enter your initial account balance, interest rate, and number of years(Enter 0 for account balance to end program): \n");
      scanf("%f %f %d", &acct, &interest, &yearsf);

 //loop conditions loop ends when acc amt entered = 0  

	//initialize while loop A
	while(acct != 0)
	{  
		

//initialize while loop B
   //loop conditions loop ends yearsi = #of years inputted
			while(initial < yearsf)
				{   
				
				acct = calc_acc_amt(acct, interest, yearsf);
				
				initial = initial + 1;

				printf("After year %d your balance is: %.2f\n", initial, acct);
				}
//call function calc_acc_amt
    //end while loop B

//end while loop A, before loop ends prompt user again
		
			printf("The final balance of your account is: %4.2f\n", acct);

		 printf("Enter your initial account balance, interest rate, and number of years(Enter 0 for account balance to end program): \n");
      scanf("%f %f %d", &acct, &interest, &yearsf); 
		}		
}	//end main

//function 
float calc_acc_amt(float acc_amount, float annual_interest, int year)
{	float total; 
//formula
	total = acc_amount + (acc_amount * annual_interest);

	return total;
}
