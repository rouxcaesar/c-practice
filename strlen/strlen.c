#include <stdio.h>

/* This program determines the length of a given string. */
int my_strlen(char *string);

main() {
  char string1[6] = "hello";
  printf("Length of string: %d\n", my_strlen(string1));

  char string2[15] = "Julius Z";
  printf("Length of string: %d\n", my_strlen(string2));
}

int my_strlen(char *string) {
  int i = 0;
  while (string[i] != 0) {
    ++i;
  }
  return i;
}
