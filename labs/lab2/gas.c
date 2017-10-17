/*      File : gas.c            *
 *      By   : Isaac DeMello    *
 *      login: idemello         *
 *      team :                  *
 *      Date : 1/22/15          */

	
/* This program takes computes the statistics of operating your car between
 visits to the gas station */

#include<stdlib.h>
#include<stdio.h>
#include<time.h>

main()
{

/* declaring variables required for input */

float miles,
		cost,
		costPerMile,
		gallons;

/* prompting user to enter gallons and miles since last fill up, both are float values as they often come in decimal quantities, will probably make them %4.2 possibly %4.3 for gallons since prices are often listed to the thousandths */

printf("enter the number of gallons used: ", gallons);
scanf("%f", &gallons),
printf("enter the number miles since last fill-up: ", miles);
scanf("%f", &miles);

/* the number of gallons used is equal to the number of gallons used, the cost
is static and non-changing */

gallons = gallons;
cost = 3.12;

/* showing the number of gallons since last visit as a float, seperated the lines with \n to for aesthetic purposes */

printf("You have used %.2f gallons since your last visit\n", gallons);
printf("Gasoline costs $3.12 per gallon\n", cost); 

/*formula to calculate cost as a function of gallons and the price of gas */

cost = gallons * cost;

/* formula to calculate costPerMile as a function of the total cost and the number of miles driven */

costPerMile = cost / miles;

printf("The total price of your gasoline is :$%.2f\n", cost);
printf("The cost per mile of is: $%.2f\n", costPerMile);
}
