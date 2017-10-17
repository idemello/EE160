#include"letters.h"


int is_vowel(char vwl)
{
	//if vwl is a,e,i,o,u (or uppercase) return TRUE
	if(VOWEL(vwl) == TRUE)
		return TRUE;
	//otherwise return false
	else{return FALSE;}
	
	 

}

int is_h_consonant(char cnst)
{
	//if cnst is h,k,l,m,n,p,w (or uppercase) and ` return TRUE
	switch(cnst)
		{
			case 'h' :
			case 'H' :
			case 'k' :
			case 'K' :
			case 'l' :
			case 'L' :
			case 'm' :
			case 'M' :
			case 'n' :
			case 'N' :
			case 'p' :
			case 'P' :
			case 'w' :
			case 'W' :
			case '`' :
				return TRUE;
				break;
			default :
				return FALSE;
			
		}
}
