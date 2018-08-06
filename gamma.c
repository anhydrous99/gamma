#include <stdio.h>
#include <math.h>

static double x[10] = { 0.137793,
                        0.729455,
                        1.80834,
                        3.40143,
                        5.5525,
                        8.33015,
                        11.8438,
                        16.2793,
                        21.9966,
                        29.9207};

static double w[10] = { 0.308463,
                        0.401115,
                        0.218076,
                        6.20889e-2,
                        9.50138e-3,
                        7.53015e-4,
                        2.82585e-5,
                        4.24908e-7,
                        1.83954e-9,
                        9.91181e-11};

double gamma(double input)
{
  double s = 0;
  for (int i = 0; i < 10; i++)
    s += w[i] * pow(x[i], input - 1);
  return s;
}

int main()
{
  double param, result;
  param = 1.5;
  result = gamma(param);
  printf("Created gamma(%f) = %f\n", param, result);

  result = tgamma(param);
  printf("math.h tgamma(%f) = %f\n", param, result);
}
