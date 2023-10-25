#include <stdio.h> 
#include <math.h>

int main (void)
 {

  int integer;
  float root;

  fprintf (" enter an integer number:  ");
  fscanf ("%d", &integer);
  sqrt(integer);

  root = sqrt(integer);

  fprintf (stdout,"Root:  %10.2f\n", root);
  return 0; 
}


  
  

    

   
