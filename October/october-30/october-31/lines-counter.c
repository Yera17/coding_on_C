#include <stdio.h>

int main () { // counts each line and prints at the end
  int nc, c;

  while ((c = getchar()) != EOF) {  // while loop is asigning c with input and
                                    // if c is not EOF, it keeps looping
    if (c == '\n')  // checks if new line is entered
      ++nc;         // if so, nc gets incremented by 1
  }

   // when loop stops the code below outputs the result grammatically correct

  if (nc == 0)
    return printf("No line was entered\n");
  else if (nc == 1)
    return printf("%d line was entered\n", nc);

  return printf("%d lines were entered\n", nc);
}
