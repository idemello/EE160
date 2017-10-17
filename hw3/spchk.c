#include<stdio.h>
#include"letters.h"

#define DELIM(ch2) (ch2 == ' ' || ch2 == '\n' || ch2 == '\t' || (ch2 >= 33 && ch2 <= 62))


main()

{
   char ch1, ch2;
   int vowel1, consonant1;
   int vowel2, consonant2;
	int dblconsonant = FALSE;

	printf("Enter a word to check if it is a valid Hawaiian word, EOF to end\n");	
   ch1 = getchar();
   while(ch1 != EOF)
   {  
      vowel1 = is_vowel(ch1);
      consonant1 = is_h_consonant(ch1);
      printf("%c", ch1);
      ch2 = getchar();

		 vowel2 = is_vowel(ch2);
       consonant2 = is_h_consonant(ch2);
		if(consonant1 == TRUE && consonant2 == TRUE)
			dblconsonant = TRUE;
		if(consonant1 == FALSE || consonant2 == FALSE)
			dblconsonant = TRUE;
      if(vowel1 == TRUE)
         {
             if(DELIM(ch2) == TRUE && dblconsonant == FALSE)
            {  printf(" is a Hawaiian word\n");
					dblconsonant = FALSE; 
            }
				 else if(DELIM(ch2) == TRUE && dblconsonant == TRUE)
				{	printf( " is not a Hawaiian word\n");
				   dblconsonant = FALSE;
				}
        }
      else if(consonant1 == TRUE)
         { 
				 if(DELIM(ch2) == TRUE && dblconsonant == TRUE)
				  {printf(" is not a Hawaiian word\n");
					dblconsonant = FALSE;
					}
				else if (DELIM(ch2) == TRUE)
				{	printf(" is not a Hawaiian word\n");
					dblconsonant = FALSE;
			   }	
         }
		else if(DELIM(ch2) == TRUE && (vowel1 == FALSE || consonant1 == FALSE))
				{printf(" is not a Hawaiian word\n");
					dblconsonant = FALSE;
				}
      ch1 = ch2;
		vowel1 = vowel2 = consonant1 = consonant2 = FALSE;

	}
}

