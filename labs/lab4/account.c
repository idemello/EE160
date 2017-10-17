/* Name: Isaac DeMello
   Date: 3/3/2016
   File name:account.c
   Group: Woojin, Kyle */    

//Library Inclusion
#include<stdio.h>
#include<stdlib.h>

//prototypes

float calc_acc_amt(float, float, int);

//begin main
main() 
{
	//declare variables
		float acct;
		float interest;
		int initial = 0; 
		int time;
		float sub_amt;
		int type;
//prompt user for inputs
	printf("How would you like to calculate interest? Press 1 for yearly, 2 for monthly, 3 for daily:\n");
      scanf("%d", &type);
//while loop A ends with EOF
	while(acct != EOF)
	 {		
		//three seperate if statements asking user if they want monthly daily or yearly
		//each type changes the interest rate accordingly
		//yearly (no change), monthly(interest rate/12), daily(interest rate/365)
		if(type == 1)
			 {printf("Enter your initial account balance, yearly interest rate(percentage), and number of years(Enter 0 for account balance to end program): \n");
			  scanf("%f %f %d", &acct, &interest, &time);
			 }
		if(type == 2)
			{printf("Enter your initial account balance, monthly interest rate(percentage), and number of months (Enter 0 for account balance to end program): \n");
			 scanf("%f %f %d", &acct, &interest, &time);
				interest = interest/12;	
			}
		if(type == 3)
			{printf("Enter your initial account balance, daily interest rate(percentage), and number of days (Enter 0 for account balance to end program): \n");
			 scanf("%f %f %d", &acct, &interest, &time);
				interest = interest/365;	
			}
 //loop conditions loop ends when acc amt entered = 0  

	  
//initialize while loop B
   //loop conditions loop ends initial = time inputted
			while(initial < time)
				{   
				
				acct = calc_acc_amt(acct, interest, time);
				
				initial = initial + 1;
//Statement to change printf's so that they reflect the correct time values				
				if(type == 1)
				printf("After year %d your balance is: %.2f\n", initial, acct);
				if(type == 2)
				printf("After month %d your balance is: %.2f\n",initial, acct);
				if(type == 3)
				printf("After day %d your balance is: %.2f\n", initial, acct);
				}
//call function calc_acc_amt
    //end while loop B

//end while loop A, before loop ends prompt user again
		
			printf("The final balance of your account is: %4.2f\n", acct);
			time = 0;
		printf("How would you like to calculate interest? Press 1 for yearly, 2 for monthly, 3 for daily:\n");
		acct = scanf("%d", &type);

		}		
}	//end main

//function 
float calc_acc_amt(float acc_amount, float annual_interest, int year)
{	float total; 
//formula
	total = acc_amount + (acc_amount * annual_interest/100);

	return total;
}
