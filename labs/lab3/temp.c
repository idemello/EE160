/*      File : countup.c        *
 *      By   : Isaac DeMello    *                                                                                                                                                                                
 *      login: idemello         *
 *      team : Isaac Kyle Woojin  *
 *      Date : 1/28/15                  */

#include<stdlib.h>
#include<stdio.h>
#include<time.h>

float tocelsius(float);

main()
{

/* declaring variables required for input */

float  F;
float  C;



/*prompt to enter temp in F */


printf("Enter value of temperature conversion:", F );
scanf("%f", &F);

// initialize loop that ends with F = -500 

while( F != -500) {

C = tocelsius( F);



// print loop output

printf("The temperature in degrees Celsius is: %.2f\n", C);

// prompt user again for value at end of loop to check loop conditions

printf("Enter value of temperature conversion:", F );
scanf("%f", &F);
}

}


// tocelcius function with renamed input variable

float tocelsius(float Fahr)
{
// formula 
float Cels;

 Cels = (Fahr - 32.0) * (5.0/9.0); 

return Cels;
}
         /*  Given:  a temperature reading in degrees Fahrenheit
             Returns: the temperature in degrees Celsius          */
