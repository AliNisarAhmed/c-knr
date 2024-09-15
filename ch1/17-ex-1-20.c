// detab

#include <stdio.h>
#define TAB_LENGTH 8

int main(void) {
  int c;
  int num_spaces;

  while ((c = getchar()) != EOF) {
    if (c == '\t') {
      num_spaces = TAB_LENGTH;
      while (num_spaces > 0) {
        putchar(' ');
        num_spaces--;
      }
    } else {
      putchar(c);
    }
  }

  return 0;
}
