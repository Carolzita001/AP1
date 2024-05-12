#include <stdio.h>
#include <stdlib.h>

int main()
{
    float produto,porcentagem,desconto,valorFinalDoProduto;

    printf("\nInsira o valor do produto: ");
    scanf("%f", &produto);
    printf("\nInsira o valor do desconto a ser aplicado em porcentagem: ");
    scanf("%f", &porcentagem);

    desconto = produto*(porcentagem/100);
    valorFinalDoProduto = produto - desconto;

    printf("\nO valor final do produto com o desconto aplicado e: %.0f", valorFinalDoProduto);

    return 0;
}
