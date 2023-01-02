#include <stdio.h>

int sinal(int value) {
    if(value == 0) return 0;

    if(value > 0) return 1;

    if(value < 0) return -1;
}

int main() {
    int resultado;

    resultado = sinal(-50);

    printf("%d", resultado);

    getchar();
    getchar();

    return 0;
}