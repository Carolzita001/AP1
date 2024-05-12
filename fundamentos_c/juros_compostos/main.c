#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int capital,tempoAnos;
    float taxa,montante;

    printf("\nInsira o valor do capital: ");
    scanf("%i", &capital);
    printf("\nInsira a taxa de juros anual: ");
    scanf("%f", &taxa);
    printf("\nInsira o perio de tempo em anos: ");
    scanf("%d", &tempoAnos);

    montante = capital * (1 + pow(taxa, tempoAnos));

    printf("\nSeu montante sera de: %.0f", montante);
    return 0;
}
