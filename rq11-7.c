/* Chapter 11, Review Question 7 */
#include <stdio.h>
#include <string.h>
#define M1 "How are ya, sweetie? "
char M2[40] = "Beat the clock.";
char * M3 = "chat";
int main(void)
{
	char words[80];
	printf(M1);
	puts(M1);
	puts(M2);
	puts(M2 + 1);
	strcpy(words, M2);
	strcat(words, " Win a toy.");
	puts(words);
	words[4] = '\0';
	puts(words);
	while (*M3)
		puts(M3++);
	puts(--M3);
	puts(--M3);
	M3 = M1;
	puts(M3);
	return 0;
}
