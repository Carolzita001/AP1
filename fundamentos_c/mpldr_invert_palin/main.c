#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#include<locale.h>

int main(){

    setlocale(LC_ALL,"Portuguese_Brazil");

    char frase[100];
    char frase_invertida[100];
    int i, j, tamanho;

    printf("Digite uma frase: \n");
    fgets(frase, 100, stdin);

    frase[strcspn(frase, "\n")] = 0;

    tamanho = strlen(frase);

    for (i = 0, j = tamanho - 1; i < tamanho; i++, j--)
    {
        frase_invertida[i] = frase[j];
    }
    
    frase_invertida[tamanho] = '\0';

    printf("frase invertida: %s\n", frase_invertida);

    for (int i = 0; frase_invertida[i]!= '\0'; i++) {
        frase_invertida[i] = tolower(frase_invertida[i]);
    }

    for (int i = 0; frase[i]!= '\0'; i++) {
        frase[i] = tolower(frase[i]);
    }

    if (strcmp(frase, frase_invertida) == 0) {
        printf("A frase é um palíndromo!\n");
    } else {
        printf("A frase não é um palíndromo.\n");
    }

    return 0;
}
//Como contabilizar letras maiúsculas iguais as minúsculas