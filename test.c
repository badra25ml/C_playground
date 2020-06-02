#include <stdio.h>

/* print Fahrenheit-Celcius table
    for fahr = 0, 20, ..., 300
    */

main(){
  float fahr, celcius;
  int lower, upper, step;

  lower = 0;        /* lower limit of temperature table */
  upper = 300;     /*  upper limit */
  step = 20;      /*   step size */

  celcius = lower;
  printf("Celcius - Fahr\n");
  while (celcius <= upper){
    fahr = 32.0 + (9.0 * celcius) / 5;
    printf("%4.0f   %7.1f\n", celcius, fahr);
    celcius = celcius + step;
  }

}
