#include <stdio.h>

int ehPostivo(int num) {
    if(num >= 0) {
        return 1;
    }
    return 0;
}

int somaDivisores(int  num) {
    int soma, aux;

    for(aux = 1; aux < num; aux++) {
        if(num % aux == 0) {
            soma = soma + aux;
        }
    }

    return soma;
}

int main() {

    int num, soma, aux;

    for(aux = 0; aux < 5; aux++) {
        printf("Digite um numero: ");
        scanf("%d", &num);
        if(ehPostivo(num) == 1) {
            soma = somaDivisores(num);
            printf("\nA soma dos seus divisores e %d\n", soma);
        } else {
            printf("\nApenas numeros positivos\n");
        }
    }

    getchar();
    getchar();

    return 0;
}