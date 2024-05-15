#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ano;

    printf("\nInsira o ano: ");
    scanf("%d", &ano);

    if(ano%4 == 0 && ano%100 != 0 || ano%400 == 0){
        printf("\nAno bissexto!");
    }else {
        printf("\nAno nao bissexto");
    }

    return 0;
}
