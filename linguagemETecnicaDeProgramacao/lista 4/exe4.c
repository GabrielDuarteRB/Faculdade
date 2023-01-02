#include <stdio.h>

int main() {

    int numeros[10];
    int cont, numero, razao;

    printf("Digite o valor do primeiro numero: ");
    scanf("%d", &numero);

    printf("Digite o valor da razao: ");
    scanf("%d", &razao);

    for (cont = 0; cont < 10; cont++) {
        numero = numero + razao;
        numeros[cont] = numero;
    }

    getchar();
    getchar();
    return 0;

}