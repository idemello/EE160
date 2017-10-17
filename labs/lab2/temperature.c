//Name: Isaac DeMello
//Date 2/4/15
//Group: Isaac Kyle Woojin


#include<stdlib.h>
#include<stdio.h>
#include<time.h>

main()
{

/* declaring variables required for input */

float  F;
float  C;


printf("Enter value of temperature conversion:", F );
scanf("%f", &F);

/* Formula */

C = (F - 32.0) * (5.0/9.0);

/* print f output */

printf("The temperature in degrees Celsius is: %.2f\n", C);
}
