#include <stdio.h>

int main() {
  int c, i, nwhite, nother;
  int ndigits[10];
  for(i = 0; i < 10; ++i)
    ndigits[i] = 0;

  while ((c = getchar()) != EOF) {
    if (c >= '0' && c <= '9') {
      ++ndigits[c - '0'];
    } else if (c == '\n' || c == ' ' || c == '\t') {
      ++nwhite;
    } else {
      ++nother;
    }
  }
  printf("digits =");

  for(i=0; i<10; ++i) {
    printf("  %d:", i);
    printf(" %d  |", ndigits[i]);
  }


  printf("\nwhite space: %d, other chars: %d\n", nwhite, nother);
}
