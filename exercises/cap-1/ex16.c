#include <stdio.h>
#define MAXLINE 1000	/* maximum input line length */

// program that counts and prints the biggest input line. 
// it deals with every input size but only prints
//  up to the MAXLINE capacity

int readline(char line[], int lim);
void copy(char to[], char from[]);

/* print the longest input line */
int main()
{
	int len;			/* current line length */
	int max;			/* maximum length seen so far */
	char line[MAXLINE];		/* current input line */
	char longest[MAXLINE];	/* longest line saved here */
    int lim = MAXLINE;

	max = 0;
	while ((len = readline(line, lim)) > 0){
		if (len > max) {
			max = len;
			copy(longest, line);
		    } 
            printf("\n");
    }
    printf("Character count: %d\n", max);  // prints the biggest input's character count

	if (max > 0){      /* there was a line */
        printf("%s\n", longest);
	return 0;
    }		
}

/* getline: read a line into s, return length */
int readline(char s[], int lim)
{
	int c, i;

	for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
		s[i] = c;
	if (c == '\n') {
		s[i] = c;
		++i;
	}
	s[i] = '\0';
	return i;
}

/* copy: copy 'from' into 'to'; assume to is big enough */
void copy(char to[], char from[])
{
	int i;

	i = 0;
	while ((to[i] = from[i]) != '\0')
		++i;
}