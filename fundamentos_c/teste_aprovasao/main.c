#include <stdio.h>
#include <stdlib.h>

int main()
{
    float media, frequencia;

    printf("\nInsira sua media: ");
    scanf("%f", &media);
    printf("\nInsira sua frequencia  em porcentagem: ");
    scanf("%f", &frequencia);

    if(media >= 7 && frequencia >= 75){
        printf("\nAluno aprovado!");
    }else {
        printf("\nAluno reprovado!");
    }
    return 0;
}
