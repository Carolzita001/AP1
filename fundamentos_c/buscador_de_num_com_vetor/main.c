#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese_Brazil");

    int vetor[10];
    int i, num_procurado, encontrado = 0;

    printf("Digite 10 n�meros inteiros:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &vetor[i]);
    }

    printf("Digite o n�mero a ser procurado:\n");
    scanf("%d", &num_procurado);

    for (i = 0; i < 10; i++) {
        if (vetor[i] == num_procurado) {
            printf("O n�mero %d foi encontrado na posi��o %d.\n", num_procurado, i + 1);
            encontrado = 1;
            break;
        }
    }

    if (!encontrado) {
        printf("O n�mero %d n�o foi encontrado no vetor.\n", num_procurado);
    }

    return 0;
}