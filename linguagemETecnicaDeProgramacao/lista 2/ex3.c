#include <stdio.h>

int main () {

    int ano;

    printf("Digite um ano: ");
    scanf("%d", &ano);

    if(ano % 4 == 0 && ( ano % 100 != 0 || ano % 400 == 0) ) {

        if( ano < 2022 ) {
            printf("O ano foi bissexto");
        } else if( ano = 2022) {
            printf("O ano é bissexto");
        } else {
            printf("O ano será bissexto");
        }

    } else {

        if( ano < 2022 ) {
            printf("O ano não foi bissexto");
        } else if( ano = 2022) {
            printf("O ano não é bissexto");
        } else {
            printf("O ano não será bissexto");
        }

    }

    getchar();
    getchar();
    return 0;
}