/* Name: Isaac DeMello
   Date: 3/3/2016
   File name:sum.c
   Group: Woojin, Kyle */    

#include<stdio.h>

 main()
{

//delcare variables
	 int num, flag;
	 int sum = 0;
   //prompt user for inputs
 
    printf("Enter the first number to sum: \n");
	 scanf("%d", &num);
//formula to save the sum value as the sum value
	sum = sum + num;
//initialize while loop A,end with EOF
	while(flag != EOF)
		{			
			//obtain first input and check for EOF
				printf("Enter the next number to sum: \n");
				flag = scanf("%d", &num);
			//print out the value of the sum		
				sum = sum + num;
				printf("The sum is currently: %d\n", sum);
		}
//print final value
		printf("The final sum is: %d\n", sum);

} //end of main
