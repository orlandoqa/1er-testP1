#include <stdio.h>

int main (void) {

  float real;
  double real_double;

  real = 25.50;
  real_double = 25e+100;
  real = real_double * real;
  fprintf (stdout, "Using float: %.2f\n\n", real);

  real = 25.50;
  real_double = real_double * real;
  fprintf (stdout, "Using double: %.2f\n", real_double);
  fprintf (stdout, "In scientific notation: %.4e\n\n", real_double);
  return 0;
}
