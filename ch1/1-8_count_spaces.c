#include <stdio.h>

int main()
{
  int c, nl, nt, ns;

  nl = 0;
  nt = 0;
  ns = 0;

  while ((c = getchar()) != EOF) {
    if (c == '\n')
      ++nl;
    if (c == '\t')
      ++nt;
    if (c == ' ')
      ++ns;
  }
  printf("You have #%d lines \nYou have #%d tabs \nYou have #%d spaces \n", nl, nt, ns);
}