#include <stdio.h>
#define MAXLINE 1000
#define THRESHOLD 10

int getline2(char line[], int maxline);
void copy(char to[], char from[]);

int main(void) {
  int len, c;            // current line length
  int max;               // max length seen so far
  char line[MAXLINE];    // current input line
  char longest[MAXLINE]; // longest line saved here

  max = 0;
  while ((len = getline2(line, MAXLINE)) > 0) {
    if (len > THRESHOLD) {
      printf("%s", line);
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

void copy(char to[], char from[]) {
  int i = 0;
  while ((to[i] = from[i]) != '\0') {
    i++;
  }
}
