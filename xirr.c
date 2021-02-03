#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char const *argv[])
{
  if (argc == 4) {
    char *ptr;

    double amount = strtod(argv[1], &ptr);
    double rate = strtod(argv[2], &ptr);
    double period = strtod(argv[3], &ptr);

    double ret = amount / pow(1 + rate, period);
    printf("%lf", ret);
    return(0);
  }

  return(1);
}
