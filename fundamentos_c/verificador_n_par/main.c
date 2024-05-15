#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero;
    float verificacao;

    printf("\nInsira um numero para realizar a verificacao: ");
    scanf("%d", &numero);

    verificacao = numero%2;

    if(verificacao == 0){
        printf("\nO numero e par!");
    }else {
        printf("\nO numero e impar!");
    }
    return 0;
}
