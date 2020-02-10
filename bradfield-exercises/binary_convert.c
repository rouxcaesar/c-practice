#include <stdio.h>

/*
  This function accepts a string of 0s and 1s and returns an int representing
  the unsigned integer value of the passed in binary string.
*/
int f(char *s) {
  int r = 0;
  while (*s != '\0') {
    r <<= 1;
    r |= (*s & 1); // the lowest order bit of s will be 0 or 1 if s is '0' or
                   // '1' respectively
    s++;
  }
  return r;
}

int main(int argc, char *argv[]) { printf("%d\n", f(argv[1])); }
