#include <stdio.h>

int main()
{
   char heart[] = "I love Tillie!";
   const char *head = "I love Millie!";
   int i;
   
   // Both can use array notation
   for (i = 0; i < 6; i++)
      putchar(heart[i]);
   
   putchar('\n');
   
   for (i = 0; i < 6; i++)
      putchar(head[i]);
   
   putchar('\n');
   
   // Both can use pointer addition
   for (i = 0; i < 6; i++)
     putchar(*(heart + i));
   putchar('\n');
   for (i = 0; i < 6; i++)
      putchar(*(head + i));
   putchar('\n');
   
   // Only pointer version can use increment operator
   while (*(head) != '\0') /* stop at end of string */
      putchar(*(head++)); /* print character, advance pointer */
   
   putchar('\n');
   
   const char * p1 = "Klingon";

   printf("Klingon");
   printf(": Beware the %ss!\n", "Klingon");
   
   putchar('\n');
   
}

