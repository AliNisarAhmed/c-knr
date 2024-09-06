#include <stdio.h>
float fahr_to_celc(int fahr) { return 5 * (fahr - 32) / 9.0; }

int main(void) {
  int lower = 0;
  int upper = 300;
  int step = 20;

  int fahr = lower;

  while (fahr <= upper) {
    float c = fahr_to_celc(fahr);
    printf("%d\t%.2f\n", fahr, c);
    fahr += step;
  }
}
