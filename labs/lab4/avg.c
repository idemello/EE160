/* Name: Isaac DeMello
   Date: 3/3/2016
   File name: avg.c
   Group: Woojin, Kyle */    

#include<stdio.h>

 main()	//begin main
{
//initialize variables
    int num = 0;
	 float avg;
	 int flag;
    int sum = 0;
	 int div = 0;
//prompt user for first input
    printf("Enter the first number to sum: \n");
    scanf("%d", &num);
//open while loop A, ends with EOF
    
   while(flag != EOF)
			{   
				//prompt user for value of num     
				  printf("Enter the next number to sum: \n");
         
      
				   sum = num + sum;
				//check for EOF

					flag = scanf("%d", &num);
				//check for EOF or next entry
				//div represents the value of the divisor
					div = div + 1;
			 }
//final formula after loop ends
	avg = sum /div;
//print result	
	printf("The average value is: %.2f\n", avg);
		

}	//end of main
