//includes
#include"assign_grade.h"
//macros
//prototypes

//begin main
int main()
{
//declare and initialize variables
    int score;
    char grade;
	 int passing = 0;
	 int failing = 0;
//prompt user for values, set while loop condition ends when score is FALSE (EOF)
       while(scanf("%d", &score) == 1)
       {//printf associated with scanf above
              printf("%d: ", score);
		  //call assign_grade function returns a char of 'A','B','C', 'D', 'F', or '?'
              grade = assign_grade(score);
		  //if the score is invalid, print invalid to scren
		  //otherwise print the grade
					if(grade == '?')
						printf("Invalid Score\n");
              else{ printf("%c\n", grade);}
					
			//if the grade is A, B, or C add 1 to the passing value
					 if(grade == 'A' || grade == 'B' || grade == 'C')
                  passing = passing + 1;                        
			//if the grade is a D or F, add 1 to the failing value                
                if(grade == 'D' || grade == 'F')
                  failing = failing + 1;
 
		}
//print statements
       printf("Passing scores:%d\n", passing);
		 printf("Failing scores:%d\n", failing);
     }

