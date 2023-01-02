#include <stdio.h>
#include <string.h>

int main() {

    char numero[100];
    int aux;

    printf("Digite um número: ");
    gets(numero);

    for(aux = 0; aux < strlen(numero); aux++) {
        if(numero[aux] == '0') {
            numero[aux] = '1';
        }
    }

    printf("%s", numero);

    getchar();
    getchar();

    return 0;
}