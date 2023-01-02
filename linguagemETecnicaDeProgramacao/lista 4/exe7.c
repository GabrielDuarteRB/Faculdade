#include <stdio.h>

int main() {

    int numeros[20], par, impar, cont;

    for(cont = 0; cont < 20; cont++) {
        printf("Digite o %dº numero: ", cont);
        scanf("%d", &numeros[cont]);
        if(numeros[cont] % 2 == 0) {
            par++;
        } else {
            impar++;
        }
    }

    printf("%d sao pares e %d sao impares", par, impar);

    getchar();
    getchar();
    return 0;
}