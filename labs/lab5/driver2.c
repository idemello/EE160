#include<stdlib.h>
#include<stdio.h>
#include"maxmin.h"
//prototypes in header file "maxmin.h"
//macros
//#define DEBUG
//begin main
main()
{
//declare variables
   float num1, num2 = 0;
   float maxNum = 0, minNum = 0;
	float maxNumSave, minNumSave;
   float flag;
//prompt user for values

 printf("Emter a number to determine a maximum and minimum: \n");
 scanf("%f", &num1);

//open while loop A(ends when 0 is entered)
   while(flag != EOF)
   {
		
   //prompt user for values
   //use function max to determine larger of two numbers
	   maxNum = max(num1, num2);
   //use function min to determine smaller of two numbers
		minNum = min(num1, num2);
		if(maxNum > maxNumSave)
			maxNumSave = maxNum;
		if(minNum < minNumSave)
			minNumSave = minNum;
	#ifdef DEBUG
	printf("debug: max value = %.2f, min value = %.2f\n", maxNumSae, minNumSave);
	#endif
	//debug
   //print out current largest and smallest numbers
		 printf("The largest number currently is: %.2f\n", maxNumSave);
		 printf("The smallest number currently is: %.2f\n", minNumSave);

   //reprompt users for values
       printf("Emter a number to determine a maximum and minimum:\n");
       flag = scanf("%f", &num2);
   //end while loop A
   }
//print the maximum and minimum numbers
   printf("The largest number entered was %.2f\n", maxNumSave);
   printf("The smallest number entered was %.2f\n", minNumSave);

//end main
}


