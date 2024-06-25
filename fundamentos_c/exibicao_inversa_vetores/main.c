#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (){
    setlocale(LC_ALL, "Portuguese_Brazil");

    int num[10];

    printf("Digite 10 números inteiros:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &num[i]);
    }

    printf("Vetor na ordem inversa:\n");
    for (int i = 9; i >= 0; i--) {
        printf("%d ", num[i]);
    }
    printf("\n");


    return 0;
}