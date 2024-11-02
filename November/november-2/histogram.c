#include <stdio.h>

int main() {
  int c, nc, maxNc, maxNl;
  int arr[20];
  for (int i = 0; i <= 20; ++i) {
    arr[i] = 0;
  }
  nc = maxNc = maxNl = 0;

  while ((c = getchar()) != EOF) {
    if (c == '\n' || c == ' ' || c == '\t') {
      ++arr[nc - 1];
      if (nc > maxNc) {
        maxNc = nc;
      }
      nc = 0;
    } else {
      ++nc;
    }
  }
  
  if (nc > 0)
    ++arr[nc - 1];

  printf("\n---------------------------------------------\n");

  int nletters[maxNc];
  for (int i = 0; i < maxNc; ++i) {
    nletters[i] = arr[i];
    if (nletters[i] > maxNl)
      maxNl = nletters[i];
    for (int j = 0; j < nletters[i]; ++j) {
      printf("%c", '*');
    }
    printf("\n");
  }

  printf("---------------------------------------------\n");

  for (int i = maxNl; i > 0; --i) {
    for (int j = 0; j < maxNc; ++j) {
      if (nletters[j] >= i) {
        printf("%c", '*');
      } else {
        printf(" ");
      }
    }
    printf("\n");
  }
}
