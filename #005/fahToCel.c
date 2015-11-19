#include <stdio.h>

double celsius(double);

int main()
{
  double f;

  for(f = -40; f <= 220; f = f + 10)
    printf("%f\t%f\n", f, celsius(f));

  return 0;
}


double celsius(double f)
{
  return 5. / 9. * (f - 32);
}