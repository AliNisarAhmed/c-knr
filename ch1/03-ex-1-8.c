#include <stdio.h>
int main(void) {
  int num_blanks = 0;
  int num_tabs = 0;
  int num_newlines = 0;

  int c;

  while ((c = getchar()) != EOF) {
    if (c == '\t') {
      num_tabs++;
    } else if (c == ' ') {
      num_blanks++;
    } else if (c == '\n') {
      num_newlines++;
    }
  }

  printf("num tabs: %d\n", num_tabs);
  printf("num blanks: %d\n", num_blanks);
  printf("num newlines: %d\n", num_newlines);
}
