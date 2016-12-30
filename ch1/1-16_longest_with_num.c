#include <stdio.h>

#define MAXLINE 1000

int getline2(char line[], int maxline);
void copy(char to[], char from[]);

/* the \n and /0 count as char length. 
need to print correct length number */

int main()
{
  int len;
  int max;
  char line[MAXLINE];
  char longest[MAXLINE];

  max = 0;

  while ((len = getline2(line, MAXLINE)) > 0) {
    if (len > max) {
      max = len;
      copy(longest, line);
    }
  }
  if (max > 0) {
    printf("%s length %d", longest, max);
  }
  return 0;
} 

int getline2(char s[], int lim) 
{
  int c, i;

  for (i = 0;(c = getchar()) != EOF && c != '\n'; ++i) {
    s[i] = c;
  }
  if (c == '\n') {
    s[i] = c;
    ++i;
  }
  s[i] = '\0';
  return i;
}

void copy(char to[], char from[]) 
{
  int i;

  i = 0;
  while ((to[i] = from [i]) != '\0')
    ++i;
}