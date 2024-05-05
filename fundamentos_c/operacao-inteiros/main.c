#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1,n2,adicao,subtracao,multiplicacao,divisao;

    printf("\nDigite o numero inteiro 1: ");
    scanf("%i", &n1);
    printf("\nDigite o numero inteiro 2: ");
    scanf("%i", &n2);

    adicao = n1 + n2;
    subtracao = n1 - n2;
    multiplicacao = n1 * n2;
    divisao = n1 / n2;

    printf("\nAplicando adicao entre os dois inteiros: %d", adicao);
    printf("\nAplicando subtracao entre os dois inteiros: %d", subtracao);
    printf("\nAplicando multiplicacao entre os dois inteiros: %d", multiplicacao);
    printf("\nAplicando divisao entre os dois inteiros: %d", divisao);

    return 0;
}
