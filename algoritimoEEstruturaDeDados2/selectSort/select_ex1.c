#include <stdio.h>


void selectionSort(int arr[], int tamanho) {
    int i, j, min_idx, aux;

    for (i = 0; i < tamanho - 1; i++) {
        min_idx = i;
        for (j = i + 1; j < tamanho; j++) {
            if (arr[j] < arr[min_idx]) {
                min_idx = j;
            }
        }

        aux = arr[i];
        arr[i] = arr[min_idx];
        arr[min_idx] = aux;
    }
}

int main() {
    int tamanho;

    printf("\nTamanho do array: ");
    scanf("%d", &tamanho);

    int arr[tamanho];

    for (int i = 0; i < tamanho; i++) {
        printf("Digite um numero:\n");
        scanf("%d", &arr[i]);
    }

    printf("Array antes:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", arr[i]);
    }

    selectionSort(arr, tamanho);

    printf("\nArray depois:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
