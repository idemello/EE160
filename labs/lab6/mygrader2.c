//includes
#include "assign_grade2.h"
#include <stdio.h>
//macros
//prototypes

//begin main
int main()
{
	//declare initialize variables
    int score;
    char grade;
	 int passing = 0;
	 int failing = 0;
	 int invalid = 0;
	 int gradingScale1, gradingScale2, gradingScale3, gradingScale4;

	//goto keyword ensures grading scale is valid
	//gradingscale takes in the first 4 values in a scanf and saves them outside
	//of the while loop		
		newgradingscale:
		scanf("%d %d %d %d", &gradingScale1, &gradingScale2, &gradingScale3, &gradingScale4);
	//if(statements), the statements exist so the grading scale is valid
	//gs1 cannot be less than gs2, gs2 cannot be less gs3, etc...
 
		if(gradingScale1 < gradingScale2 || gradingScale1 < gradingScale3 || gradingScale1 < gradingScale4 || gradingScale2 < gradingScale3 || gradingScale2 < gradingScale4 || gradingScale3 < gradingScale4 || gradingScale1 > 100 || gradingScale4 < 0)  
			{printf("Invalid grading scale please re-enter values\n");
				goto newgradingscale;
			}
		//begin while loop A ends with EOF
			while(scanf("%d", &score) == 1)
		 {		  
		//call function assign_grade2
		//function uses the scanned values and the score inputted
		//returns a char grade
              grade = assign_grade2(score, gradingScale1, gradingScale2, gradingScale3, gradingScale4);
		//if the grade is invalid print invalid to screen add to invalid
		//if grade is valid print to screen
		//if grade is ABC add to passing
		//if grade is DF add to failing
					if(grade == '?')
						{printf("Invalid Score\n");
					invalid = invalid + 1;}
              else{ printf("%d: %c\n",score, grade);}
					
					 if(grade == 'A' || grade == 'B' || grade == 'C')
                  passing = passing + 1;                                   
                if(grade == 'D' || grade == 'F')
                  failing = failing + 1;
		}
	//print statements
       printf("Passing scores:%d\n", passing);
		 printf("Failing scores:%d\n", failing);
		 printf("Invalid scores:%d\n", invalid);
 }


