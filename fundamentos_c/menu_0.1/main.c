#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    
    char opcao;
    int i, numero, maior, menor;

    setlocale(LC_ALL, "Portuguese_Brazil");

    do{
        printf("\nMenu\n");
        printf("a) Imprimir n�meros pares\n");
        printf("b) Imprimir maior e menor n�mero\n");
        printf("c) Imprimir tabuada\n");
        printf("d) Sair\n");
        printf("Ecolha um op��o: ");
        scanf("%c", &opcao);

        switch (opcao)
        {
        case 'a':
            printf("------Imprimir n�meros pares------\n");
            for(i=0; i<5; i++){
                printf("Digite um n�mero: ");
                scanf("%d", &numero);
                if(numero % 2 == 0){
                    printf("%d � um n�mero par!\n", numero);
                }else{
                    printf("Insira outro n�mero!\n");
                }
            }
            break;
        case 'b':
            printf("------Imprimir maior e menor n�mero------\n");
            printf("Digite um n�mero: ");
            scanf("%d", &maior);
            menor = maior;
            for(i=1; i<5; i++){
                printf("Digite outro n�mero: ");
                scanf("%d", &numero);
                if(numero > maior){
                    maior = numero;
                }
                if(numero < menor){
                    menor = numero;
                }
            }
            printf("Este � o maior n�mero: %d\n", maior);
            printf("Este � o menor n�mero: %d\n", menor);
            break;
        case 'c':
            printf("-------Imprimir tabuada------\n");
            printf("Digite um n�mero: ");
            scanf("%d", &numero);
            for(i=1; i<=10; i++){
                printf("%d x %d = %d\n", numero, i, numero*i);
            }
            break;
        case 'd':
            printf("Saindo...\n");
            break;
        default:
            printf("Op��o invalida, tente novamente.\n");
        }
    }while(opcao != 'd');

    return 0;
}