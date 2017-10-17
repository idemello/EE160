void reorder(float *a, float *b, float *c)
{

int min, mid, max;

#ifdef DEBUG
printf("debug: the value of *a = %d, *b = %d, *c = %d\n address' are &a = %d, &b = %d, &c = %d\n", *a, *b, *c, &a,
 &b, &c);
#endif    


                  if(*a >= *b && *b >= *c)
                 {max = *a;
                  mid = *b;
                  min   = *c;}

                  else if(*a >= *c && *c >= *b)
                  {max = *a;
                        mid = *c;
                        min = *b;}

                  else if(*b >= *c && *c >= *a)
                        {max = *b;
                         mid = *c;
                         min = *a;}

                  else if(*b >= *a && *a >= *c)
                        {max = *b;
                    mid = *a;
                         min = *c;}
                  
                  else if(*c >= *a && *a >= *b)
                        {max = *c;
                         mid = *a;
                         min = *b;}

                        *c = max;
                        *b = mid;
                        *a = min;

        
#ifdef DEBUG
printf("debug: the value of *a = %d, *b = %d, *c = %d\n address' are &a = %d, &b = %d, &c = %d\n", a, b, c, &a, &b, &c);
#endif          
                
}

