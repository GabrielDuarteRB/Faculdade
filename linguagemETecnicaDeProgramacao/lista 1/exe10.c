#include <stdio.h>

int main() {
    int seg;
    float min, horas;

    printf("Tempo em segundos: ");
    scanf_s("%d", &seg);

    min = seg / 60;
    horas = min / 60;

    printf("Esse valor em minutos e: %.2f min",min);
    printf("\nEsse valor em horas e: %.2f h",horas);

    getchar();
    getchar();
    return 0;
}