#include <stdio.h>
#include <string.h>

int main() {

    char palavra[100], novaPalavra[100], letra[2];
    int tamanho;

    printf("Digite uma palavra: ");
    scanf("%s", &palavra);

    tamanho = strlen(palavra) - 1;

    for(; tamanho >= 0; tamanho--) {
        letra[0] = palavra[tamanho];
        strcat(novaPalavra, letra);
    }

    printf("%s", novaPalavra);

    getchar();
    getchar();

    return 0;
}