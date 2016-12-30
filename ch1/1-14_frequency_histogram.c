#include <stdio.h>

int main()
{
  int c, i, j;

  int char_array[125];

  for (i = 0; i < 125; ++i) {
    char_array[i] = 0;
  }

  while ((c = getchar()) != EOF) {
    ++char_array[c];
  }

  for (i = 0; i < 125-1; ++i) {
    if (char_array[i] > 0) {
      if (i != ' '  && i != '\n' && i != '\t') {
        putchar(i);
        for (j = 0; j < char_array[i]; ++j) {
        printf("-");
        }
      }
      printf("\n");
    }
  }
}