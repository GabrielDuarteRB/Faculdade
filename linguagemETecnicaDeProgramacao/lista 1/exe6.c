#include <stdio.h>

int main() {
    float num1, num2;

    printf("Digite um numero real: ");
    scanf_s("%f", &num1);

    num2 = num1 * 1/4;

    printf("Um quarto do seu numero e igual a %f", num2);

    getchar();
    getchar();
    return 0;
}