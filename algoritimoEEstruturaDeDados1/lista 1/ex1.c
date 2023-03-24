#include <stdio.h>
#include <math.h>

float calcularDistancia(float n1, float n2) {
    float x;

    x = n1 * n1 + n2 * n2;

    return sqrt(x);
}

int main() {
    float x1, x2, y1, y2;

    printf("Digite o valor de x1: ");
    scanf("%f", &x1);

    printf("Digite o valor de y1: ");
    scanf("%f", &y1);

    printf("Digite o valor de x2: ");
    scanf("%f", &x2);

    printf("Digite o valor de y2: ");
    scanf("%f", &y2);

    printf("A primeira distancia e %f", calcularDistancia(x1, y1));
    printf("\nA segunda distancia e %f", calcularDistancia(x2, y2));

    getchar();
    getchar();

    return 0;
}
