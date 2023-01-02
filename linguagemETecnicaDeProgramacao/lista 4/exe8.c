#include <stdio.h>

int main() {

    int numeros[50], cont;

    for(cont = 0; cont < 50; cont++) {

        printf("Escreva o %dº numero: ", cont);
        scanf("%d", &numeros[cont]);
    }

    printf("\nNumeros com indice par: ");
    cont = 0;
    while(cont < 50) {
        printf("\n %d", numeros[cont]);
        cont = cont + 2;
    }

    printf("\nNumeros com indice impar: ");
    cont = 1;
    while(cont < 50) {
        printf("\n %d", numeros[cont]);
        cont = cont + 2;
    }

    printf("Vetor de tras para frente: ");
    cont = 49;
    while(cont >= 0) {
        printf("\n %d", numeros[cont]);
        cont--;
    }

    getchar();
    getchar();
    return 0;
}