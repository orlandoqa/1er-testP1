#include <stdio.h> 
#include <math.h>

#define MIN_VALUE 0
#define MAX_VALUE 1000

int main (void)
 {

  int integer;
  float root;

  fprintf ("enter an integer number from 0 to 1000:  ");
  fscanf ("%d", &integer);

if ((MIN_VALUE<integer) || (MAX_VALUE>integer)) {

  sqrt(integer);
  Root= sqrt(integer);

  fprintf ("the square root is: %10.2f\n", Root);
}

else { 
  fprintf (" wrong value \n");
}
        
  return 0; 
}


  
  

    

   
