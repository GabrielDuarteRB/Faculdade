#include <stdio.h>

int main () {

    float num1, num2, resultado;

    num1 = 1;
    num2 = 1;

    while (num1 != 0 && num2 != 0) {
        printf("\nDigite um número e zero para finalizar: ");
        scanf("%f", &num1);
        printf("Digite um número e zero para finalizar: ");
        scanf("%f", &num2);
        resultado = num1 * num2;
        printf("\nO produto deles e %f", resultado);
        printf("\n=-=-=-=-=-=-=-=-=-=-=-=");
    }

    printf("\n Voce finalizou o programa!");
    getchar();
    getchar();
    return 0;
}