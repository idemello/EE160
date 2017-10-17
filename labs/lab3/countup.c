/*      File : countup.c        *
 *      By   : Isaac DeMello    *
 *      login: idemello         *
 *      team : Isaac Kyle Woojin  *
 *      Date : 1/28/15                  */

/*  A program to count from 1 to 20, one per line  */

int main()
{
  int count;

	count = 1;
	while (count <= 20)
	{
		printf("%d\n", count);
		count = count + 1;
	}
}
