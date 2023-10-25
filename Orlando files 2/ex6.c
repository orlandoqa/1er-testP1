#include <stdio.h>
#include <ctype.h>

int main (void) {

  char letter;

  fprintf (" E) Enrol\n"); 
  fprintf (" Q) Quit\n");
  fprintf (" L) List\n");
  fprintf (" F) Filter\n");

 fprintf ("Choose an option: ");
 fscanf ("%c", &letter);

 switch(toupper(letter)){

case 'E':
 fprintf (" Enrol\n");
 break;

case 'Q':
fprintf ("Quit\n");
break;

case 'L':
fprintf ("List\n");
break;

case 'F':
fprintf ("Filter\n");
break;

default:
fprintf ("Invalid option\n");
break;
    }

    return 0;
}

      

  
