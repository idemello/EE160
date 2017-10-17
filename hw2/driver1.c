//includes
#include<stdlib.h>
#include<stdio.h>
#include"leap.h"
//prototypes
//prototypes and macros can be found in header files listed above

//begin main
main()
{
	//declare variables
	int day, month, year;
	int leap;
	//promt user for values

	printf("Enter a year greater than 0, enter 0 to end program\n");
	scanf("%d", &year);

	//begin while loop A, ends when user inputs 0
		while(year !=0)
		{
			//call function 
			leap = is_leap(year);
			if(leap == TRUE)
					printf("The year is a leap year\n");
			else{printf("The year is not a leap year\n");}
			//reprompt user for values

			printf("Enter a year greater than 0, enter 0 to end program\n");
			scanf("%d", &year);

	//end while loop A
		}
//end main
}


