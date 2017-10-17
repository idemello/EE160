float pos_power(float base, int exponent)
{
   int total = base;
   int i = 0;
   
   if(exponent < 0)
   return 0;
  
   else if(exponent == 0)
   return 1;

   else{
       for(i = 0; i < exponent -1; i++)
            {
               total = total *  base;
             
            }
         }
   
return total;

} 
