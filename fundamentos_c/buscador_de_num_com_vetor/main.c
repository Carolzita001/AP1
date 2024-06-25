#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese_Brazil");

    int vetor[10];
    int i, num_procurado, encontrado = 0;

    printf("Digite 10 números inteiros:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &vetor[i]);
    }

    printf("Digite o número a ser procurado:\n");
    scanf("%d", &num_procurado);

    for (i = 0; i < 10; i++) {
        if (vetor[i] == num_procurado) {
            printf("O número %d foi encontrado na posição %d.\n", num_procurado, i + 1);
            encontrado = 1;
            break;
        }
    }

    if (!encontrado) {
        printf("O número %d não foi encontrado no vetor.\n", num_procurado);
    }

    return 0;
}