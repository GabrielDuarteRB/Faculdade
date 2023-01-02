#include <stdio.h>

int main() {
    int num1, num2, num3, media;

    printf("Digite o primeiro numero: ");
    scanf_s("%d", &num1);

    printf_s("Digite o segundo numero: ");
    scanf_s("%d", &num2);

    printf_s("Digite o terceiro numero: ");
    scanf_s("%d", &num3);

    media = (num1 + num2 + num3)/3;

    printf("Media dos numeros: %d", media);

    getchar();
    getchar();
    return 0;
}