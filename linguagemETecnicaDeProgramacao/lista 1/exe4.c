#include <stdio.h>

int main() {
    int num1, sucessor, antecessor;

    printf("Digite um numero inteiro: ");
    scanf_s("%d", &num1);

    sucessor = num1 + 1;
    antecessor = num1 - 1;

    printf("Seu sucessor e %d", sucessor);
    printf("\nSeu antecessor e %d", antecessor);

    getchar();
    getchar();
    return 0;
}