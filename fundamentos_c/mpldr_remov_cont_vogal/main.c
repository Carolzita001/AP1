#include <stdio.h>
#include <stdLib.h>
#include <string.h>
#include <ctype.h>
#include <locale.h>

int main() {
    char frase[100];
    int vogais[5] = { 'a', 'e', 'i', 'o', 'u' };
    int quant_vogais = 0;
    int i, j;

    printf("Digite uma frase: ");
    fgets(frase, 100, stdin);
    frase[strlen(frase) - 1] = '\0';

    for (i = 0; frase[i] != '\0'; i++) {
        for (j = 0; j < 5; j++) {
            if (tolower(frase[i]) == vogais[j]) {
                quant_vogais++;
                break;
            }
        }
    }

    i = 0;
    j = 0;
    while (frase[i] != '\0') {
        int is_vogal = 0;
        for (int k = 0; k < 5; k++) {
            if (tolower(frase[i]) == vogais[k]) {
                is_vogal = 1;
                break;
            }
        }
        if (!is_vogal) {
            frase[j++] = frase[i];
        }
        i++;
    }
    frase[j] = '\0';

    printf("Frase sem vogais: %s\n", frase);
    printf("Número de vogais: %d\n", quant_vogais);

    return 0;
}
//problema com o caractere especial