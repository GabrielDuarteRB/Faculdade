#include <stdio.h>

int main() {

    char nome[100];

    printf("Digite um nome: ");
    scanf_s("%s", &nome);

    printf("%s", nome);

    getchar();
    getchar();

    return 0;
}