#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese_Brazil");
    int num [5],media;
    int soma = 0;

    printf("Insira os n�meros do vetor: \n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &num[i]);
    }
    
    for (int i = 0; i < 5; i++)
    {
       soma += num[i];
    }
    
    media = soma / 5;

    printf("A m�dia entres os n�meros inseridos �: %d.", media);
   
    return 0;
}