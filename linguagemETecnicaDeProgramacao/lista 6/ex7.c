#include <stdio.h>
#include <string.h>

int main() {

    char frase[100];
    int tamanho, vogal, espaco, outros;

    printf("Digite um frase: ");
    gets(frase);

    tamanho = strlen(frase);

    for(; tamanho >= 0; tamanho--) {

        if
        (
                frase[tamanho] == 'a' ||
                frase[tamanho] == 'e' ||
                frase[tamanho] == 'i' ||
                frase[tamanho] == 'o' ||
                frase[tamanho] == 'u'
        ) {
            vogal++;
        }

        if(frase[tamanho] == " ") {
            espaco++;
        }

    }

    outros = tamanho - vogal - espaco;

    printf("Quantidade de vogais %d, quantidade de espacos %d, outros caracteres %d", vogal, espaco, outros);

    getchar();
    getchar();

    return 0;
}