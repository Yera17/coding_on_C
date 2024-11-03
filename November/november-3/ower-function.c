#include <stdio.h>
#include <ctype.h>

int ower(int c) {
  if (isalpha(c)) {
    return tolower(c);
  }
  return c;
}

int main() {
  int c;
  while ((c = getchar()) != EOF) {
    putchar(ower(c));
  }
}
