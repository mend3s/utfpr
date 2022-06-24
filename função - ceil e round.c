//https://www.tutorialspoint.com/c_standard_library/math_h.htm
//double ceil(double x) returns the smallest integer value greater than 
//or equal to x.
#include <stdio.h>
#include <math.h>

int main ()
{
   float val1, val2, val3, val4;

   val1 = 1.6;
   val2 = 1.2;
   val3 = 2.8;
   val4 = 2.3;

   printf ("value1 = %.1lf\n", ceil(val1));
   printf ("value2 = %.1lf\n", ceil(val2));
   printf ("value3 = %.1lf\n", ceil(val3));
   printf ("value4 = %.1lf\n", ceil(val4));
   
   printf ("round value1 = %.1lf\n", round(val1));
   printf ("round value2 = %.1lf\n", round(val2));
   printf ("round value3 = %.1lf\n", round(val3));
   printf ("round value4 = %.1lf\n", round(val4));
 
   
   
   return(0);
}