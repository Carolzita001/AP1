#include <stdio.h>
#include <stdlib.h>

int main(){
    int numero;

    while (numero < 1 || numero > 12)
    {
        printf("\nInsira um numero de 1 a 12: ");
        scanf("%d", &numero);
    }
    

    switch (numero)
    {
    case 1:
        printf("\nJaneiro");
        break;
    case 2:
        printf("\nFevereiro");
        break;
    case 3:
        printf("\nMarco");
        break;
    case 4:
        printf("\nAbril");
        break;
    case 5:
        printf("\nMaio");
        break;
    case 6:
        printf("\nJunho");
        break;
    case 7:
        printf("\nJulho");
        break;
    case 8:
        printf("\nAgosto");
        break;
    case 9:
        printf("\nSetembro");
        break;
    case 10:
        printf("\nOutubro");
        break;
    case 11:
        printf("\nNovembro");
        break;
    case 12:
        printf("\nDesembro");
        break;
    }
    return 0;
}