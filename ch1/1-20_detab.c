
#include <stdio.h>
#define MAXLINE 100
char detab(char line[]);
int addspace(char line[], int index, int spaces);

int main()
{
	char line[MAXLINE];
		
	detab(line);
	printf("your new line is %s", line);
	return 0;	
}

char detab(char line[])
{
	int c, i;

	for (i = 0; i < MAXLINE -1 && (c = getchar()) != EOF && c != '\n'; ++i)
	{
		if(c == '\t')
		{
			i = addspace(line, i, 4);			
		}
		else
		{
			line[i] = c;
		}
	}
	return 0;
}

int addspace(char line[], int index, int spaces)
{
	int i;

	for (i = index; i <= (index + spaces); ++i)
	{
		line[i] = ' ';
	}
	return i;
}
