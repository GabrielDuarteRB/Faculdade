#include <stdio.h>
#include <string.h>

float mediaAritimetica(float n1, float n2, float n3) {
    return (n1+n2+n3)/3;
}

float mediaPonderada(float n1, float n2, float n3) {
    return (n1*5 + n2*3 + n3*2)/10;
}

float mediaHarmonica(float n[3]) {
    float divisao = 0;

    for(int i = 0; i < 3; i++) {
        if(n[i] > 0) {
            divisao = divisao + 1/n[i];
        }
    }

    return 3/divisao;
}

int main() {
    float n[3], media;
    char opcao[1];

    while(strcmp(opcao, "a") && strcmp(opcao, "p") && strcmp(opcao, "h")) {
        printf("\na - Media Aritimetica");
        printf("\np - Media Ponderada");
        printf("\nh - Media Harmonica");
        printf("\nDigite uma opcao: ");
        gets(opcao);
    }

    for(int i = 0; i < 3; i++) {
        n[i] = -50;
        while(n[i] < 0) {
            printf("Digite a nota %d: ", i+1);
            scanf("%f", &n[i]);
        }
    }

    switch (opcao[0]) {
        case 'a':
            media = mediaAritimetica(n[0], n[1], n[2]);
            break;
        case 'p':
            media = mediaPonderada(n[0], n[1], n[2]);
            break;
        case 'h':
            media = mediaHarmonica(n);
            break;
    }

    printf("Sua media e %.2f", media);

    getchar();
    getchar();
    return 0;
}