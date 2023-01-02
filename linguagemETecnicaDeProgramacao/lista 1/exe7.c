#include <stdio.h>

int main() {
    float saldo, reajuste;

    printf("Digite o saldo da sua conta: ");
    scanf_s("%f", &saldo);

    reajuste = saldo * 102/100;

    printf("O seu novo saldo e igual a %.2f", reajuste);

    getchar();
    getchar();
    return 0;
}