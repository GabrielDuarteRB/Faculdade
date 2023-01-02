#include <stdio.h>
#include <string.h>

int main() {

    char pessoas[10][100], maiorNome[100], menorNome[100];
    int idade[10], aux, maiorIdade, menorIdade;

    do {
        printf("Digite um nome: ");
        scanf("%s", &pessoas[aux]);
        printf("Digite uma idade: ");
        scanf("%d", &idade[aux]);
        if((idade[aux] > maiorIdade || aux == 0) && idade[aux] > 0) {
            maiorIdade = idade[aux];
            strcpy(maiorNome, pessoas[aux]);
        }

        if((idade[aux] < menorIdade || aux == 0)&& idade[aux] > 0) {
            menorIdade = idade[aux];
            strcpy(menorNome, pessoas[aux]);
        }

        aux++;
    }while(aux < 11 && idade[aux-1] >= 0);

    printf("Essa e a pessoa mais velha %s com %d anos", maiorNome, maiorIdade);
    printf("Essa e a pessoa mais nova %s com %d anos", menorNome, menorIdade);

    getchar();
    getchar();

    return 0;
}