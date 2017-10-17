#include <stdio.h>
#include "reorder.h"
//#define DEBUG

main()                                                                                  //begin main
{
        float a, b, c;
        int flag;
        printf("Enter values for a, b, and c to arrange them from smallest to largest\n");
        flag = scanf("%f %f %f", &a, &b, &c);
														                           //receive initial values from user
        while(flag != EOF)                                           //begin while loop ends with EOF
         {  
				if(c >= b && b >= a)
				printf("Error values are already ordered\n");

				else{reorder(&a, &b, &c);
				printf("The values after reorder are a = %.2f, b = %.2f, c = %.2f\n", a, b, c);}
	 
  				printf("Enter values for a, b, and c to arrange them from smallest to largest\n"); //reprompt or end
				flag = scanf("%f %f %f", &a, &b, &c);  //reprompt user for values

         }      
}
