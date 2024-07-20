#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese_Brazil");

    int matriz[3][3];
    int i, j, num;
    int encontrado = 0;

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("Insira o n�mero da linha %d / Coluna %d da metriz 3x3: ", i+1, j+1);
            scanf("%d", &matriz[i][j]);
        }
        
    }

    printf("Insira um n�mero: ");
    scanf("%d", &num);

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            if (matriz[i][j] == num) {
                encontrado = 1;
                break;
            }
        }
        if (encontrado) break;
    }

    if (encontrado) {
        printf("O n�mero %d est� presente na matriz.\n", num);
    } else {
        printf("O n�mero %d n�o est� presente na matriz.\n", num);
    }

    return 0;
}