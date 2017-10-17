#include<stdio.h>
#include<stdlib.h>
#include"leap.h"
#include"days.h"
#include"julian.h"
//macros
#define DEBUG
//prototypes
int leaptest(int, int, int);
int ytdconverter(int);
main()
{   
	int day1, month1, year1;
	int day2, month2, year2;
	int daydiff, monthdiff, yeardiff, datediff;
   int numberofDays1, numberofDays2, juliandiff;
	int yearstoDays;
	int flag;	
	int leap;
	int leapdays;
	
   //prompt user for value1
   validdate:
   printf("Enter the inital day, month, and year to determine the difference\n");
   flag = scanf("%d %d %d", &day1, &month1, &year1);
				if(flag == EOF)
					exit(0);
	printf("Enter the final day, month, and year\n");
			 scanf("%d %d %d", &day2, &month2, &year2);
	
   if(month1 > 12 || month1 < 0 || day1 < 0 || day1 > 31 || month2 > 12 || month2 < 0 || day2 < 0 || month2 > 12)
		   {printf("Please enter a valid date\n");
			 goto validdate;}
   //begin while loop A, ends with EOF
   while(flag != EOF)
      {  
			leap = is_leap(year1);
			
			numberofDays1 = julian_date(day1, month1, year1);
			numberofDays2 = julian_date(day2, month2, year2);
			juliandiff = numberofDays1 - numberofDays2;
		
			if(juliandiff < 0)
					juliandiff = juliandiff * -1;

#ifdef DEBUG 
printf("debug: days from julian_date1 = %d\n", numberofDays1);
printf("debug: days from julian_date2 =%d\n", numberofDays2);
#endif

			daydiff = day2 - day1;
			monthdiff = month2 - month1;
			yeardiff = year2 - year1;
			
			if(daydiff < 0)
					daydiff = daydiff * -1;
			if(monthdiff < 0)
					monthdiff = monthdiff * -1;
			if(yeardiff < 0)
					yeardiff = yeardiff * -1;
			
#ifdef DEBUG
printf("debug: day diff = %d\ndebug:monthdiff = %d\nyeardiff = %d\njuliandiff = %d", daydiff, monthdiff, yeardiff, juliandiff);
#endif

			leapdays = leaptest(year1, year2, leap);	
		
			yearstoDays	= ytdconverter(yeardiff);
			datediff = yearstoDays + leapdays + juliandiff;
         printf("The difference in dates between %d/%d/%d and %d/%d/%d is:\n%d days %d months and %d years\n", day1, month1, year1, day2, month2, year2, daydiff, monthdiff, yeardiff);
			printf("or %d days\n", datediff);
	
		
         //reprompt user for values
		 printf("Enter the inital day, month, and year to determine the difference\n");
		 flag = scanf("%d %d %d", &day1, &month1, &year1);
				if(flag == EOF)
					break;
		 printf("Enter the final day, month, and year\n");
				 scanf("%d %d %d", &day2, &month2, &year2);
   
		if(month1 > 12 || month1 < 0 || day1 < 0 || day1 > 31 || month2 > 12 || month2 < 0 || day2 < 0 || month2 > 12)
			  {printf("Please enter a valid date\n");
				 goto validdate;}

   //end while loop A
      }
//end main
}

//functions
int leaptest(int year1, int year2, int leap)
{
int swap;
int extradays = 0;

	if(year1 > year2)
		{year2 = swap;
		 year1 = year2;
		 year1 = swap;
		}
while(year2 > year1)
	{	leap = is_leap(year1);
		if(leap == TRUE)
			extradays = extradays + 1;
		
		year1 = year1 + 1;
	}
#ifdef DEBUG
printf("debug: extradays = %d\n", extradays);
#endif
	return extradays;	
}	

int ytdconverter(int yeardiff)
{
	#ifdef DEBUG
	printf("debug: yearsdiff = %d\n", yeardiff);
	#endif

	int daysFromYears;

	daysFromYears = yeardiff * 365;
	
	#ifdef DEBUG
	printf("debug: daysFromYears = %d\n", daysFromYears);
	#endif

	return daysFromYears;
}
		


