#include <stdio.h>
#include <stdlib.h>

int main()
{
    int peso;
    float nota1,nota2,nota3,soma,divisao;

    printf("/nInsira sua primeira nota: ");
    scanf("%f", &nota1);
    printf("\nInsira sua segunda nota: ");
    scanf("%f", &nota2);
    printf("\nInsira sua terceira nota: ");
    scanf("%f", &nota3);

    soma = nota1 + nota2 + nota3;
    peso = 3;
    divisao = soma / peso;

    printf("\nSua media final e: %.1f", divisao);

    return 0;
}
