#include <stdio.h>
#define MAXLINE 1000    /* maximum input line size */

int get_line(char s[], int lim);
void copy(char s1[], char s2[], int len);

int main() {            /* find longest line */
  int len;              /* current line length */
  int max;              /* maximum length seen so far */
  char line[MAXLINE];   /* current input line */
  char save[MAXLINE];   /* longest line, saved */
  max = 0;

  while ((len = get_line(line, MAXLINE)) > 0)
    if (len > 80) {
      max += len;
      copy(line, save, max);
    }

      /* there was a line */
  save[max] = '\0';
  printf("%s\n", save);

  return 0;
}

int get_line(char s[], int lim) { /* get line into s, return length */
  int c, i;

  for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
    s[i] = c;

  if (c == '\n') {
    s[i] = c;
    ++i;
  }
  return i;
}

void copy(char s1[], char s2[], int len) { /* copy s1 to s2; assume s2 big enough */
  int i = 0;
  int j = len;
  if (s2[0] != '\0') {
    while ((s2[j] = s1[i]) != '\0') {
      ++j;
      ++i;
    }
  } else {
    while((s2[i] = s1[i]) != '\0') {
      ++i;
    }
  }
}
