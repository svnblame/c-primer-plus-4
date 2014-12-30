/* Listing 11.27: copy3.c -- strncopy() demo
 * The strcpy() function shares a problem with strcat() -- neither checks
 * to see whether the source string actually fits in the target string.
 * The safer way to copy strings is to use strncpy(). It takes a third
 * argument, which is the maximum number of characters to copy.
 * 
 * This is a rewrite of Listing 11.25 (copy1.c), using strncpy() instead
 * of strcpy(). To illustrate what happens if the source string is too
 * large, it uses a rather small size (7 elements, 6 characters) for the
 * target strings.
*/
 #include <stdio.h>
 #include <string.h>  /* declares strncpy() */
 #define SIZE 40
 #define TARGETSIZE 7
 #define LIM 5
 char * s_gets(char * st, int n);

 int main(void)
 {
 	char qwords[LIM][TARGETSIZE];
 	char temp[SIZE];
 	int i = 0;

 	printf("Enter %d words beginning with q:\n", LIM);
 	while (i < LIM && s_gets(temp, SIZE))
 	{
 		if (temp[0] != 'q')
 			printf("%s doesn't begin with q!\n", temp);
 		else
 		{
 			strncpy(qwords[i], temp, TARGETSIZE - 1);
 			qwords[i][TARGETSIZE - 1] = '\0';
 			i++;
 		}
 	}
 	puts("Here are the words accepted:");
 	for (i = 0; i < LIM; i++)
 		puts(qwords[i]);

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
		else // must have words[i] == '0'
			while (getchar() != '\n')
				continue;
	}
	return ret_val;
}
 