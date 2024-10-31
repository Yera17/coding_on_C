#include <stdio.h>

int main() {  /* copy input to output; 2nd version */
  int c; // creating variable c, which type is int

  while ((c = getchar()) != EOF) // while loop which listens to a string and asigns c with the string
      putchar(c); // outputs asigned c with the string that was entered before
  // when End Of File is triggered the loop ends
  return 0; // returns 0
}

// int main() {  /* copy input to output; 1-st version */
//   int c;

//   c = getchar();
//   while (c != EOF) {
//     putchar (c);
//     c = getchar();
//   }
// }
