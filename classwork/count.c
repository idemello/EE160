#include <stdio.h>

main()
{  int count = 0;

	/*  while there are more characters  */
	while(getchar() != EOF)
		/* count the character   */
		count = count + 1;

	/*  print the result  */
	printf("There were %d characters in the file\n",count);

}
