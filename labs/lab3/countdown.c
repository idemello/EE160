/*      File : countdown.c      *
 *      By   :Isaac             *
 *      login: idemello         *
 *      team : Isaac Kyle Woojin*
 *      Date : 1/28/16          */

/*  A program to count from 10 down to 1, one per line and print "blastoff"  */

main()
{
int count;

        count = 10;

        while( count >= 0)
        {
                printf("%d\n", count);
				count = count - 1;
        }

        printf("BLASTOFF!\n");

}
