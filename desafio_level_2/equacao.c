#include "stdio.h"
#include "math.h"

int main(int argc, char const *argv[])
{
  //ax² + bx + c = 0
  double a, b, c;
  double delta;
  double x1, x2;

  printf("\33[1;32m----------------------------\33[m\n");
  printf("\33[1;31mLembrando:\33[m \33[1;34max² + bx + c = 0.\33[m\n");  
  printf("\33[1;32m----------------------------\33[m\n");

  scanf("%lf %lf %lf", &a, &b, &c);

  //delta = b² - 4.a.c
  delta = pow(b, 2) - 4*a*c;

  if(delta >= 0) {
    x1 = (-b + sqrt(delta))/(2*a);
    x2 = (-b - sqrt(delta))/(2*a);

    printf("\33[1;32mx1 = %.2lf\33[m\n", x1);
    printf("\33[1;32mx2 = %.2lf\33[m\n", x2);
  } else {
    printf("\33[1;31mAs raízes não são reais!!!\33[m\n");
  }
  
  return 0;
}
