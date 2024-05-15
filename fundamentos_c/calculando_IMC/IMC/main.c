#include <stdio.h>
#include <stdlib.h>

int main()
{
    float peso,altura,operacao;

    printf("\nInsira seu peso: ");
    scanf("%f", &peso);
    printf("\nInsira sua altura: ");
    scanf("%f", &altura);

    operacao = peso / pow(altura, 2);

    printf("\nEste e seu IMC: %.0f", operacao);

    if(operacao < 16.9){
            printf("\nVoce esta muito abaixo do peso!");
                } else if(operacao >= 17 && operacao <= 18.4){
                        printf("\nVoce esta abaixo do peso!");
                            } else if(operacao >= 18.5 && operacao <= 24.9){
                                printf("\nVoce esta no peso ideal!");
                                    } else if(operacao >= 25 && operacao <= 29.9){
                                        printf("\nVoce esta acima do peso!");
                                            } else if(operacao >= 30 && operacao <= 34.9){
                                                printf("\nVoce esta no nivel 1 de obesidade!");
                                                    } else if(operacao >= 35 && operacao <= 40){
                                                        printf("\nVoce esta no nivel 2 de obesidade!");
                                                            } else if(operacao > 40){
                                                                printf("\nVoce esta no nivel 3 de obesidade!");
                                                                }


    return 0;
}
