#include<stdio.h>
#include<stdlib.h>
#include"leap.h"
#include"days.h"
#include"julian.h"

//prototypes
//macros

// egin main
main()
{
   //declare variables
   int day, month, year;
   int flag;
   int leap;
	int numberofDays;
   //prompt user for values
   validdate:
   printf("Enter the day, month, and year to determine the julian date\n");
   flag = scanf("%d %d %d", &day, &month, &year);
   if(month > 12 || month < 0 || day < 0 || day > 31)
      {printf("Please enter a valid date\n");
       goto validdate;}
   //begin while loop A, ends with EOF
   while(flag != EOF)
      {  leap = is_leap(year);
         // call function and print out number of days in that month including the year
         
			numberofDays = julian_date(day, month, year);
			if(leap == TRUE && month > 2)
			numberofDays = numberofDays + 1;
			printf("%d/%d/%d is day %d of the year %d\n", day, month, year, numberofDays, year);

			//reprompt user for values
	printf("Enter the day, month, and year to determine the julian date\n");
   flag = scanf("%d %d %d", &day, &month, &year);

     if(month > 12 || month < 0 || day < 0 || day > 31)
		{	printf("Please enter a valid date\n");
         goto validdate ;
		}

   //end while loop A
      }
//end main
}

//functions

