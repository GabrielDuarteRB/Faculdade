#include <stdbool.h>

void bubbleSort(int array[], int tamanho) {
    int novoTamanho = tamanho;
    bool continuar = false;

    do {
        for (int i = 0; i < novoTamanho - 1; i++) {
            if (array[i]  > array[i+1]) {
                int temp = array[i+1];
                array[i+1] = array[i];
                array[i] = temp;
                continuar = true;
            }
        }

        novoTamanho--;

    } while (continuar);
}