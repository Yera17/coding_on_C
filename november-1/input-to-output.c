#include <stdio.h>
#include <ctype.h>
#define YES 1
#define NO 0

int main () {
  int input;
  int isWord;
  isWord = NO;
  while ((input = getchar()) != EOF) {
    if (isWord && (input == '\t' || input == ' ')) {
      input = '\n';
    }
    if (isalpha(input) || isdigit(input) || (isWord && input == '\'')) {
      isWord = YES;
    } else {
      isWord = NO;
    }

    if (isWord || input == '\n')
      putchar(input);
  }
}
