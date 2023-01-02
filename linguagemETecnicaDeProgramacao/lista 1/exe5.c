#include <stdio.h>

int main() {
    int num1, num2, soma, subtracao, divisao, multiplicacao;

    printf("Digite o primeiro numero: ");
    scanf_s("%d", &num1);

    printf_s("Digite o segundo numero: ");
    scanf_s("%d", &num2);

    soma = num1 + num2;
    subtracao = num1 - num2;
    divisao = num1 / num2;
    multiplicacao = num1 * num2;

    printf("Soma dos numeros: %d", soma);
    printf("\nSubtracao dos numeros: %d", subtracao);
    printf("\nDivisao dos numeros: %d", divisao);
    printf("\nMultiplicacao dos numeros: %d", multiplicacao);

    getchar();
    getchar();
    return 0;
}