#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    
    char opcao;
    int i, numero, maior, menor;

    setlocale(LC_ALL, "Portuguese_Brazil");

    do{
        printf("\nMenu\n");
        printf("a) Imprimir números pares\n");
        printf("b) Imprimir maior e menor número\n");
        printf("c) Imprimir tabuada\n");
        printf("d) Sair\n");
        printf("Ecolha um opção: ");
        scanf("%c", &opcao);

        switch (opcao)
        {
        case 'a':
            printf("------Imprimir números pares------\n");
            for(i=0; i<5; i++){
                printf("Digite um número: ");
                scanf("%d", &numero);
                if(numero % 2 == 0){
                    printf("%d é um número par!\n", numero);
                }else{
                    printf("Insira outro número!\n");
                }
            }
            break;
        case 'b':
            printf("------Imprimir maior e menor número------\n");
            printf("Digite um número: ");
            scanf("%d", &maior);
            menor = maior;
            for(i=1; i<5; i++){
                printf("Digite outro número: ");
                scanf("%d", &numero);
                if(numero > maior){
                    maior = numero;
                }
                if(numero < menor){
                    menor = numero;
                }
            }
            printf("Este é o maior número: %d\n", maior);
            printf("Este é o menor número: %d\n", menor);
            break;
        case 'c':
            printf("-------Imprimir tabuada------\n");
            printf("Digite um número: ");
            scanf("%d", &numero);
            for(i=1; i<=10; i++){
                printf("%d x %d = %d\n", numero, i, numero*i);
            }
            break;
        case 'd':
            printf("Saindo...\n");
            break;
        default:
            printf("Opção invalida, tente novamente.\n");
        }
    }while(opcao != 'd');

    return 0;
}