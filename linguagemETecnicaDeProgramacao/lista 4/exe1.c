#include <stdio.h>

int main() {

    float numeros[10];
    int contador, posicao;
    float maiorValor;

    for(contador = 0; contador < 10; contador++){
        printf("Digite um valor: ");
        scanf("%f", &numeros[contador]);
        if(numeros[contador] > maiorValor || contador == 1) {
            maiorValor = numeros[contador];
            posicao = contador;
        }
    }

    printf("O maior valor e %.2f e esta na %dº posicao", maiorValor, posicao+1);

    getchar();
    getchar();
    return 0;
}