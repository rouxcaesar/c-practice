#include <stdio.h>

main() {
  int c, nl, b, t;

  nl = 0;
  b = 0;
  t = 0;

  while ((c = getchar()) != EOF) {
   // switch (c) {
   // case '\n':
   //   ++nl;
   // case '\t':
   //   ++t;
   // case ' ':
   //   ++b;
   // }
   if (c == '\n') {
     ++nl;
   } else if (c == '\t') {
     ++t;
   } else if (c == ' ') {
     ++b;
   }
  }
  printf("Newlines: %d  Tabs: %d  Blanks:%d\n", nl, t, b);
}
