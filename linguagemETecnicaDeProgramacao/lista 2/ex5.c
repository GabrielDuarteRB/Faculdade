#include <stdio.h>

int main() {

    int indicador;
    float area, lado, base1, base2, altura;

    printf("1 - Area do quadrado.\n");
    printf("2 - Area de um retângulo.\n");
    printf("3 - Area de um trapézio\n");
    printf("Digite o comando desejado: ");
    scanf("%d", &indicador);

    switch (indicador) {
        case 1:
            printf("Lado do quadrado: ");
            scanf("%f", &lado);
            area = lado * lado;
            printf("Area do quadrado e %.2f", area);
            break;
        case 2:
            printf("Base do retangulo: ");
            scanf("%f", &base1);
            printf("altura do retangulo: ");
            scanf("%f", &altura);
            area = base1 * altura;
            printf("Area do retangulo e %.2f", area);
            break;
        case 3:
            printf("Base maior do trapezio: ");
            scanf("%f", &base1);
            printf("Base menor do trapezio: ");
            scanf("%f", &base2);
            printf("altura do trapezio: ");
            scanf("%f", &altura);
            area = ((base1 + base2) / 2 ) * altura;
            printf("Area do trapezio e %.2f", area);
            break;
        default:
            printf("Indicador de operacao foi mal indicado!");
    }

    getchar();
    getchar();
    return 0;
}