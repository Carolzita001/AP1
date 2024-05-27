#include <stdio.h>
#include <stdlib.h>

int main(){
    int numero;

    printf("\nInsira um numero inteiro: ");
    scanf("%d", &numero);

    if (numero > 0){
        printf("\n Esse numero e positivo!");
    }else if (numero < 0){
        printf("\nEsse numero e negativo!");
    }else {
        printf("\nEsse numero e nulo!");
    }

    return 0;

    /*switch (numero)
    {
    case 1:
         printf("\n%d E negativo", numero < 0);
        break;
    case 2:
         printf("\n%d E positivo", numero > 0);
        break;
    default:
         printf("\n%d E nulo", numero == 0);
        break;
    }*/
}