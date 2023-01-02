#include <stdio.h>

int main() {

    float numeros[10];
    int contador, posicao;
    float menorValor;

    for(contador = 0; contador < 10; contador++){
        printf("Digite um valor: ");
        scanf("%f", &numeros[contador]);
        if(numeros[contador] < menorValor || contador == 1) {
            menorValor = numeros[contador];
            posicao = contador;
        }
    }

    printf("O menor valor e %.2f e esta na %dº posicao", menorValor, posicao + 1);

    getchar();
    getchar();
    return 0;
}