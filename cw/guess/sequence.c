#include <stdio.h>
#include "play.h"

int play(int pick)

{int guess;
 int num_guesses;
 int result;

	num_guesses = MAX_GUESSES;
	while(num_guesses > 0)
	{	
			printf("\tWhat is your guess? ");
			scanf("%d", &guess);
	
			result = test(pick,guess);
			if(result == WIN)
		
				{printf("YES!!\a you guessed it!\n");
				 return WIN;
				}
			if(result == HI)
					printf("Too HIGH!!!\n");
			else
					printf("Too Low!!!\n");
			num_guesses = num_guesses-1;
	
	}
	printf("Sorry :(, you're out of guesses\n");
	printf("The number was %d\n", pick);
	return LOSE;
}
