#include <stdio.h>

int main() {
  float fahr, cel;
  float lower, upper, step;

  lower = 0.0;
  upper = 300.0;
  step = 20.0;

  fahr = lower;
 
  printf("Fahrn to celsius table\n\n");
  printf("%3s %6s\n", "Fahr", "Celsius" );
  printf("--------------\n");

  while (fahr <= upper) {
    cel = (5.0/9.0) * (fahr - 32.0);
    printf("%3.0f %10.1f\n", fahr, cel);
    fahr += step;
  }
}
