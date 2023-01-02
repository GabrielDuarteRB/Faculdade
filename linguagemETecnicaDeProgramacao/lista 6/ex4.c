#include <stdio.h>
#include <string.h>

int main() {

    char numero[100];
    int qnt = 0, aux;

    printf("Digite um número: ");
    scanf("%s", &numero);

    for(aux = 0; aux < strlen(numero); aux++) {
        if(numero[aux] == '1') {
            qnt++;
        }
    }

    printf("O numero um apareceu %d vezes", qnt);

    getchar();
    getchar();

    return 0;
}