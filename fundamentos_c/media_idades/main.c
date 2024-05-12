#include <stdio.h>
#include <stdlib.h>

int main()
{
    int idade1,idade2,idade3;
    float media;

    printf("\nInsira a idade numero 1: ");
    scanf("%i", &idade1);
    printf("\nInsira a idade numero 2: ");
    scanf("%i", &idade2);
    printf("\nInsira a idade numero 3: ");
    scanf("%i", &idade3);

    media = (idade1 + idade2 + idade3) / 3;

    printf("\nA media das idades inseridas e: %.0f", media);
    return 0;
}
