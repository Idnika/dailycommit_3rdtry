#include <stdio.h>
#include <ctype.h>

int count_word(char *s);
int main( void )
{
	int wc = count_word("the c book...");
	printf("number of words: %d\n", wc);
	return 0;
}

int count_word ( char *s )
{
	int i, wc = 0, wating = 1;

	for( i = 0; s[i] != NULL; ++i )
		if( isalpha(s[i]) )
		{
			if( wating )
			{
				wc++;
				wating = 0;
			}
		}
		else
			wating = 1;

		return wc;
}