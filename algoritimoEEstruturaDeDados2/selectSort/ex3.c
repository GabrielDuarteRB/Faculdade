#include <stdio.h>

int encontrarK(int arr[], int tamanho, int k) {
    int aux;

    if (k >= 1 && k <= tamanho) {                           
        for (int i = 0; i < tamanho - 1; i++) {
            int min_idx = i;
            for (int j = i + 1; j < tamanho; j++) {
                if (arr[j] < arr[min_idx]) {
                    min_idx = j;
                }
            }
            
            aux = arr[i];
            arr[i] = arr[min_idx];
            arr[min_idx] = aux;
        }

        printf("Array ordenado:\n");
        for (int i = 0; i < tamanho; i++) {
            printf("%d ", arr[i]);
        }
        return arr[k - 1];

    } else {
        return -1;
    }
}

int main() {
    int tamanho, k;

    printf("Tamanho do array: ");
    scanf("%d", &tamanho);

    int arr[tamanho];

    for (int i = 0; i < tamanho; i++) {
        printf("\nDigite um valor: ");
        scanf("%d", &arr[i]);
    }

    printf("Valor de k: ");
    scanf("%d", &k);

    int elementoK = encontrarK(arr, tamanho, k);

    if (elementoK != -1) {
        printf("O %d° menor elemento é: %d\n", k, elementoK);
    } else {
        printf("Valor de k inválido\n");
    }

    return 0;
}
