/* Listing 11.20: nogo.c -- this will not work */
#include <stdio.h>
#define ANSWER "Grant"
#define SIZE 40

char * s_gets(char * st, int n);

int main(void)
{
	char try[SIZE];

	puts("Who is buried in Grant's tomb?");
	s_gets(try, SIZE);
	/* This will not work correctly. ANSWER ant try really are pointers,
	   so the comparison try != ANSWER doesn't check to see whether the two
	   strings are the same. Rather, it checks to see whether the two strings
	   have the same address. Because ANSWER and try are stored in different 
	   locations, the two addresses are never the same, and the user is forever
	   told that they are wrong.
	   We need to compare string "contents" not string "addresses". 
	   @see compare.c -- Listing 11.21
	*/
	while (try != ANSWER)
	{
		puts("No, that's wrong. Try again.");
		s_gets(try, SIZE);
	}
	puts("That's right!");

	return 0;
}



char * s_gets(char * st, int n)
{
	char * ret_val;
	int i = 0;

	ret_val = fgets(st, n, stdin);
	if (ret_val)
	{
		while (st[i] != '\n' && st[i] != '\0')
			i++;
		if (st[i] == '\n')
			st[i] = '\0';
		else // must have words[i] == '\0'
			while (getchar() != '\n')
				continue;
	}
	return ret_val;
}
