#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Declarando vari�veirs.
    //Armazenando valores num�ricos inteiros.
    int numeroInteiro;
    //Armazenando n�meros com ponto flutuante (reais) com precis�o simples.
    float numeroFlutuante;
    //Armazenando n�meros com ponto flutuante, possui o dobro de capacidade de uma vari�vel do tipo float.
    double numeroFlutuanteMaior;
    //Armazena caractere
    char caractere;

    //Entrada de dados
    printf("\nEscreva um numero inteiro: ");
    scanf("%i", &numeroInteiro);
    printf("\nEscreva um numero decimal: ");
    scanf("%f", &numeroFlutuante);
    printf("\nEscreva um numero decimal preciso: ");
    scanf("%f", &numeroFlutuanteMaior);
    printf("\nEscreva um caracter: ");
    setbuf(stdin, NULL);//limpar mem�ria
    scanf("%c", &caractere);

    //Sa�da de dados
    printf("\nNumero inteiro: %d", numeroInteiro);
    printf("\nNumero decimal: %f", numeroFlutuante);
    printf("\nNumero decimal preciso: %f", numeroFlutuanteMaior);
    printf("\nCaracter: ", caractere);

    //Atribui��o de valores
    numeroInteiro = 4;
    numeroFlutuante = 2.0;
    numeroFlutuanteMaior = 200000.36;
    caractere = 'b';

    //Sa�da de dados
    printf("\nNumero inteiro: %d", numeroInteiro);
    printf("\nNumero decimal: %f", numeroFlutuante);
    printf("\nNumero decimal preciso: %f", numeroFlutuanteMaior);
    printf("\nCaracter: %c", caractere);
}
