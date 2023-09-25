#include <stdio.h>

void selectionSortDecrescente(int arr[], int tamanho) { 
    int i, j, max_index, aux;

    for (i = 0; i < tamanho - 1; i++) {
        max_index = i;
        for (j = i + 1; j < tamanho; j++) {
            if (arr[j] > arr[max_index]) {
                max_index = j;
            }
        }

        aux = arr[i];
        arr[i] = arr[max_index];
        arr[max_index] = aux;
    }
}

int main() {
    int tamanho;

    printf("Tamanho do array: ");
    scanf("%d", &tamanho);

    int arr[tamanho];

    for (int i = 0; i < tamanho; i++) {
        printf("\nDigite um numero do array:\n");
        scanf("%d", &arr[i]);
    }

    printf("Antes da ordenação:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", arr[i]);
    }

    selectionSortDecrescente(arr, tamanho);

    printf("\nOrdem decrescente:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
