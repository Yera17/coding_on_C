// Print Celcius - Fahrenheit Table

#include <stdio.h>
#define lower -60 // lower bound of the table
#define upper 100 // upper bound
#define step 20 // Increment of each step of while loop

int main() {
  float celsius, fahr;
  printf("Celcius - Fahrenheit\n");
  while (celsius <= upper) {
    fahr = celsius * (9.0 / 5.0) + 32.0;
    printf("%5.0f°C - %3.0f°F\n", celsius, fahr);
    celsius += step;
  }
}
