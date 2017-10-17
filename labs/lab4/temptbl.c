/* Name: Isaac DeMello
   Date: 3/3/2016
   File name:temptbl.c
   Group: Woojin, Kyle */    
#include<stdlib.h>
#include<stdio.h>

//Prototypes: Temp table()
//            Tocelsius()

float tocelsius(float);
float temptable(float , float, float);

main()
{
	//declare variables
	float Fi, Ff;
	float table;
	float step;
	float swap;
	int count;
	int flag;

	smallstep:
	//prompt user for two values which are the starting( Fi), ending fahrenheit values (Ff), and step size
	printf("Enter the range of values to convert, and the interval between each value (End by entering same value twice)\n");
	scanf("%f %f %f", &Fi, &Ff, &step);
	//if and else if statements checking the step to make sure it viable, if negative *-1 to make positiv
	//if too small user is prompted again
	if (step < 0)
		{step = step * -1;}
	else if(step <= 0.001)
		{printf("No invterval smaller than .001!\n");
		 goto smallstep;}

	while (flag != EOF )
	{
		//initialize loop, loop conditions while(Fi != Ff)
		//if Ff is initially larger reverse it so that Fi is the smaller value
		if(Fi > Ff )
	//swap Fi and Ff in the situation the Fi is larger than Ff, so that the table still runs correctly
		{			swap = Fi;
					Fi = Ff;
					Ff = swap;
		}
	//count checks how many lines are printed using this formula
			      count = ((Ff - Fi) / step) + 1;                                                                                           
			while(Fi <= Ff)
			{
				table =  temptable(Fi, Ff, step); 

				Fi	= Fi + step;
			} //end of while loop Fi < Ff
		
		printf("Computed %d temperatures\n", count);

		printf("Enter the range of values to convert (End by entering same value twice)\n");
		flag = scanf("%f %f %f", &Fi, &Ff, &step);
		if (step < 0)
      {step = step * -1;}
		else if(step <= 0.001)
      {printf("No invterval smaller than .001!\n");
       goto smallstep;}

	} //end of while loop Fi != Ff
} // End of main




//Temptable ()
float temptable(float startF, float stopF, float step)
{ 
	float C;

	//tocelsius()
	C = tocelsius(startF);
	printf("%.2f\t %.2f\n",startF, C);
}



//Formula
//Tocelsius()
float tocelsius(float Fahr)
{
	float Cels;

	Cels = (Fahr - 32.0) * (5.0/9.0); 
	return Cels;
}

