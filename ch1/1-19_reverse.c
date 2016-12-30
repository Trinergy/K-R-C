#include <stdio.h>

#define MAXLINE 1000

int getline2(char line[], int maxline);
void reverse(char to[], char from[],int lim);

/* the \n and /0 count as char length. 
need to print correct length number */

int main()
{
  int len;
  int max;
  char line[MAXLINE];
  char reversed[MAXLINE];

	len = getline2(line, MAXLINE);
	reverse(reversed,line,len);
	printf("%s is input %s is output  length %d", line, reversed, len);
  return 0;
} 

int getline2(char s[], int lim) 
{
  int c, i;

  for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i) {
    s[i] = c;
  }
  if (c == '\n') {
    s[i] = c;
    ++i;
  }
  s[i] = '\0';
  return i-1;
}

void reverse(char to[], char from[], int lim) 
{
  int i;
	for (i = lim; i >= 0; --i) {
		to[(lim-i)] = from[i];
	}
}
