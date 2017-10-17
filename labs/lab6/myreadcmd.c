/*      File : readcmd.c        *
 *      By   :                  *
 *      login:                  *
 *      team :                  *
 *      Date :                  */

/*
 * Read a command, skipping over leading blanks and any trailing
 * characters.
 */

#include <stdio.h>
//include
#define LOWER(cmd)		(cmd >= 97 && cmd <= 122)
#define UPPER(cmd)		(cmd >= 65 && cmd <= 90)
#define MISSING(cmd)   (cmd == ' ' || cmd == '\n'|| cmd == ';')

int skipBlanks(void);
int skipOverRestOfCommand(void);

int main()
{
  int cmd;
//assign cmd value to skipBlanks return 
        cmd = skipBlanks();
		//open while loop ends with EOF
        while (cmd != EOF)
        {
             //if the output of skipBlanks() is LOWER or UPPER print the output
				if(LOWER(cmd) || UPPER(cmd))
				{	printf("The command is: %c\n", cmd);
					skipOverRestOfCommand();
				}
				//if the output of skipBlanks() is MISSING print that the command is missing
				 else if(MISSING(cmd))
							printf("Error: Missing command\n");
				//otherwise print that it is not a letter
				  else 
						{printf("Error: %c is not a letter\n", cmd);
						 skipOverRestOfCommand();														
						}


//                skipOverRestOfCommand();
                cmd = skipBlanks();
    
        }
}

int skipBlanks(void)
{
  int c;
		//get a character
        c = getchar();
		//if the character is a space or tab get another character
        while (c == ' ' || c == '\t')
                c = getchar();
		//return the character that is not a space
        return c;
}

int skipOverRestOfCommand(void)
{
  int c;
		//get a character
        c = getchar();
		//if the character is not the newline character AND a semicolon keep getting new characters
        while (c != '\n' &&  c != ';')
         	  c = getchar();
		//	when the loop ends return the character that is processed	
		  return c;
		//character is forgotten in the following skip blanks function
}
