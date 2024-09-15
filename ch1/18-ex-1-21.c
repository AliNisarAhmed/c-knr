#include <stdio.h>
#define TAB_LENGTH 8

int tabs_to_print(int num_spaces) { return num_spaces / TAB_LENGTH; }

int spaces_to_print(int num_spaces) { return num_spaces % TAB_LENGTH; }

void print_tabs(int num_tabs) {
  for (int i = 0; i < num_tabs; i++) {
    putchar('\t');
  }
}

void print_spaces(int num_spaces) {
  for (int i = 0; i < num_spaces; i++) {
    putchar(' ');
  }
}

int main(void) {
  int c = getchar();
  int num_spaces;
  int i;

  while (c != EOF) {
    if (c == ' ') {
      num_spaces = 1;
      int next_char = getchar();
      while (next_char == ' ' && next_char != EOF) {
        num_spaces++;
        next_char = getchar();
      }
      if (num_spaces >= TAB_LENGTH) {
        int num_tabs = tabs_to_print(num_spaces);
        print_tabs(num_tabs);
      }
      int num_spaces_to_print = spaces_to_print(num_spaces);
      print_spaces(num_spaces_to_print);
      c = next_char;
    } else {
      putchar(c);
      num_spaces = 0;
      c = getchar();
    }
  }

  return 0;
}
