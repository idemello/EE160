#include"play.h"

int test(int picked, int guessed)

{		
		if(guessed == picked)
			return WIN;

		if(guessed < picked)
			return LOW;
	
		return HI;
}
