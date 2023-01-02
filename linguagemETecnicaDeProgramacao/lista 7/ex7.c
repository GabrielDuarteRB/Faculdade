#include <stdio.h>

int parImpar(int value) {
    if(value % 2 == 0) {
        return 1;
    }
    return 0;
}

int main() {
    int resultado;

    resultado = parImpar(6);

    printf("%d", resultado);

    getchar();
    getchar();

    return 0;
}