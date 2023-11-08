#include <stdio.h>
#include <stdlib.h>

void bubbleSort(int array[], int lenght) {
    int new_lenght = lenght;

    for (int i = 0; i < new_lenght - 1; i++) { 

        for (int j = 0; j < new_lenght - 1; j++) {

            if (array[j] > array[j+1]) {
                int aux = array[j+1];
                array[j+1] = array[j];
                array[j] = aux;
            }

        }

    }
}

int main() {
    int valor, tamanho = 0;

    printf("Insira o tamanho do array: ");
    scanf("%d", &tamanho);
    int array[tamanho];

    for(int i = 0; i < tamanho; i++) {
        printf("\nInsira um valor: ");
        scanf("%d", &valor);
        array[i] = valor;
    }

    bubbleSort(array, tamanho);

    for (int i = 0; i < tamanho; i++) {
        printf("%d ", array[i]);
    }

    return 0;
}