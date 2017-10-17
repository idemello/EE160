
char assign_grade2(int score, int gradingScale1,int gradingScale2,int gradingScale3, int gradingScale4)
{ 
				
			if(score >= gradingScale1 && score <= 100)
				return 'A';
			else if(score >= gradingScale2 && score <= gradingScale1)
				return 'B';
			else if(score >= gradingScale3 && score <= gradingScale2)
				return 'C';
			else if(score >= gradingScale4 && score <= gradingScale3)
				return 'D';
			else if(score >= 0 && score <= gradingScale4)
				return 'F';
			else{return '?';}
			

}
