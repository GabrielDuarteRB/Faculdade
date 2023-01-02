#include <stdio.h>

int main () {

    int numero, digitoVerificador, auxNumero;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    auxNumero = numero;

    while(digitoVerificador > 10 || digitoVerificador == 0) {
        digitoVerificador = 0;
        while (auxNumero > 0) {
            digitoVerificador += auxNumero%10;
            auxNumero = auxNumero/10;
        }
        auxNumero = digitoVerificador;
    }


    printf("%d-%d", numero, digitoVerificador);

    getchar();
    getchar();
    return 0;
}