#include"days.h"

int days_in_month(int month, int year)
{ 

	if(month == 1)
		 return 0;
	else if(month == 2)
				return 31;
	else if(month == 3)
			return 59;
		
	else if(month == 4)
			return 90;
		
	else if(month == 5)
			return 120;
		  
	else if(month == 6)
			return 151;
		 
	else if(month == 7)
			return 181;
		 
	else if(month == 8)
			return 212;
		
	else if(month == 9)
			return 242;
		   
	else if(month == 10)
			return 273;
		   
	else if(month == 11)
			return 303;
		 
	else if(month == 12)
			return 334;
		 
}
