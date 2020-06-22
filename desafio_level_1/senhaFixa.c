#include "stdio.h"

#define SENHA 202020

int main(int argc, char const *argv[])
{
  int tentativa;
  int i;

  // scanf("%d", &tentativa);

  // //tentativas infinitas
  // while (tentativa != SENHA) {
  //   printf("\33[1;31mSenha Inválida\33[m\n");
  //   scanf("%d", &tentativa);
  // }
  
  // printf("\33[1;32mAcesso Liberado\33[m\n");

  for ( i = 0; i < 3; i++) {
    scanf("%d", &tentativa);

    if (tentativa != SENHA) {
      printf("\33[1;31mSenha Inválida\33[m\n");
      printf("\33[1;33m%d tentativa(s) falta %d tentativa(s)\33[m\n", (i+1), (3 - (i+1)));
    } else {
      i = 3;
    }
  }
  

  if (tentativa != SENHA) {
    printf("\33[1;31mSuas tentativas acabaram!!!\33[m\n");
  } else {
    printf("\33[1;32mAcesso Liberado\33[m\n");
  } 

  return 0;
}
