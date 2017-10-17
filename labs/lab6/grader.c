#include"assign_grade.h"

int main()
{
    int score;
    char grade;
	 int passing = 0;
	 int failing = 0;

       while(scanf("%d", &score) == 1)
       {
              printf("%d: ", score);
              grade = assign_grade(score);
					if(grade == '?')
						printf("Invalid Score\n");
              else{ printf("%c\n", grade);}
					
					 if(grade == 'A' || grade == 'B' || grade == 'C')
                  passing = passing + 1;                                        
                if(grade == 'D' || grade == 'F')
                  failing = failing + 1;
 
		}
       printf("Passing scores:%d\n", passing);
		 printf("Failing scores:%d\n", failing);
     }

