#include <stdio.h>

int main() {

    int indicador;
    float raio, resultado;

    printf("1 - Área da circunferência.\n");
    printf("2 - Perímetro da circunferência.\n");
    printf("Digite o comando desejado: ");
    scanf("%d", &indicador);

    printf("Digite o raio da circunferencia: ");
    scanf("%f", &raio);

    switch (indicador) {
        case 1:
            resultado = 3.14 * raio * raio;
            printf("A área da circunferencia e %.2f", resultado);
            break;
        case 2:
            resultado = 2 * 3.14 * raio;
            printf("O perímetro da circunferencia e %.2f", resultado);
            break;
        default:
            printf("Indicador de operacao foi mal indicado!");
    }

    getchar();
    getchar();
    return 0;
}