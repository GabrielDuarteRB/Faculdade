#include <stdio.h>
#include <string.h>

float mediaAritimetica(float n1, float n2, float n3) {
    return (n1 + n2 + n3) / 3;
}

float mediaPonderada(float n1, float n2, float n3) {
    return ((n1 * 5) + (n2 * 3) + (n3 * 2)) / 10;
}

float mediaHarmonica(float n1, float n2, float n3) {
    return 3 / (1/n1 + 1/n2 + 1/n3);
}

int main() {

    char opcao[1];
    float n1, n2, n3, media;

    while(strcmp(opcao, "a") && strcmp(opcao, "p") && strcmp(opcao, "h")) {
        printf("\na - Media Aritimetica");
        printf("\np - Media Ponderada");
        printf("\nh - Media Harmonica");
        printf("\nDigite uma opcao: ");
        gets(opcao);
    }

    printf("digite a nota 1: ");
    scanf("%f", &n1);
    printf("digite a nota 2: ");
    scanf("%f", &n2);
    printf("digite a nota 3: ");
    scanf("%f", &n3);

    switch (opcao[0]) {
        case 'a':
            media = mediaAritimetica(n1, n2, n3);
            break;
        case 'p':
            media = mediaPonderada(n1, n2, n3);
            break;
        case 'h':
            media = mediaHarmonica(n1, n2, n3);
            break;
    }

    printf("A media das notas é %.2f", media);

    getchar();
    getchar();

    return 0;

}