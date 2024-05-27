#include <stdio.h>
#include <stdlib.h>

int main(){
    int horas;

    printf("\nInsira o horario atual em horas (0-23): ");
    scanf("%d", &horas);

    if( horas >= 0 && horas <= 11 ){
        printf("Bom dia!\n");
            } else if( horas >= 12 && horas <= 17 ){
                printf("Boa tarde!\n");
                    } else{
                        printf("Boa Noite!\n");
    }

    /*if( horas >= 0 || horas <= 11 ){
        printf("Bom dia!\n");
            } else if( horas >= 12 || horas <= 17 ){
                printf("Boa tarde!\n");
                    } else{
                        printf("Boa Noite!\n");
    }*/
    return 0;
}