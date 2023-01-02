#include <stdio.h>

int main() {

    float numero, maior, menor;
    int cont;

    for(cont = 1; cont <= 10; cont++) {
        printf("Escolha um numero: ");
        scanf("%f", &numero);
        if(numero > maior || cont == 1) {
            maior = numero;
        }

        if(numero < menor || cont == 1) {
            menor = numero;
        }
    }

    printf("O maior numero foi o %.2f e o menor foi %.2f", maior, menor);

    getchar();
    getchar();
    return 0;
}