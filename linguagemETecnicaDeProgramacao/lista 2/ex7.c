#include <stdio.h>

int main() {

    int a, b, aux;

    printf("Valor de A: ");
    scanf("%d", &a);

    printf("Valor de B: ");
    scanf("%d", &b);

    aux = a;
    a = b;
    b = aux;

    printf("Valor de a depois da troca e %d", a);
    printf("\nValor de b depois da troca e %d", b);

    getchar();
    getchar();
    return 0;
}