#include <stdio.h>
#include <stdlib.h>

int main()
{
    float metros,centimetros,milimetros;

    printf("\nInsira a distancia em metros: ");
    scanf("%f", &metros);

    centimetros = metros * 100;
    milimetros = metros * 1000;

    printf("\nEssa e a distancia em centimetros: %.0f", centimetros);
    printf("\nEssa e a distancia em milimetros: %.0f", milimetros);
    return 0;
}
