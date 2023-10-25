#include <stdio.h>

int main (void) {

  int integer;
  float real;

  integer = 4;
  real = integer/5;
  fprintf (stdout, "Quotient = %.2f\n", real);

  real = (1.0*integer)/5;
  fprintf (stdout, "Division 1 = %.2f\n", real);

  
  real = integer/5.0;
  fprintf (stdout, "Division 2 = %.2f\n", real);

  real = 4.7;
  integer = real;
  fprintf (stdout, "integer = %d\n", integer);
 
  return 0; 
}
