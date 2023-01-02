#include <stdio.h>

int valorAbsoluto(int num1) {
    int maiorNumero, aux;

    do {

        aux = num1 % 10;
        num1 = num1 / 10;

        if(aux > maiorNumero) {
            maiorNumero = aux;
        }

        if(num1 < 10) {
            if(num1 > maiorNumero) {
                maiorNumero = num1;
            }
        }

    }while(num1 > 10);

    return maiorNumero;
}

int main() {

    int num, aux, absoluto;

    for(aux = 0; aux < 5; aux++) {
        printf("\nDigite um numero: ");
        scanf("%d", &num);
        absoluto = valorAbsoluto(num);
        printf("O valor absoluto do numero %d e %d", num, absoluto);
    }

    getchar();
    getchar();
    return 0;
}