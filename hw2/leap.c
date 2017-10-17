#include"leap.h"

int is_leap(int year)
{	if(year % 400 == 0)
			return TRUE;
	else if(year % 4 == 0 && year % 100 != 0)
		    {return TRUE;}
	else{return FALSE;}
}
