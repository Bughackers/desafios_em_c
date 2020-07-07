#include "stdio.h"
#include "stdlib.h"

int main(int argc, char const *argv[])
{
  int quantidade;
  int dia, mes, ano;

  printf("\33[1;34mQuantas datas deseja?\33[m\n");
  scanf("%d", &quantidade);

  printf("\33[1;32mQual ano deseja?\33[m\n");
  scanf("%d", &ano);

  printf("\33[1;35mEssas são suas datas:\33[m\n");
  while (quantidade > 0){
    dia = rand() % 31;

    if(dia == 0) {
      dia++;
    }

    mes = rand() % 13;

    if(mes == 0) {
      mes++;
    }

    printf("%02d/%02d/%02d\n",dia, mes, ano);

    quantidade --;
  }
  
  return 0;
}
