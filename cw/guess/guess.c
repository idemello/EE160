#include <stdio.h>
#include "guess.h"
#include "play.h"
#include "tfdef.h"

//#define DEBUG

main()
{	int keep_playing = TRUE;
	int hidden_number;
	srand(time(NULL));
	printf("\n\n\t\tWelcome to the Guessing Game\n");
	
	while( keep_playing )
	{	
			hidden_number = PICK(START,STOP);
			printf("\nI'm thinking of a number between %d "
					"and %d\nCan you guess it?\n\n", START,STOP);

#ifdef DEBUG
//printf("debug:main:the pick is $%d\n",hidden_number);
#endif
			play(hidden_number);
			
			printf("\nDo you want to play again?\n");
			printf("(1 for yes, 0 for no): ");
			printf("(1 for yes, 0 for no): ");
			scanf("%d", &keep_playing);
	}

	printf("Thanks for the game... bye...\n");

}
