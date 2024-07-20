#include <stdio.h>
#include <string.h>

int main() {
    char matriz[3][50];
    int i;

    printf("Insira os nomes para a matriz 3x3:\n");
    for (i = 0; i < 3; i++) {
        printf("Insira o nome para a linha %d: ", i+1);
        fgets(matriz[i], 50, stdin);
        matriz[i][strlen(matriz[i]) - 1] = '\0';
    }

    printf("Os nomes inseridos foram:\n");
    for (i = 0; i < 3; i++) {
        printf("%s\n", matriz[i]);
    }

    return 0;
}