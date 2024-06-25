#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese_Brazil");

    int num[12];
    int vetor_dobro[1];

    printf("Insira 12 números: \n");
    for (int i = 0; i < 12; i++)
    {
        scanf("%d", &num[i]);
    }

    for (int i = 0; i < 12; i++) {
        vetor_dobro[i] = num[i] * 2;
    }

    printf("Vetor com o dobro de cada elemento:\n");
    for (int i = 0; i < 12; i++) {
        printf("%d ", vetor_dobro[i]);
    }
    printf("\n");

    return 0;
}