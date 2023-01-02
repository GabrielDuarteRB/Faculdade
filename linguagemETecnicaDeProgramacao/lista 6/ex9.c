#include <stdio.h>
#include <string.h>

int main() {

    char string1[100], string2[100];
    int tamanho1, tamanho2, aux;

    printf("Digite a primeira frase: ");
    gets(string1);

    printf("Digite a segunda frase: ");
    gets(string2);

    tamanho1 = strlen(string1);
    tamanho2 = strlen(string2);

    if(tamanho1 != tamanho2) {
        return printf("As frases sao diferentes");
    } else {
        for(aux = 0; aux < tamanho1; aux++) {
            if(string1[aux] != string2[aux]) {
                return printf("As frases sao diferentes");
            }
        }
    }

    printf("As frases sao iguais");

    getchar();
    getchar();

    return 0;
}