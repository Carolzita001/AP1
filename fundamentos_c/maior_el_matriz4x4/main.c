#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese_Brazil");

    int matriz[4][4];
    int i, j, maior;

    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("Insira o número da linha %d / Coluna %d da metriz 4x4: ", i+1, j+1);
            scanf("%d", &matriz[i][j]);
        }
        
    }
    
    maior = matriz[0][0];

    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            if(matriz[i][j] > maior)
            {
                maior = matriz[i][j];
            }
        }
        
    }

    printf("O maior número da matriz é %d.", maior);

    return 0;
}