//includes
#include<stdlib.h>
#include<stdio.h>
#include"maxmin.h"
//prototypes in header file "maxmin.h"

//begin main
main()
{
//declare variables
   float num1, num2;
   float maxNum, minNum;
	float flag;
//prompt user for values

 printf("Emter two numbers to determine a maximum and minimum: \n");
  scanf("%f %f", &num1, &num2);

//open while loop A(ends when 0 is entered)
   while(flag != EOF)
   {
   //prompt user for values
         
   //use function max to determine larger of two numbers
   maxNum = max(num1, num2);
   //use function min to determine smaller of two numbers
   minNum = min(num1, num2);
   //print out current largest and smallest numbers
   printf("The largest number currently is: %f\n", maxNum);
   printf("The smallest number currently is: %f\n", minNum);

   //reprompt users for values
       printf("Emter two numbers to determine a maximum and minimum:\n");
       flag = scanf("%f %f", &num1, &num2);
   //end while loop A
   }
//print the maximum and minimum numbers
   printf("The largest number entered was %f\n", maxNum);
   printf("The smallest number entered was %f\n", minNum);

//end main
}

