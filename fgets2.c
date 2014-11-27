/* Listing 11.8: fgets2.c -- using fgets() and fputs()
*  @author Gene Kelley <gene@bizflowdesigns.com>
*  @created 2014-11-21 12:20 PM
* 
*/
#include <stdio.h>
#define STLEN 10
int main(void)
{
	char words[STLEN];
	
	puts("Enter strings (empty line to quit):");
	while (fgets(words, STLEN, stdin) != NULL && words[0] != '\n')
		fputs(words, stdout);
	puts("Done.");
	
	return 0;
}
