#include <stdio.h>

#include <ctype.h>

int main (void) {

  char letter;

  fprintf ("Are you sure you want to close the app y or n");

  fscanf ("%c", &letter);


  if (tolower(letter) == 'y') {

   fprintf ("you chose yes \n"); }

  if (tolower(letter) == 'n') {

    fprintf ("you chose no \n"); }

  else {

    fprintf("invalid option\n"); }
  

return 0;

}

 
