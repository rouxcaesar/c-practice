#include <stdlib.h>

/*
  This function accepts an int n, and creates an array of that
  length filled with sequential values from 0 to n. The array is
  allocated on the heap, and the caller would be responsible for
  freeing it.
*/
int* f(int n) {
  int *a = malloc(n * sizeof(int));
  int i;

  for (i = 0; i < n; i++)
    a[i] = i;

  return a;
}
