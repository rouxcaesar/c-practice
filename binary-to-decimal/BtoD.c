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

int main() {
  char *s = "1010";
  int result = 0;

  while (*s != '\0') {
    if (*s == '1') {
      result = result + pow(2, strlen(s) - 1);
    }
    s++;
  }

  printf("result: %d\n", result);
}
