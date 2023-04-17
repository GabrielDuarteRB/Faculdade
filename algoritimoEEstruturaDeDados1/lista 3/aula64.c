#include <stdio.h>

int main() {
    
    struct horario
    {
        int hora;
        int minuto;
        int segundo;
    };
    
    struct horario agora, antes, *depois;
    int somatorio = 100;

    depois = &agora;

    depois->hora = 20;
    depois->minuto = 56;
    depois->segundo = 15;

    antes.hora = somatorio + depois->segundo;
    antes.minuto = agora.hora + depois->minuto;
    antes.segundo = depois->minuto - depois->segundo;

    printf("%i:%i:%i", antes.hora, antes.minuto, antes.segundo);

    getchar();
    getchar();

    return 0;
}