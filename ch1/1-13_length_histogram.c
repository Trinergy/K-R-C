#include <stdio.h>

/*
draw histogram of length of words in input
*/

// NON-ARRAY WAY (assuming u print words with bars to indicate length)

// int main()
// {
//   int c, i, nc;

//   nc = 0;

//   while ((c = getchar()) != EOF) {
//     ++nc;
//     if (c == ' '  || c == '\n' || c == '\t') {
//       for (i = 0; i < nc - 1; ++i)
//         printf("-");
//       printf("\n");
//       nc = 0;
//     }
//     else {
//       putchar(c);
//     }
//   }
// }

// ARRAY WAY (assuming you count number of occurrences of a certain length)

int main()
{
  int c, i, nc, j;

  #define MAXCHAR 25

  int histogram[MAXCHAR];

  nc = 0;

  for(i = 0; i < MAXCHAR; ++i)
    histogram[i] = 0;

  while ((c = getchar()) != EOF) {
    ++nc;
    if (c == ' '  || c == '\n' || c == '\t') {
      ++histogram[nc-1];
      nc = 0;
    }
  }

  for (i = 0; i < MAXCHAR; ++i) {
    printf("length %d count ", i);
    for (j = 0; j < histogram[i]; ++j) {
      printf("-");
    }
    printf("\n");
  }
}












