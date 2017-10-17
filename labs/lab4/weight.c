/* Name: Isaac DeMello
	Date: 3/3/2016
	File name: weight.c
	Group: Woojin, Kyle */
	

#include<stdio.h>                                                               

 main()
{

//initialize variables

    float value;
    float weight;
    int flag;
    float sum = 0;
	 float pair;   

//prompt user for values

    printf("Enter the weight followed by the value of the number: \n");
    scanf("%f %f", &weight, &value);

	 

// initialize while loop A, ends with EOF
        
   while(flag != EOF)
         {
	//enter formula
		
			pair =(weight/100) * value; 
			sum = pair + sum;
			
		   printf("Enter the next weight value pair: \n");
	
		//check for EOF         

         flag = scanf("%f %f", &weight, &value);
         
          }
//after loop print final sum


         printf("The weighted sum is: %.2f\n", sum);
//after while loop divide by the number of terms to get the avg 
} //end of main
