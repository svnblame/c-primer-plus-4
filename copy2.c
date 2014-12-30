/* Listing 11.26: copy2.c -- strcpy() demo 
 * Copying just part of an array.
*/
#include <stdio.h>
#include <string.h> // declares strcpy()
#define WORDS "beast"
#define SIZE 40

int main(void)
{
	const char * orig = WORDS;
	char copy[SIZE] = "Be the best that you can be.";
	char * ps;

	puts(orig);
	puts(copy);
	ps = strcpy(copy + 7, orig);
	puts(copy);
	puts(ps);

	return 0;
}
