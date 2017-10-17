/* file: blackjack.c
by: Isaac DeMello
login: idemello
date: 3/10/16
team: Mango.
members: Kyle, Woojin */

//includes
#include<stdio.h>
#include<stdlib.h>
//macros
#define LOW 2
#define HIGH 14
//prototypes
int randomcard();
void converterPrint(int);
int converterValue(int, int);
//begin main
main()
{

//Delcare variables
   int player, playersum = 0;
   int dealer, dealersum = 0;
   int draw=0;
   int again=1;
   int hit=0;
   int hiddencard;
   int bankroll = 500;
   int wager = 0;
//initialize random number generator
   srand(time(NULL));
//begin game
   printf("Blackjack!\n");
   printf("You have $500\n");
//begin while loop A, ends when user inputs a 0 
   
   while(again != 0) 
     {//initialize betting for bankroll 
         newWager:
          printf("Please place your bet, minimum bet is $5\n");
       scanf("%d", &wager);
         if(wager < 5)
            {printf("Come back when you have more money\n");
             goto newWager;}
            if(wager > bankroll)
            {printf("Are you trying to cheat?\n");
             goto newWager;}

          else if(wager > 250)
            {printf("Look at Mr. High Roller over here, good luck\n");
            }
      {  hiddencard = randomcard();   //dealer cards
         dealer = randomcard();
         
          printf("Dealer shows: "); //player cards
            converterPrint(dealer);
            dealer = converterValue(dealer, dealersum);
            dealersum = hiddencard + dealer;

         if(dealersum == 21) //automatic loss if dealer has blackjack
            {printf("The Dealer reveals an A\nThe Dealer has Blackjack!\n");
             goto lose;}
       }
   // begin while loop B(players turn), ends when draws reaches 2
         while(draw != 2)
         {    
              player = randomcard(); //player cards
                printf("Player has drawn: ");
                converterPrint(player);
                player = converterValue(player, playersum);

             playersum = player + playersum;  //summation of player cards
               draw = draw + 1;
         
            if (playersum == 21 && hit == 0 ) //automatic win if player has blackjack
                  {printf("Blackjack! You win!\n");
                   goto win;}

           else if(playersum > 21) //automatic loss if player goes over 21
               {printf("Player has busted! Game over!\n");
                goto lose;}
            //determine if player wants another card
            if(draw ==2)
                printf("Player has a total of:%d\n", playersum);        
            if(draw == 2)
               {printf("would you like to hit or stand? (enter 1 to hit, 2 to stand): \n");
             scanf("%d", &hit);}

         if(hit == 1)
            draw = 1;
      
         }
         
   printf("Dealer reveals: "); //show hidden card was initialized earlier
   converterPrint(hiddencard);
   hiddencard = converterValue(hiddencard, dealersum);
   dealersum = hiddencard + dealer;
   printf("The Dealer has a %d\n", dealersum);
   if (dealersum < 17) //check dealer cards, if greater than 17, skip while loop C  
       draw = 1;
   else {draw = 2;}
    while(draw != 2) //Begin while loop C, ends when dealer draw == 2
      {
         dealer = randomcard(); //give dealer a new card
         printf("The Dealer has drawn a: ");
         converterPrint(dealer);
         dealer = converterValue(dealer, dealersum);
 
         dealersum = dealer + dealersum;
         printf("The Dealer has: %d\n", dealersum);

         if(dealersum < 17) //update loop conditions
            draw = 1;
         if(dealersum > 21)
            {printf("The Dealer has busted!\n");
             goto win;}
               else{draw=2;}
                  
         
   }   
   printf("Dealer has:%d\n", dealersum);
//declare winner, update bankroll
   if(dealersum>playersum)
   { lose: printf("The Dealer has won\n");
     bankroll = bankroll - wager;
     printf("The house always wins, you lost $%d\n", wager);}

   else if(playersum>dealersum)
   {win: printf("The Player has won\n");
      bankroll = bankroll + wager;
      printf("Well done, you have won $%d\n", wager);}
   else{printf("Push\n");
       }
//reset variables and prompt if user wants to play again
   playersum = 0;
   dealersum = 0;
   draw = 0;
   if(bankroll <= 0)
      {printf("Time to go home\n");
            exit(0);}
   printf("You have $%d remaining\n", bankroll);
   printf("Would you like to play again? (press 1 for yes, 0 for no)\n");
   scanf("%d", &again);
   }     
}
   
            

//randomcard function gives a random card between 2 and 14 when called
int randomcard()
{ int rcard;
  rcard = rand() % (HIGH - LOW + 1) + LOW;
   
   return rcard;
}
//converter print card is void function, only prints out the value of the card
void converterPrint(int card)
{
            
                if( card == 10)
                  printf("T\n", card);
               else if( card == 11)
                  printf("J\n");
                else  if( card == 12)
                   printf("Q\n", card);
               else if( card == 13)
                   printf("K\n", card);
               else if( card == 14)
                   printf("A\n", card); 
               else{printf("%d\n", card);
                   }     
}
//converter value function checks if the card falls between a certain range and 
//returns that value
int converterValue(int card, int total)
{        if(card >= 10 && card <=13)
                {card = 10;}  
         if(card == 14)
            {if(total + 11 > 21)
               {card = 1;}
              else{card = 11; }
            }
return card;
} 
