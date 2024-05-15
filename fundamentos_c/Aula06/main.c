#include <stdio.h>
#include <stdlib.h>
#include <locale.h> //caracteres da lingua portuguesa
int main()
{
    float notaAluno;

    printf("\nDigite a nota do aluno: ");
    scanf("%f", &notaAluno);

    if (notaAluno >= 7){
        printf("\nAluno foi aprovado!");
    }else if(notaAluno < 7 && notaAluno >= 5){
        printf("\nAluno esta de recuperação!");
    }else{
        printf("\nAluno reprovado!");
    }
    return 0;
}
