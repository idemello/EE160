#include"days.h"

int julian_date(int days, int month, int year)

{ 
	int totaldays = 0;
	int daysinmonth = 0;
	int monthtotal = 0;

	
	daysinmonth = days_in_month(month, year);
	
	totaldays = daysinmonth + days;
	
	

	

	return totaldays;
}	
