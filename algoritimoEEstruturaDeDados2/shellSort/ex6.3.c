#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void shellSort(char *arr[], int n) {
    int a, b, c;
    char *temp;

    a = n / 2;
    for (a; a > 0; a /= 2) {

        for (b = a; b < n; b++) {

            temp = arr[b];

            for (c = b; c >= a && strcmp(arr[c - a], temp) > 0; c -= a) {
                arr[c] = arr[c - a];
            }

            arr[c] = temp;
        }
    }
}
int main() {
    int tamanho, i;

    printf("Digite a quantidade de letras que serao exibidos: ");
    scanf("%d", &tamanho);

    char *arr[tamanho];

    for (i = 0; i < tamanho; i++) {
        printf("Letra: ");
        char letra[100];
        scanf("%s", letra);
        arr[i] = (char *)malloc(strlen(letra) + 1);
        strcpy(arr[i], letra);
    }

    printf("\nAntes da ordenacao:\n");
    for (i = 0; i < tamanho; i++) {
        printf("%s\n", arr[i]);
    }

    shellSort(arr, tamanho);

    printf("\nOrdenacao: \n");
    for (i = 0; i < tamanho; i++) {
        printf("%s\n", arr[i]);
        free(arr[i]);
    }

    getchar();
    getchar();
    return 0;
}