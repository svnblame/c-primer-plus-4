/* array assignment */
#include <stdio.>
#define SIZE 50
int main(void) {
   int counter, evens[SIZE];
   
   for (counter = 0; counter < SIZE; counter++) {
      evens[counter] = 2 * counter;
   }
}

