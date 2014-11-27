/* Listing 11.7: fgets1.c -- using fgets() and fputs()
* @author Gene Kelley <gene@bizflowdesigns.com>
* @created 2014-11-21 11:45 AM
* 
*/
#include <stdio.h>
#define STLEN 14
int main(void)
{
	char words[STLEN];
	
	puts("Enter a string, please.");
	fgets(words, STLEN, stdin);
	printf("Your string twice (puts(), then fputs()):\n");
	puts(words);
	fputs(words, stdout);
	
	puts("Enter another string please.");
	fgets(words, STLEN, stdin);
	printf("Your string twice (puts(), then fputs()):\n");
	puts(words);
	fputs(words, stdout);
	puts("Done.");
	
	return 0;
}
