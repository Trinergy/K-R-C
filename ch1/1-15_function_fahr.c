#include <stdio.h>

float ftoc(float fahr);

int main()
{
  float f;

  printf("fahrenheit %12.1f celsius %12.1f", f,ftoc(f));
} 

float ftoc(float fahr)
{
  float celsius;
  celsius = (5.0/9.0) * (fahr-32.0);
  return celsius;
}