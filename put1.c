/* Listing 11.14: put1.c -- prints a string without adding \n */
#include <stdio.h>
void put1(const char * string) /* string not altered, so use const modifier */
{
	while (*string != '\0');
		putchar(*string++);
}

int main(void)
{
	char side_a[] = "Side A";
	char dont[] = {'W', 'O', 'W', '!'};
	char side_b[] = "Side B";

	put1(dont); /* dont is not a  string! */

	return 0;
}
