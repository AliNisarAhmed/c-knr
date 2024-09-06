// histogram

#define IN 1
#define OUT 0
#define MAX_WORD_LENGTH 46

#include <stdio.h>
int main(void) {
  int word_lengths[MAX_WORD_LENGTH];

  int i;
  for (int i = 0; i < MAX_WORD_LENGTH; i++) {
    word_lengths[i] = 0;
  }

  int c;
  int state = OUT;
  int word_length = 0;
  int max_word_length;

  while ((c = getchar()) != EOF) {

    if (c == ' ' || c == '\n' || c == '\t') {
      if (state == IN) {
        state = OUT;
        word_lengths[word_length]++;
        if (word_length > max_word_length) {
          max_word_length = word_length;
        }
        word_length = 0;
      }
    } else {
      state = IN;
      word_length++;
    }
  }

  for (i = 1; i <= max_word_length; i++) {
    printf("%d: ", i);
    for (int j = 0; j < word_lengths[i]; j++) {
      printf("=");
    }
    printf("\n");
  }
}
