
/*	File:	stock2.c
	By:	Tep Dobry
	login:	tep
        Date:	
        Mod :	
*/


/*  Program to compute the value of one stock in a portfolio reading
        the data at run time   */

main()
{  /*  Variable Declarations   */
   int shares;		/*  number of shares owned     */
   int sell_whole;	/*  selling price information  */
   int sell_numer, sell_denomin;

   float portfolio_value;  /*  the value of the portfolio  */

	/*  Get the number of shares values   */
	printf("Enter number of shares: ");
	scanf("%d", &shares);
	/*  Get the selling price   */
	printf("Enter stock selling price as whole numerator denominator: ");
	scanf("%d %d %d", &sell_whole, &sell_numer, &sell_denomin);

	/*  Print data values  */
	printf("You have %d shares of stock\n",shares);
	printf("selling at $%d %d/%d\n",
		sell_whole,sell_numer,sell_denomin);


	/*  Calculate  portfolio  value  */
	portfolio_value = shares * (sell_whole +
		(float) sell_numer / (float) sell_denomin);

	/*  Print result   */
	printf("\nThe value of your portfolio is $%f\n",portfolio_value);


}

