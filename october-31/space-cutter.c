#include <stdio.h>

int main () {
  int c, nc;

  while ((c = getchar()) != EOF) {
    if (c == ' ')
      ++nc;
    else
      nc = 0;
    while (nc > 1) {
      c -= ' ';
      --nc;
    }

    putchar(c);
  }
}


// chat gpt correction below


// #include <stdio.h>

// int main() {
//   int c;
//   int was_space = 0; // flag indicating whether the previous character was a space

//   while ((c = getchar()) != EOF) {
//     if (c == ' ') {
//       if (!was_space) {    // if this is the first space in the sequence
//         putchar(c);        // output it
//         was_space = 1;     // set the flag
//       }
//     } else {
//       putchar(c);          // if the character is not a space, just output it
//       was_space = 0;       // reset the flag
//     }
//   }

//   return 0;
// }
