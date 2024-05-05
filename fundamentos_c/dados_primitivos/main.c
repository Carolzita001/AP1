#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Declarando variáveirs.
    //Armazenando valores numéricos inteiros.
    int numeroInteiro;
    //Armazenando números com ponto flutuante (reais) com precisão simples.
    float numeroFlutuante;
    //Armazenando números com ponto flutuante, possui o dobro de capacidade de uma variável do tipo float.
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
    setbuf(stdin, NULL);//limpar memória
    scanf("%c", &caractere);

    //Saída de dados
    printf("\nNumero inteiro: %d", numeroInteiro);
    printf("\nNumero decimal: %f", numeroFlutuante);
    printf("\nNumero decimal preciso: %f", numeroFlutuanteMaior);
    printf("\nCaracter: ", caractere);

    //Atribuição de valores
    numeroInteiro = 4;
    numeroFlutuante = 2.0;
    numeroFlutuanteMaior = 200000.36;
    caractere = 'b';

    //Saída de dados
    printf("\nNumero inteiro: %d", numeroInteiro);
    printf("\nNumero decimal: %f", numeroFlutuante);
    printf("\nNumero decimal preciso: %f", numeroFlutuanteMaior);
    printf("\nCaracter: %c", caractere);
}
