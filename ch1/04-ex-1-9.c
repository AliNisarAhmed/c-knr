#include <stdio.h>
int main(void) {
  int c;
  int num_spaces = 0;

  while ((c = getchar()) != EOF) {
    if (c == ' ') {
      if (num_spaces == 0) {
        putchar(c);
        num_spaces++;
      } 
    } else {
      putchar(c);
      num_spaces = 0;
    }
  }
}
