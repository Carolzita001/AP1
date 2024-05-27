#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese_Brazil");

    float total_compra, desconto, valor_com_desconto,porcentagem;
    char codigo;

    printf("Insira o valor total da sua compra: \n");
    scanf("%f", &total_compra);

    if(total_compra > 0){

        while (codigo != 'A' && codigo != 'B' && codigo != 'C' && codigo != 'D'&& codigo != 'E')
        {
            printf("Insira o código do cupom de desconto (A, B, C, D, E): \n");
            setbuf(stdin,NULL);
            scanf("%c", &codigo);
        }

        switch (codigo)
        {
         case 'A':
            setbuf(stdin, NULL);
            porcentagem = 10;
            desconto = (total_compra * 10/100);
            valor_com_desconto = total_compra - desconto;
            break;
         case 'B':
            setbuf(stdin, NULL);
            porcentagem = 20;
            desconto = (total_compra * 20/100);
            valor_com_desconto = total_compra - desconto;
            break;
         case 'C':
            setbuf(stdin, NULL);
            porcentagem = 30;
            desconto = (total_compra * 30/100);
            valor_com_desconto = total_compra - desconto;
            break;
         case 'D':
            setbuf(stdin, NULL);
            porcentagem = 40;
            desconto = (total_compra * 40/100);
            valor_com_desconto = total_compra - desconto;
            break;
         default:
            setbuf(stdin, NULL);
            porcentagem = 50;
            desconto = (total_compra * 50/100);
            valor_com_desconto = total_compra - desconto;
            break;
        }

        printf("                       Nota Fiscal\n");
        printf("Valor da compra                          R$ %0.2f\n", total_compra);
        printf("Cupom adicionado                         %c de %0.0f%%\n", codigo, porcentagem);
        printf("Valor do desconto                        R$ %0.2f\n", desconto);
        printf("Valor a ser pago                         R$ %0.2f\n", valor_com_desconto);
    }else {
       printf("Valor indefinido! tente novamente.\n");
        
    }
    

}