#include <stdio.h>

#include <string.h>

int main (void) {

  char string[100];
  int ST;

        fprintf ( "enter a string: ");
        fscanf ("%s",string);

        ST = strlen(string);

	fprintf ("the string is %d characters long: %d\n", ST);
        return 0;
}
    
