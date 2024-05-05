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

    if(operacao < 16.9)
        printf("\nVoce esta muito abaixo do peso!");
        else
            if('17<= operacao <= 18.4')
                printf("\nVoce esta abaixo do peso!");
                else
                    if('18.5 <= operacao <= 24.9')
                        printf("\nVoce enta no peso ideal!");
                        else
                            if('25 <= operacao <= 29.9')
                                printf("\nVoce esta acima do peso!");
                                else
                                    if('30 <= operacao <= 34.9')
                                        printf("\nVoce esta no nível 1 de obesidade!");
                                        else
                                            if('35 <= operacao <= 40')
                                                printf("\nVoce esta no nível 2 de obesidade!");
                                                else
                                                    if('operacao > 40')
                                                        printf("\nVoce esta no nível 3 de obesidade!");



    return 0;
}
