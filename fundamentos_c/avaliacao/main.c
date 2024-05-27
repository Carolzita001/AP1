#include <stdio.h>
#include <stdlib.h>

int main(){
    int avaliacao;

    printf("Insira um numero de 1 a 5 para nos avaliar: \n");
    scanf("%d", &avaliacao);

    switch (avaliacao)
    {
    case 1:
        printf("Voce avaliou como 'Pessimo'. Obrigada pela avaliacao!");
        break;
    case 2:
        printf("Voce avaliou como 'Ruim'. Obrigada pela avaliacao!");
        break;
    case 3:
        printf("Voce avaliou como 'Medio'. Obrigada pela avaliacao!");
        break;

    case 4:
        printf("Voce avaliou como 'Bom'. Obrigada pela avaliacao!");
        break;

    case 5:
        printf("Voce avaliou como 'Exelente'. Obrigada pela avaliacao!");
        break;
    }
    return 0;
}