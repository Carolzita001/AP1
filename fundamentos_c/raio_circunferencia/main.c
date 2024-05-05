#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float raio;
    float area;

    printf("\nInsira o raio do circulo: ");
    scanf("%f", &raio);

    area = M_PI * (raio * raio);

    printf("\nA area desse circulo e: %.0f", area);
    return 0;
}
