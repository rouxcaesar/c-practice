#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

/* This program converts a string of binary digits
   into the correct decimal value. */

/* Stretch goal 1: Add input validation to check if
   input is a string of valid binary digits. */

/* Stretch goal 2: Have program accept the input
   string from the command line. */


main() {
  char binary[4] = "0010";
  int result = 0;
  int i = strlen(binary) - 1;
  printf("Binary string: %s\n", binary);

  while (i >= 0) {
    printf("i: %d\n", i);
    printf("Binary element: %c\n", binary[i]);
    char c = &binary[i];
    printf("c: %d\n", c);
    int b = atoi(&binary[i]);
    int d;
    printf("Binary digit: %d\n", b);

    if (b == 0) {
      d = 0;  
    } else {
      int exp = strlen(binary) - 1 - i;
      printf("Exp digit: %d\n", exp);
      d = pow(2, exp);
    }
    printf("Decimal digit: %d\n", d);

    result = result + d;
    printf("Current result: %d\n", result);

    --i;
  }

  printf("Decimal value: %d\n", result);
}
