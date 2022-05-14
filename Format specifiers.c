#include <stdio.h>
int main()
{
    // show the type of data to be displayed
    /*
       Common examples include:
       
       %c  character
       %s  array of characters
       %f  float
       %lf double
       %d interger/bool

    */
    /*
       We also have
       %.1 for decimal precision
       %1   for minimum width field
       %-  for align left
    
    
    */

   // The code

   float item1 = 9.88;
   float item2 = 30.00;
   float item3 = 100.90;

   printf("Item 1: kshs%-8.2f \n",item1); // The -ve makes it left aligned
   printf("Item 2: kshs%8.2f \n",item2);
   printf("Item 3: kshs%8.2f \n",item3);

   return 0;

}