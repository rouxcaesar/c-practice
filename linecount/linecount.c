#include <stdio.h>
#define MAX_FILE_NAME 100

/* This program counts the number of lines in the file
   with a given filename. */

// int my_linecount();

main() {
  int count = 0;
  char filename[MAX_FILE_NAME];
  FILE *fp;
  char c;

  fp = fopen("./file.txt", "r");

  if (fp == NULL) {
    printf("Count not open file");
    return 0;
  }

  for (c = getc(fp); c != EOF; c = getc(fp)) {
    if (c == '\n') {
      ++count;
    }
  }

  fclose(fp);
  printf("The file has %d lines\n", count);
  return 0;
}
