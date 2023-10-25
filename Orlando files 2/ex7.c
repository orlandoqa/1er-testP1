#include <stdio.h>

#include <ctype.h>

int main (void) {

  float op1,op2;
  char op;

  fprintf (" enter an operation: ");
    fscanf ("%f %c%f", &op1,&op,&op2);

    switch(op) {
    case '+':
      fprintf ("Result: %.2f\n",op1+op2);
      break;

    case '-':
      fprintf ("result: %.2f\n",op1-op2);
      break;

    case '*':
      fprintf ("result: %.2f\n",op1*op2);
      break;

    case '/':
      fprintf ("result: %.2f\n",op1/op2);
      break;

    default:
      fprintf ("Invalid operation\n");
      break;
    }
  return 0;
}
