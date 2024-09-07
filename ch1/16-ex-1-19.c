
#include <stdio.h>

#define MAXLINE 1000

void reverse(char input[], int len);
int getline2(char line[], int maxline);

int main(void) {
  int len;
  char line[MAXLINE];       // current input line
  char blank_free[MAXLINE]; // longest line saved here

  while ((len = getline2(line, MAXLINE)) > 0) {
    reverse(line, len);
    printf("%s", line);
  }
  return 0;
}

// reverses a char string, leaving the new line and null terminator at the end
void reverse(char input[], int len) {
  int i = 0;
  int j = len - 1;
  if (input[j] == '\n') {
    j--;
  }
  while (i <= j) {
    char temp = input[i];
    input[i] = input[j];
    input[j] = temp;
    i++;
    j--;
  }
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
