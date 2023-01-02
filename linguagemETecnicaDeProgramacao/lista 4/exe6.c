#include <stdio.h>

int main() {

    int numeros[10], numero, cont, posicao, esta;

    for(cont = 0; cont < 10; cont++) {
        numero = 21;
        while(numero >= 20) {
            printf("Digite um numero menor que vinte: ");
            scanf("%d", &numero);
        }

        numeros[cont] = numero;
    }

    numero = 21;
    while(numero >= 20) {
        printf("Numero sorteado: ");
        scanf("%d", &numero);
    }

    for(cont = 0; cont < 10; cont++) {
        if(numeros[cont] == numero) {
            esta = 1;
            posicao = cont;
        }
    }

    if(esta == 1) {
        printf("Seu numero esta no vetor e se apresenta na %dª posicao", posicao + 1);
    } else {
        printf("Seu numero nao esta no vetor");
    }

    getchar();
    getchar();
    return 0;

}