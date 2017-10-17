//checks if x y z are equal
#include<stdio.h>
#include<stdlib.h>
//begin main
main()
{
	//declare variables
	int x,y,z;
	int flag;

	//promt user for values
	printf("Enter values for x , y , and z: \n");
	flag = scanf("%d %d %d", &x, &y, &z);
	//begin while loop A
			while(flag != EOF)
				{
		//check if variables are equal
				if(x == y == z)
					printf("x, y, and z are equal\n");
				else if(x == y)
					printf("x and y are equal\n");
				else if(y == z)
					printf("y and z are equal\n");
				else{printf("none of the variables are equal\n");}
		//reprompt user for values
				printf("Enter values for x , y , and z: \n");                                   flag = scanf("%d %d %d", &x, &y, &z);

	//end while loop A
				}
//end main
}
