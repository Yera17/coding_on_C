// Print Fahrenheit - Celsius table for fahr = 0, 20, 40, ..., 300

#include <stdio.h>
#define lower 0  // lower bound of temperature table
#define upper 300 // upper bound
#define step 20 // Increment of fahr in each step of the while loop
int main () {
  float fahr, celsius;
  fahr = lower;
  printf("Fahrenheit - Celsius\n");
  while (fahr <= upper) {
    celsius = (5.0 / 9.0) * (fahr - 32.0);
    printf("%8.0f°F - %5.1f°C\n", fahr, celsius); // %4.0f: 4 is the minimum field width, 0 specifies zero digits after the decimal point.
    // Each % sign corresponds to a variable in the printf argument list:
    // For %4.0f, fahr is used because it's the first variable after the format string.
    fahr = fahr + step;
  }

  int fahrInt;
  printf("\nFahrenheit - Celsius\n");
  for (fahrInt = upper; fahrInt >= lower; fahrInt = fahrInt - step)
    printf("%8d°F - %5.1f°C\n", fahrInt, (5.0/9.0)*(fahrInt-32.0));
}
