#include <stdio.h>
#include <stdlib.h>

int main()
{
    float peso;
    float altura;
    float operacao;

    printf("\nInsira seu peso: ");
    scanf("%f",&peso);
    printf("\nInsira sua altura: ");
    scanf("%f",&altura);

    operacao = peso / (altura * altura);

    printf("\nEste e seu IMC: %.0f", operacao);
    
    return 0;
}
