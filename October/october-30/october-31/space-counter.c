#include <stdio.h>

int main () {
  int c, nc;

  while ((c = getchar()) != EOF) {
    if (c == '\n' || c == '\t' || c == ' ')
      ++nc;
  }
  printf("%d number of spaces, or tabs, or new lines\n", nc);
}
