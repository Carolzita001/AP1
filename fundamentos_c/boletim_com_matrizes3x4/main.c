#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL,"Portuguese_Brazil");

    float matriz[3][4];
    int i, j;
    float media[3];

    printf("Insira as notas dos alunos:\n");
    for (i = 0; i < 3; i++) {
        printf("Aluno %d: \n", i+1);
        for (j = 0; j < 4; j++) {
            printf("=> nota %d: ", j+1);
            scanf("%f", &matriz[i][j]);
        }
    }

    for (i = 0; i < 3; i++) {
        media[i] = 0;
        for (j = 0; j < 4; j++) {
            media[i] += matriz[i][j];
        }
        media[i] /= 4;
    }

    printf("Médias dos alunos:\n");
    for (i = 0; i < 3; i++) {
        printf("Aluno %d: %.2f\n", i+1, media[i]);
    }

    return 0;
}