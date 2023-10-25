
#include <stdio.h>

int main (void) {

  short short_integer = 30000;
  int integer = 3000000;
  float real = 3e9;

  fprintf (stdout, "short integer: %d\n", short_integer);
  fprintf (stdout, "integer: %d\n", integer);
  fprintf (stdout, "real in floating point: %.2f\n", real);
  fprintf (stdout, "real in scientific notation: %.2e\n\n", real);

  short_integer = integer;
  fprintf (stdout, "short_integer:%hd\n", short_integer);

  integer = real;
  fprintf (stdout, "short_integer: %hd\n", short_integer);

  integer = real;
  fprintf (stdout, "integer: %d\n\n", integer);

  integer = 3000000;
  real = integer;
  fprintf (stdout, "integer: %d\n", integer);
  fprintf (stdout, "real: %.2f\n\n", real);

  integer = 1234567892;
  real = integer;
  fprintf (stdout, "integer: %d\n", integer);
  fprintf (stdout, "real: %.2f\n", real);
  fprintf (stdout, "real: %.9e\n", real);
    return 0;
}
