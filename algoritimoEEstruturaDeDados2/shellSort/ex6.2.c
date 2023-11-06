#include <stdio.h>

void shellSort(float lista[], int tamanho) {
    int a, b, c;
    float temp;
    a = tamanho / 2;

    for (a; a > 0; a /= 2) {
        
        for (b = a; b < tamanho; b++) {

            temp = lista[b];

            for (c = b; c >= a && lista[c - a] < temp; c -= a) {
                lista[c] = lista[c - a];
            }

            lista[c] = temp;

        }
    }
}
int main() {
    int tamanho, i;

    printf("Digite a quantidade de numeros reais que serao exibidos: ");
    scanf("%d", &tamanho);

    float arr[tamanho];

    for (i = 0; i < tamanho; i++) {
        printf("Numero: ");
        scanf("%f", &arr[i]);
    }
    printf("Antes da ordenacao:\n");
    for (i = 0; i < tamanho; i++) {
        printf("%.1f ", arr[i]);
    }

    shellSort(arr, tamanho);

    printf("\nOrdenacao: \n");
    for (i = 0; i < tamanho; i++) {
        printf("%.2f ", arr[i]);
    }

    getchar();
    getchar();
    return 0;
}
