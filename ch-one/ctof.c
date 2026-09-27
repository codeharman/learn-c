#include <stdio.h>

int main() {
  float fahr, cel;
  float low, up, step;

  low = 0;
  up = 300;
  step = 20;

  cel = low;

  while (cel <= up) {
    fahr = (cel * 9.0/5.0) + 32;
    printf("%3.0f %6.0f\n", cel, fahr);
    cel += step;
  }
}
