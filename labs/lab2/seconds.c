/*      File : seconds.c        *
 *      By   : Isaac DeMello    *
 *      login: idemello         *
 *      team : Isaac Kyle Woojin*                  
 *      Date : 1/21/15          */

/*
 *   This program reads a number of seconds and computes how many
 *     hours, minutes and seconds that corresponds to.
 */

/* declaring the high and low of RNG */

      
		
		#include<time.h>


main()
{               
 
               
   int seconds;
   int hours, minutes;
 
        /*  get the number of seconds
        printf("Enter the number of seconds: ");
        scanf("%d", &seconds); */

/*srand(time(NULL));
seconds = rand() % 5000; */


printf("choose the upper bound of the random # convert:", seconds);
scanf("%d", &seconds);

const int LOW = 0;
const int HIGH = seconds;

srand(time(NULL));
seconds = rand() % (HIGH - LOW + 1) + LOW;

printf("the random number generated is: %d seconds\n" , seconds);

        /*  compute the number of hours  */
        hours = seconds / 3600;
			
			/* use modulus to carry over remaining seconds */

			seconds = seconds % 3600;		  

        /*  compute the number of minutes  */
        minutes = seconds / 60;

			/* use modulus to carry over remaining seconds */
         
			seconds = seconds % 60;

        /*  compute the number of seconds remaining  */
        
	
		 
			

        /*  print the result  */
        printf("there are %d hours, %d minutes, %d seconds\n",
                hours, minutes, seconds);

}
