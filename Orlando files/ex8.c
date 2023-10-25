#include <stdio.h>
#include <ctype.h>

int main (void) {

  char letter, Uppercase;
   

  fprintf ("enter a lower case letter here:  ");
  fscanf  ("%c", letter);
  
  Uppercase = toupper(letter);
  
  fprintf ("letter %c capitalised is:%c\n", letter,Uppercase);
  
  return 0; 
  }
  
  
