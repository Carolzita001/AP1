#include <stdio.h>
#include <stdlib.h>

int main (){
    char operador;
    float n1, n2;

    printf("\nQual operacao vc quer realizar?(+,-,*,/): ");
    scanf(" %c", &operador);
    printf("\nInsira o primeiro numero da operacao: ");
    scanf("%f", &n1);
    printf("\nInsira o segundo numero da operacao: ");
    scanf("%f", &n2);


    switch (operador)
    {
        case '+':
                printf("%.2f", n1 + n2);
            break;
        case '-':
                printf("%.2f", n1 - n2);
            break;
        case '*':
                printf("%.2f", n1 * n2);
            break;
        case '/':
                printf("%.2f", n1 / n2);
            break;
        default:
                printf("\nERRO!!");
    }

    return 0;
}