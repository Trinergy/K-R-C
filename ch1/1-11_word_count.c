#include <stdio.h>

#define IN 1
#define OUT 0

int main()
{
  int c, nl, nw, nc, state;

  state = OUT;
  nl = nw = nc = 0;
  while((c = getchar()) != EOF) {
    ++nc;
    if (c == '\n')
      ++nl;
    if (c == ' ' || c == '\n' || c == '\t')
      state = OUT;
    else if (state == OUT) {
      state = IN;
      ++nw;
    }
  }
  printf("%d %d %d\n", nl, nw ,nc);
}

/* 
likely bugs are that 
even new lines will still 
be counted as a character 
even though we only intend 
to count string characters

backspace counts as two characters 
even though it shuld be treated as empty when
interpreted by user
*/