#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include <ctype.h>
#include<locale.h>

int main() {
    setlocale(LC_ALL,"Portuguese_Brazil");

    char frase[100];
    int contador_palavras = 0;
    int contador_caracteres = 0;
    int i;

    printf("Digite uma frase: ");
    fgets(frase, 100, stdin);

    frase[strcspn(frase, "\n")] = 0;

    for (i = 0; frase[i] != '\0'; i++) {
        if (frase[i] == ' ') {
            contador_palavras++; 
        }
    }

    contador_palavras++;

    printf("A frase tem %d palavra(s).\n", contador_palavras);

   for (i = 0; frase[i] != '\0'; i++) {
        if (frase[i] != ' ') {
            contador_caracteres++;
        }
    }

    printf("A frase tem %d caractere(s).\n", contador_caracteres);

    for (int i = 0; frase[i]!= '\0'; i++) {
        frase[i] = toupper(frase[i]);
    }

    printf("A frase em maiúsculas: %s\n", frase);

    for (int i = 0; frase[i] != '\0'; i++) {
        frase[i] = tolower(frase[i]);
    }

    printf("A frase em minúsculas: %s\n", frase);

    return 0;
}

//Caractere especial bugado