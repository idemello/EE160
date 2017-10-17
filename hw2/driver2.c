//includes
#include<stdio.h>
#include<stdlib.h>
#include"leap.h"
#include"days.h"

//prototypes
//macros

//begin main
main()
{
	//declare variables
	int days, month, year;
	int flag;
	int leap;
	//prompt user for values
	validmonth:
	printf("Enter the month followed by the year to determine the number of days in that month\n");
	flag = scanf("%d %d", &month, &year);
	if(month > 12 || month < 0)
		{printf("Please enter a valid month\n");
		 goto validmonth;}
	//begin while loop A, ends with EOF
	while(flag != EOF)
		{	leap = is_leap(year);
			// call function and print out number of days in that month including the year
			days = days_in_month(month, year);
			
			if(month == 1)
      {printf("There are 31 days in January, %d\n", year);
      }
   else if(month == 2)
       {if(leap == TRUE)
			{printf("This is a leap year, there are 29 days in February, %d\n");}
			else{
			printf("There are 28 days in February, %d\n", year);
           }
      }
   else if(month == 3)
      {printf("There are 31 days in March, %d\n", year);
      }
   else if(month == 4)
      {printf("There are 30 days in April, %d\n", year);
      }
   else if(month == 5)
      {printf("There are 31 days in May, %d\n", year);
      }    
   else if(month == 6)
      {printf("There are 30 days in June, %d\n", year);
      }   
   else if(month == 7)
      {printf("There are 31 days in July, %d\n", year);
      }   
   else if(month == 8)
      {printf("There are 31 days in August, %d\n", year);
      }
   else if(month == 9)
      {printf("There are 30 days in September, %d\n", year);
      }   
   else if(month == 10)
      {printf("There are 31 days in October, %d\n", year);
      }   
   else if(month == 11)
      {printf("There are 30 days in November, %d\n", year);
      }   
   else if(month == 12)
      {printf("There are 31 days in December, %d\n", year);
      }   

			//reprompt user for values
		  printf("Enter the month followed by the year to determine the number of days in that month\n");
		 flag = scanf("%d %d", &month, &year);
	  if(month > 12 || month < 0)
      {printf("Please enter a valid month\n");
		   goto validmonth ;}

	//end while loop A
		}
//end main
}

//functions
