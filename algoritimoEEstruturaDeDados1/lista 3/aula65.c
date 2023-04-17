#include <stdio.h>

int main() {
    
    struct horario
    {
        int *pHora;
        int *pMinuto;
        int *pSegundo;
    };

    struct horario hoje;

    int hora = 200, minuto = 300, segundo = 400;

    hoje.pHora = &hora;
    hoje.pMinuto = &minuto;
    hoje.pSegundo = &segundo;

    printf("Hora - %i\n", hoje.pHora);
    printf("Hora - %i\n", hoje.pMinuto);
    printf("Hora - %i\n", hoje.pSegundo);

    getchar();

    return 0;

}