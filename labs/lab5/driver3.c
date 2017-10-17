#include<stdio.h>
#include<stdlib.h>
#include"exponent.h"
//macros

//#define DEBUG

//prototypes
 //protoypes in header file exponent.h
//begin main
main()
{

   //declare variables
   float base;
   int exponent;
   float result;
   int flag;

    printf("Input a base and its exponent\n");
   flag = scanf("%f %d", &base, &exponent);  
   //begin while loop A, ends with EOF
   while(flag != EOF)
   {     
   #ifdef DEBUG
    printf("debug:Enter pos_power: base = %.1f exponent= %.1d\n", base, exponent);
   #endif   
   //function
      result = pos_power(base, exponent);
   #ifdef DEBUG
    printf("debug:Exit pos_power: result = %.1f\n", result);
   #endif      
      //print results
      printf("The result of the exponent function is: %.1f\n", result);
   //end while loop A
   
   printf("Input a base and its exponent\n");
   flag = scanf("%f %d", &base, &exponent);
   }
//end main
}
//function
    
