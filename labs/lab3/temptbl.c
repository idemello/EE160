//Name:Isaac DeMello

#include<stdlib.h>
#include<stdio.h>

//Prototypes: Temp table()
//            Tocelsius()

float tocelsius(float);
float temptable(float , float);


main()
{
	//declare variables
	float Fi, Ff;
	float table;

	//prompt user for two values which are the starting( Fi) and ending fahrenheit values (Ff)
	printf("Enter the range of values to convert (End by entering same value twie)\n", Fi, Ff);
	scanf("%f %f", &Fi, &Ff);

	while (Fi != Ff)
	{
		//initialize loop, loop conditions while(Fi != Ff)
		while(Fi <= Ff)
		{
			//temptable()
			table =  temptable(Fi, Ff); 

			Fi = Fi + 5;
		} //end of while loop Fi < Ff
		printf("Enter the range of values to convert (End by entering same value twice)\n", Fi, Ff);
		scanf("%f %f", &Fi, &Ff);
	} //end of while loop Fi != Ff
} // End of main




//Temptable ()
float temptable(float startF, float stopF)
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


