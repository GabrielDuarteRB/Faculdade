#include <stdio.h>

int main() {

    float lado1, lado2, lado3, a, b, c;

    printf("Lado 1:");
    scanf("%f", &lado1);

    printf("Lado 2:");
    scanf("%f", &lado2);

    printf("Lado 3:");
    scanf("%f", &lado3);

    if(lado1 >= lado2 && lado1 >= lado3) {
       a = lado1;
       b = lado2;
       c = lado3;
    } else if (lado2 >= lado3 && lado2 >= lado1) {
        a = lado2;
        b = lado1;
        c = lado3;
    }else {
        a = lado3;
        b = lado1;
        c = lado2;
    }

    if(a*a == b*b + c*c) {
        printf("É um triângulo retângulo!");
    } else {
        printf("Não é um triângulo retângulo!");
    }

    getchar();
    getchar();
    return 0;
}