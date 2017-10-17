
/* File: stock0.c
   By:   Tep Dobry
   login:   tep
        Date:  19 May 93
        Mod :  1 Jun 95
*/


/*  Program to compute the value of one stock in a portfolio   */

main()
{  /*  Variable Declarations   */
   int shares;    /*  number of shares owned     */
   int sell_whole;   /*  selling price information  */
   int sell_numer, sell_denomin;
   float portfolio_value;

   /*  Set data values   */
   shares = 57;
   sell_whole = 11;
   sell_numer = 3;
   sell_denomin = 8;

   /*  Print data value  */


   /*  Calculate  portfolio  value  */
   portfolio_value = shares *( sell_whole + (float)sell_numer / (float) sell_denomin);

   /*  Print result   */
   printf("value of portfolio is:%.2f/n", portfolio_value);

}
