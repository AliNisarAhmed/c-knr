#include <stdio.h>
#define ALPHABET 26

int main(void) {
  int freqs[ALPHABET];

  for (int i = 0; i < ALPHABET; i++) {
    freqs[i] = 0;
  }

  int c;
  while ((c = getchar()) != EOF) {
    if (c >= 'a' && c <= 'z') {
      freqs[c - 'a']++;
    }
  }

  for (int i = 0; i < ALPHABET; i++) {
    printf("%c: %d\n", 'a' + i, freqs[i]);
  }
}
