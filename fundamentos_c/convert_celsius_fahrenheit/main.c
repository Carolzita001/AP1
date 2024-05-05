#include <stdio.h>
#include <stdlib.h>
//#define constmult 1.8;
//#define soma 32;
const float constmult = 1.8;
const int soma = 32;

int main()
{
  int tempcel;
  float operacao;

  printf("\nInsira a temperatura em celsius: ");
  scanf("%i", &tempcel);

  operacao = (tempcel * constmult) + soma;

  printf("Em fahrenheit e: %.0f\n", operacao);

  return 0;
}
