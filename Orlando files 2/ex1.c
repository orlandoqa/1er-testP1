#include <stdio.h>

#include <ctype.h>

int main (void) {

  char letter;

  fprintf ("Are you sure you want to close the app y or n: ");

  fscanf ("%c", &letter);


  if (tolower(letter) == 'y') {

  fprintf("you have choose yes \n"); }

  if (tolower(ln) == 'n') {

   fprintf("you have chose no \n "); }
  

     return 0;

}

 
