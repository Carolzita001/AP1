#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <locale.h>

int main() {

    setlocale(LC_ALL,"Portuguese_Brazil");

    char frase[100];
    char letra_original, letra_substituta;
    int i, j;

    printf("Digite uma frase: ");
    fgets(frase, 100, stdin);
    frase[strlen(frase) - 1] = '\0'; 

    printf("Digite a letra original: ");
    scanf(" %c", &letra_original);
    printf("Digite a letra substituta: ");
    scanf(" %c", &letra_substituta);

    for (i = 0, j = 0; frase[i] != '\0'; i++) {
        if (!isspace(frase[i])) {
            frase[j++] = frase[i];
        }
    }
    frase[j] = '\0';

    for (i = 0; frase[i] != '\0'; i++) {
        if (tolower(frase[i]) == tolower(letra_original)) {
            frase[i] = letra_substituta;
        }
    }

    printf("Frase modificada: %s\n", frase);

    return 0;
}