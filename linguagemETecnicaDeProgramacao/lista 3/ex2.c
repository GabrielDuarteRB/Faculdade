#include <stdio.h>

int main () {

    int multiplicador, multiplicando, resultado;

    for (multiplicador = 1; multiplicador <=10; multiplicador++) {
        for (multiplicando = 1; multiplicando <= 10; multiplicando++) {
            resultado = multiplicando * multiplicador;
            printf("\n%d x %d = %d", multiplicador, multiplicando, resultado);
        }
        printf("\n-=-=-=-=-=-=-=-=-=--=-=-=-=-");
    }

    getchar();
    getchar();
    return 0;
}