#include <stdio.h>

int potencia(int base, int expoente) {

    if(expoente == 0) {
        return 1;
    }

    if(expoente == 1) {
        return base;
    }

    return base * potencia(base, expoente - 1);
}

int main() {

    int resultado, base, expoente;

    printf("Digite a base: ");
    scanf("%d", &base);

    printf("Digite a expoente: ");
    scanf("%d", &expoente);

    while(expoente < 0) {
        printf("\nO expoente precisa ser maior ou igual a zero!\n");
        printf("Digite um novo expoente: ");
        scanf("%d", &expoente);
    }

    resultado = potencia(base, expoente);


    printf("%d", resultado);

    getchar();
    getchar();
    return 0;
}