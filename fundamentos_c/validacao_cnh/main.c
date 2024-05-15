#include <stdio.h>
#include <stdlib.h>

int main()
{
    int idade;
    char validacao;

    printf("\nInsira sua idade: ");
    scanf("%d", idade);
    printf("\nSua CNH é valida (S/N): ");
    setbuf(stdin, NULL);
    scanf("%c", &validacao);

    if(idade >= 18 && validacao == 'S'){
        printf("\nPode dirigir!");
    }else {
        printf("\nNao pode dirigir!");
    }
    return 0;
}
