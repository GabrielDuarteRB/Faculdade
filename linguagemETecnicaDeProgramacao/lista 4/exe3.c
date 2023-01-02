#include <stdio.h>

int main() {

    float numeros[10];
    int contador, posicaoMenor, posicaoMaior;
    float menorValor, maiorValor;

    for(contador = 0; contador < 10; contador++){
        printf("Digite um valor: ");
        scanf("%f", &numeros[contador]);
        if(numeros[contador] < menorValor || contador == 1) {
            menorValor = numeros[contador];
            posicaoMenor = contador;
        }

        if(numeros[contador] > maiorValor || contador == 1) {
            maiorValor = numeros[contador];
            posicaoMaior = contador;
        }
    }

    printf("O menor valor e %.2f e esta na %dº posicao", menorValor, posicaoMenor + 1);
    printf("\nO maior valor e %.2f e esta na %dº posicao", maiorValor, posicaoMaior + 1);

    getchar();
    getchar();
    return 0;
}