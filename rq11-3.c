/* Chapter 11, Review Question 3 */
#include <stdio.h>
#include <string.h>
int main(void)
{
	char food[] = "Yummy";
	char *ptr;
	
	ptr = food + strlen(food);
	while (--ptr >= food)
		puts(ptr);
	return 0;
}
