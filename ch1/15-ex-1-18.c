#include <stdio.h>
#define MAXLINE 1000

int getline2(char line[], int maxline);
int copy(char to[], char from[], int len);

int main(void) {
  int len, c;               // current line length
  int max;                  // max length seen so far
  char line[MAXLINE];       // current input line
  char blank_free[MAXLINE]; // longest line saved here

  max = 0;
  while ((len = getline2(line, MAXLINE)) > 0) {
    int copied_chars = copy(blank_free, line, len);
    if (copied_chars > 0) {
      printf("%s", blank_free);
    }
  }
  return 0;
}

// reads a line into s, returns its length
int getline2(char s[], int lim) {
  int c, i;
  for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; i++) {
    s[i] = c;
  }

  if (c == '\n') {
    s[i] = c;
    i++;
  }
  s[i] = '\0';
  return i;
}

int copy(char to[], char from[], int len) {
  int i = len - 1;
  if (from[i] == '\n') {
    i--;
  }
  while (i >= 0 && (from[i] == ' ' || from[i] == '\t')) {
    i--;
  }
  if (i < 0) {
    return 0;
  }
  int j;
  for (j = 0; j <= i; j++) {
    to[j] = from[j];
  }

  to[j++] = '\n';
  to[j++] = '\0';
  return j;
}
