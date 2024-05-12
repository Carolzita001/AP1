#include <stdio.h>
#include <stdlib.h>

int main()
{
    float moedaEmReal,cotacaoDoDolar,moedaEmDolar;

    printf("\nInsira o valor em Real a ser convertido: ");
    scanf("%f", &moedaEmReal);
    printf("\nInsira o valor da cotacao do dolar nos dias atuais: ");
    scanf("%f", &cotacaoDoDolar);

    moedaEmDolar = moedaEmReal / cotacaoDoDolar;

    printf("\nConvertendo temos: %.0f", moedaEmDolar);
    return 0;
}
