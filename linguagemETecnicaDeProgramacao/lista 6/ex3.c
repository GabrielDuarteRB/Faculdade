#include <stdio.h>
#include <string.h>

int main() {
    char nomeCompleto[100], nome[100], sobrenome[100], letra[2];
    int tamanho, aux, espaco = 0;

    printf ("Digite seu nome completo: ");
    gets(nomeCompleto);

    tamanho = strlen(nomeCompleto);

    while(aux < tamanho && espaco < 2) {

        letra[0] = nomeCompleto[aux];

        switch(espaco) {
            case 0:
                strcat(nome, letra);
                break;
            case 1:
                strcat(sobrenome, letra);
                break;
            default:
                break;
        }

        if(strcmp(letra, " ") == 0) {
            espaco++;
        }

        aux++;
    }

    printf("%s, %s", sobrenome, nome);

    getchar();
    getchar();

    return 0;
}