/* Listing 11.28: format.c -- format a string
 * Using sprintf() to combine 3 items (2 strings and a number)
 * into a single string. Note that it uses sprintf() the same way you would
 * use printf(), except that the resulting string is stored in the array
 * formal instead of being displayed onscreen.
 */
 #include <stdio.h>
 #define MAX 20
 char * s_gets(char * st, int n);

 int main(void)
 {
 	char first[MAX];
 	char last[MAX];
 	char formal[2 * MAX + 10];
 	double prize;

 	puts("Enter your first name:");
 	s_gets(first, MAX);
 	puts("Enter your last name:");
 	s_gets(last, MAX);
 	puts("Enter your prize money:");
 	scanf("%lf", &prize);
 	sprintf(formal, "%s, %-19s: $%6.2f\n", last, first, prize);
 	puts(formal);

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
 