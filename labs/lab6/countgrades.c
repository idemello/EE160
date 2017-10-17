//includes
#include <stdio.h>

//macros
//prototypes

//begin main
int main()
{
//declare variables
  int a;
  int b;
  int c;
  int d;
  int f;
  int others;
  int grade;

//initialize variables
		a = b = c = d  = f = 0;
		others = 0;
//begin while loop A ends with EOF
       while ((grade = getchar()) != EOF)
       {  //begin switch statement
              switch(grade)
              {//case a or A produces adds one to the count of the variable a
					// this is repeated for letters b,c,d,f
                 case 'a':
					  case 'A':
							 a++;
						  break;
                 case 'b':
					  case 'B':
							 b++;
						  break;
                 case 'c':
					  case 'C':
							 c++;
						  break;
                 case 'd':
				     case 'D':
							 d++;
						  break;
                 case 'f':
					  case 'F':
							 f++;
						  break;
				//if an empty space is entered such at tab, return, or space
				//nothing is done, switch statement breaks
						case '\n':
						case ' ':
						case '\t':
							break;
				//if no cases are met, automatically add to others
                 default: others++;
              }
       }
//print statements
       printf("Grade counts:\n");

       printf("  A's: %d\n", a);
       printf("  B's: %d\n", b);
       printf("  C's: %d\n", c);
       printf("  D's: %d\n", d);
       printf("  F's: %d\n", f);
       printf("  Other grades: %d\n", others);

}
