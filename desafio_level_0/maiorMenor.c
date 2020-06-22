#include "stdio.h"

int main(int argc, char const *argv[])
{
  double maior, menor, aux;

  scanf("%lf %lf", &maior, &menor);

  if (menor > maior) {
    //trocar os numeros
    aux = maior;
    maior = menor;
    menor = aux;
  }


  printf("Maior: %.1lf\n", maior);
  printf("Menor: %.1lf\n", menor);

  return 0;
}
