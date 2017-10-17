/* file: war.c
	by: Isaac DeMello
	login: idemello
	date: 3/10/16
	team: Mango.
	members: Kyle, Woojin */ 

#include<stdio.h>
#include<stdlib.h>

//Begin Main

main()
{

//Delcare variables
	int player1;
	int player2;
	int again;

	const int LOW = 2;
	const int HIGH = 14;
	
	srand(time(NULL));

	printf("WAR! first # is player 1 | second # is player 2\n");

//Begin while loop A   //loop condition (loop if 1 is entered reinitialize loop, if 0 is entered end
		while(again != 0 )
		{	   
//Initialize a random # generator that will give 2 numbers
// on seperate lines

		player1 = rand() % (HIGH - LOW + 1) + LOW;

   //#1 is player A
//		printf("Player one has drawn %d\n", player1);	
   //#2 is player B

	
		player2 = rand() % (HIGH - LOW + 1) + LOW;
			
		printf("Player one has drawn: ");
		    if( player1 == 10)
            printf("T\n", player1);
        else if( player1 == 11)
            printf("J\n");
        else  if( player1 == 12)
            printf("Q\n", player1);
        else if( player1 == 13)
            printf("K\n", player1);
        else if( player1 == 14)
            printf("A\n", player1); 
			else{printf("%d\n", player1);
				 }

		    printf("Player two has drawn: ");
          if( player2 == 10)
            printf("T\n", player2);
        else if( player2 == 11)
            printf("J\n");
        else  if( player2 == 12)
            printf("Q\n", player2);
        else if( player2 == 13)
            printf("K\n", player2);
        else if( player2 == 14)
            printf("A\n", player2); 
         else{printf("%d\n", player2);
             }    

			if(player1 > player2)
				 {	printf("Player 1 is the winner!\n");
				 }			
			else if(player2 > player1)
				 {	printf("Player 2 is the winner!\n");
				 }	
			else if(player1 == player2)
				 {	printf("The game is a draw\n");
				 }	
//prompt user if they would like to play again      

		 printf("would you like to play again?(Type 1 for yes and 0 for no)\n");
		 scanf("%d", &again);
		}
		
}
//end main 

