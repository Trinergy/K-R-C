#include <stdio.h>

/* print Fahrenheit-Celsius table
  for fahr = 0, 20, ..., 300 */

int main()
{
  float fahr, celsius;

  #define LOWER 0 /*lower limit of temperature table */
  #define UPPER 300; /*upper limit */
  #define STEP 20; /*step size */

  fahr = UPPER;

  printf("Fahrenheit Celsius \n");
  while (fahr >= LOWER) {
    celsius = (5.0/9.0) * (fahr-32.0);
    printf("%6.0f %11.1f\n", fahr, celsius);
    fahr = fahr - STEP;
  }
}