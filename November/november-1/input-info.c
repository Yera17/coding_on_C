#include <stdio.h>
#define true 1
#define false 0

int main () {
  int c, nl, nc, nw, inword;
  inword = false;
  c = nc = nl = nw = 0;
  while ((c = getchar()) != EOF) {
    ++nc;
    if (c == '\n')
      ++nl;
    if (c == '\n' || c == ' ' || c == '\t') {
      inword = false;
    } else if (inword == false) {
      inword = true;
      ++nw;
    }
  }
  
  printf("nl: %d, nw: %d, nc: %d", nl, nw, nc);
}
