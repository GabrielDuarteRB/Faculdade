#include <stdio.h>

int menorNumbero(int num1, int num2) {
    if(num1 < num2) {
        printf("O menor numero e %d", num1);
        return num1;
    }
    printf("O menor numero e %d", num2);
    return num2;
}

int main() {

    int num1, num2;

    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);

    printf("Digite o segundo numero: ");
    scanf("%d", &num2);

    menorNumbero(num1, num2);

    getchar();
    getchar();

    return 0;
}