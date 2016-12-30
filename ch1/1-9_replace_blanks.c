#include <stdio.h>

int main()
{
  int c, ns;

  ns = 0;
  while ((c = getchar()) != EOF) {
    if (c == '\n') {
      ns = 0;
    }
    if (c == ' ') {
      ++ns;
      // printf("we have %d spaces", ns);
      if (ns < 2) {
        putchar(c);
      }
    }
    else {
      putchar(c);
    }
  }
}