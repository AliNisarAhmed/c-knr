#include <stdio.h>

#define MAXLINE 1000

#define TRUE (1 == 1)
#define FALSE !TRUE

#define BREAKING_POINT 10


int getline2(char line[], int max_line);
void fold_line(char line[], char fold_str[], int n_break);

int main(void) {
  char line[MAXLINE];
  char fold_str[MAXLINE];

  while ((getline2(line, MAXLINE)) > 0) {
    printf("%s", line);
    fold_line(line, fold_str, BREAKING_POINT);
    printf("%s", fold_str);
  }

  return 0;
}

void fold_line(char line[], char fold_str[], int n_break) {
  int i, j;
  int col = 0;

  for (i = 0, j = 0; line[i] != '\0'; ++i, ++j) {
    fold_str[j] = line[i];
    if (fold_str[j] == '\n') {
      col = 0;
    }
    col++;

    if (col == n_break) {
      fold_str[++j] = '-';
      fold_str[++j] = '\n';
      col = 0;
    }
  }
  fold_str[j] = '\0';
}


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
