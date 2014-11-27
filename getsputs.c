/* Listing 11.6: getsputs.c - using gets() and puts()
*  @author Gene Kelley <gene@bizflowdesigns.com>
*  @created 2014-11-21 11:21 AM
*/
#include <stdio.h>
#define STLEN 5
int main(void)
{
	char words[STLEN];
	
	puts("Enter a string, please.");
	gets(words); // Warning: Just a demonstration, gets() is not secure!
	printf("Your string twice:\n");
	printf("%s\n", words);
	puts(words);
	puts("Done.");
	
	return 0;
}
