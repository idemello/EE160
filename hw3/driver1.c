//includes
#include"letters.h"
//macros

//prototypes

//begin main
main()
{
	//declare variables
		char letter = 0;
		int  vowel;
		int  consonant;

	//prompt user for initial char input
		 printf("Enter the letter you would like to check: \n");	
	//begin while loop A, ends with EOF
		while(scanf("%c", &letter) == 1)
			{
		//function1
			//function takes in char returns True if vowel(upper or lower case)
					 vowel = is_vowel(letter);
		//function2
			//function takes in char returns true if consonant(upper or lower case)
					consonant = is_h_consonant(letter);
		//if vowel TRUE print the letter is a vowel
					if(vowel == TRUE)
						printf("The leter is a Hawaiian vowel\n");
		//else if consonant = TRUE print the letter is a consonant 
					else if(consonant == TRUE)
						printf("The letter is a Hawaiian consonant\n");
			//else print the letter is not in the hawaiian alphabet
					else{printf("The letter is neither a Hawaiian consonant nor vowel\n");}
		//else print the letter is not in the hawaiian alphabet
		//reprompt user for values
					 scanf("%c", &letter);
					 printf("Enter the letter you would like to check: ");
	//end while loop A
			}
//end main
}
