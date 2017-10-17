/*     File : gravity.c     *
 *     By   : Isaac DeMello *
 *     login: idemello      *
 *     Date : 01/21/16    */
 
/*
 *   This program computes the velocity and height of a falling
 *   object given the time.
 */
 
main()
{
   float time,
   velocity,
   distance;

   /*  set the time  */
   time = 10;


   /*  compute the velocity */
   velocity = 32 * time;

   /*  compute the distance  */
   distance = 32 * time * time / 2;

   /*  print the result  */
   printf("An object falling %4.2f feet in %4.2f seconds ", distance, time);
   printf("is traveling %4.2f ft/sec\n",velocity);
} 
