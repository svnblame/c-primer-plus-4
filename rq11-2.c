/* Chapter 11, Review Question 2 */
#include <stdio.h>
int main(void)
{
	char note[] = "See you at the snack bar.";
	char *ptr;
	
	ptr = note;
	puts(ptr);
	puts(++ptr);
	note[7] = '\0';
	puts(note);
	puts(++ptr);
	return 0;
}
