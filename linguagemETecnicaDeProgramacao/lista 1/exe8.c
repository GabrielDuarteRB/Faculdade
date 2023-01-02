#include <stdio.h>

int main() {
    float graus, fahrenheit;

    printf("Temperatura em Graus: ");
    scanf_s("%f", &graus);

    fahrenheit = (9 * graus + 160) / 5;

    printf("O valor de %.2f C em fahrenheit e %.2f F", graus, fahrenheit);

    getchar();
    getchar();
    return 0;
}