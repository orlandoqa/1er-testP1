#include <stdio.h>

#include <ctype.h>

#include <string.h>

int main (void) {

  char letter, Uppercase;
  char string[6] = "eqlfx";

  fprintf("enter a lower case eqlfx :  ");
  fscanf ("%c", &letter);

  Uppercase = toupper(letter);

if (strchr (string,letter) !=NULL) {
  
  
 fprintf ("the letter %c capitalized is:%c\n", letter,Uppercase);
}

else { 
  
    fprintf ("Invalid \n");
}
  
  return 0; 
  }
  
  
