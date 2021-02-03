#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char const *argv[])
{
  if (argc == 4) {
    double rate = strtod(argv[1], NULL);
    double amount = strtod(argv[2], NULL);
    double period = strtod(argv[3], NULL);

    double ret = amount / pow(1 + rate, period);
    printf("%lf", ret);
    return(0);
  }

  return(1);
}
