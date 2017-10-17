#include<stdio.h>
main()
{

	char ch;
	int flag;

	printf("copy progam\n\n");
	printf("type text, terminate with EOF\n");

	flag = scanf("%c", &ch);
	while(flag != EOF)
	{
	printf("%c", ch);
	flag = scanf("%c", &ch);
	}
}

