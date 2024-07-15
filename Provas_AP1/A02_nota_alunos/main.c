#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main() {
    setlocale(LC_ALL,"Portuguese_Brazil");

    char nome[3][50];
    int matricula[3];
    int i, j;
    float nota[3][3];
    float media[3];

    for (i = 0; i < 3; i++) {
        printf("Insira o nome da aluna(o) %d: \n", i + 1);
        fgets(nome[i], 50, stdin);
        fflush(stdin);
        nome[i][strcspn(nome[i], "\n")] = '\0';

        printf("Insira a matrícula da aluna(o) %d: \n", i + 1);
        scanf("%d", &matricula[i]);
        fflush(stdin);

        printf("Insira as notas da aluna(o) %d: \n", i + 1);
        for (j = 0; j < 3; j++) {
            printf("Nota %d: ", j + 1);
            scanf("%f", &nota[i][j]);
            fflush(stdin);

            while (nota[i][j] < 0 || nota[i][j] > 10) {
                printf("Nota inválida! Insira uma nota entre 0 e 10: ");
                scanf("%f", &nota[i][j]);
                fflush(stdin);
            }
        }

        media[i] = (nota[i][0] + nota[i][1] + nota[i][2]) / 3;
    }

    for (i = 0; i < 3; i++) {
        printf("\nAluna(o) %d:\n", i + 1);
        printf("Nome: %s\n", nome[i]);
        printf("Matríula: %d\n", matricula[i]);
        printf("Notas: %.2f, %.2f, %.2f\n", nota[i][0], nota[i][1], nota[i][2]);
        printf("Média: %.2f\n", media[i]);
    }

    return 0;
}