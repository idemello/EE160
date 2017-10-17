//includes
#include<stdio.h>
#include<stdlib.h>

//prototypes
float speed_mph(float distance, float time);

//macros
#define MILE 5280
#define HOUR 3600
//#define DEBUG
//begin main
main()
{
	//declare variables
	float feet, seconds;
	int counter = 0;
	int flag, mph;	
	//prompt user for distance and time
	printf("Please enter the distance in feet and time in seconds to calculate MPH:\n");
	flag = scanf("%f %f", &feet, &seconds);
	//begin while loop A, ends with EOF
		while(flag != EOF)
		{
		//call function
		mph = speed_mph(feet, seconds); 
		//reprompt user for values
		//loop update, prints number of values inputted
		printf("Speed is %d MPH", mph);
	
		if(mph > 600)
			printf(" WOW!!!\n");
		else{printf("\n");}
		
		counter = counter + 1;

		    printf("Please enter the distance in feet and time in seconds to calculate MPH\n");
			 flag = scanf("%f %f", &feet, &seconds);

	//end of while loop A
		}
			printf("There were a total of %d speed(s) inputted\n", counter);
//end main
}
//begin function
//function takes distance and time, returns mph
float speed_mph(float distance, float time)
{
	float speed;
	float miles, hour;
	
	miles = distance/MILE;
	
	#ifdef DEBUG
	printf("debug: distance = %f\n", miles);
	#endif
	
	time = time/HOUR;

	#ifdef DEBUG
	printf("debug: time = %f\n", time);
	#endif

	speed = miles/time;
	
	#ifdef DEBUG
	printf("debug: speed = %f\n", speed);
	#endif

	return speed;
	//end function
}
