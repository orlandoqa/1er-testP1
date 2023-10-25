#include <stdio.h>

#include <string.h>

int main (void) {

  char string[25];
  int ST;

        fprintf ("enter a string: ");
        fscanf ("%s",string);

        ST= strlen(string);

        if (ST<25) {

	fprintf ("the lenght of the string is: %d\n", ST);

        }

        else
 { 

        fprintf ("Excessive lenght");
}
        return 0;
}
    
