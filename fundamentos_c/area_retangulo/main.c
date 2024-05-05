#include <stdio.h>
#include <stdlib.h>

int main()
{
    float base;
    float altura;
    float areaRetangulo;

    printf("\nInsira a base do retangulo: ");
    scanf("%f", &base);
    printf("\nInsira a altura do retangulo: ");
    scanf("%f", &altura);

    areaRetangulo = base * altura;

    printf("\nA area deste retangulo e: %.0f", areaRetangulo);
    return 0;
}
