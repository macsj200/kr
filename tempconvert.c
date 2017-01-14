#include <stdio.h>

int main(int argc, char const *argv[]) {
  /* convert Celsius to Fahrenheit */
  float celsius, fahrenheit;
  float min_celsius, max_celsius, celsius_step;

  // initialize temperature constants
  min_celsius = -100.0;
  max_celsius = 100.0;
  celsius_step = 10.0;

  // initialize temperature value
  celsius = max_celsius;

  // print header
  printf("Celsius to Fahrenheit\n");

  // print table
  while(celsius >= min_celsius) {
    fahrenheit = (9.0/5.0 * celsius) + 32;
    printf("%6.2f %6.2f\n", celsius, fahrenheit);

    celsius -= celsius_step;
  }

  return 0;
}
