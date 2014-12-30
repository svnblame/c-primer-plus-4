/* Listing 11.24: starsrch.c -- use strncmp()
 * Limit a string search to the first 5 chars
 */
 #include <stdio.h>
 #include <string.h>
 #define LISTSIZE 6
 int main()
 {
 	const char * list[LISTSIZE] = 
 	{
 		"astronmy", "astounding",
 		"astrophysics", "ostracize",
 		"asterism", "astrophobia"
 	};
 	int count = 0;
 	int i;

 	for (i = 0; i < LISTSIZE; i++)
 		if (strncmp(list[i],"astro", 5) == 0)
 		{
 			printf("Found: %s\n", list[i]);
 			count++;
 		}
 		printf("The list contained %d words beginning" 
 			" with astro.\n", count);

 		return 0;
 }
