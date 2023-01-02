#include <stdio.h>

int main() {

    int numero, par, impar;

    numero = 0;

    while(numero < 1000) {
        if(numero % 2 == 0 && numero > 0) {
            par += numero;
        } else if(numero > 0) {
            impar += numero;
        }
        printf("Digite um numero inteiro positivo e um numero maior que mil para parar: ");
        scanf("%d", &numero);
    }

    printf("A soma dos numeros pares foi %d e dos numeros impares foi %d", par, impar);
    getchar();
    getchar();
    return 0;
}