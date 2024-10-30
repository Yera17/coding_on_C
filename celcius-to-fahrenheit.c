// Print Celcius - Fahrenheit Table

#include <stdio.h>

int main() {
  float celsius, fahr;
  int lower, upper, step;
  lower = -60; // lower bound of the table
  upper = 100; // upper bound
  step = 20; // Increment of each step of while loop
  celsius = lower;
  printf("Celcius - Fahrenheit\n");
  while (celsius <= upper) {
    fahr = celsius * (9.0 / 5.0) + 32.0;
    printf("%7.0f - %3.0f\n", celsius, fahr);
    celsius += step;
  }
}
