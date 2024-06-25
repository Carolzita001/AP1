#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese_Brazil");

    int vetor[8];
    int i, maior, menor;

    printf("Digite 8 números inteiros:\n");
    for (i = 0; i < 8; i++) {
        scanf("%d", &vetor[i]);
    }

    maior = menor = vetor[0];
    for (i = 1; i < 8; i++) {
        if (vetor[i] > maior) {
            maior = vetor[i];
        }
        if (vetor[i] < menor) {
            menor = vetor[i];
        }
    }

    printf("O maior elemento do vetor é: %d\n", maior);
    printf("O menor elemento do vetor é: %d\n", menor);

    return 0;
}