#include <stdio.h>

int main () {

    float massaInicial, massaFinal;
    int hora, minuto, segundo;

    printf("Digite a massa inicial: ");
    scanf("%f", &massaInicial);
    massaFinal = massaInicial;

    while(massaFinal > 0.5) {
        segundo = segundo + 50;
        massaFinal = massaFinal / 2;
    }

    hora = segundo / 3600;
    minuto = (segundo % 3600 )/ 60;
    segundo = (segundo % 3600) % 60;

    printf("A massa inicial foi %.2f", massaInicial);
    printf("\nA massa final foi %.2f", massaFinal);
    printf("O tempo foi de %dh:%dm:%ds", hora, minuto, segundo);

    getchar();
    getchar();
    return 0;
}