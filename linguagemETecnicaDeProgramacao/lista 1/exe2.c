#include <stdio.h>

int main() {
    int num1, num2, soma;

    printf("Digite o primeiro numero: ");
    scanf_s("%d", &num1);

    printf_s("Digite o segundo numero: ");
    scanf_s("%d", &num2);

    soma = num1 + num2;

    printf("Soma dos numeros: %d", soma);

    getchar();
    getchar();
    return 0;
}