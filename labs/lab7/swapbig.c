#include <stdio.h>
#include "swapbig.h"
#define DEBUG

main()											//begin main
{
	float a, b;
	int flag;
	printf("Enter values for a and b you would like to swap\nThe value of b must be less than the value of a\n");
	flag = scanf("%f %f", &a, &b);					//receive initial values from user
	while(flag != EOF)							//begin while loop ends with EOF
	 {	
		if(a > b)								//if a > b perform swap
		{	swap_big(&a, &b);
			printf("The values after swap: a = %.2f, b = %.2f\n\n", a, b);
		}
		else{printf("\nERROR: Value of a is already less than value of b\n\n");}

		 printf("Enter values for a and b you would like to swap\nThe value of a must be less than the value of b\n");
		flag = scanf("%f %f", &a, &b);	//reprompt user for values

	 }	
}
void swap_big(float *a, float *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
