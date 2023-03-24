#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partition(int arr[], int low, int high) {
    int pivot = arr[high];
    int i = low - 1;
    for (int j = low; j < high; j++) {
        if (arr[j] < pivot) {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return i + 1;
}

void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

int main() {
    int tam=10000, array[tam], tamanho, j= 0;
	double time_spent = 0.0;
	
	FILE *fp;
	fp = fopen("dezMil.txt", "r");
	if(fp == NULL){
	    printf("erro! NAO ACHEI\n");
	    return 1;
	}
	while(1){
		fscanf(fp,"%d",&array[j]);
		j++;
		if (feof(fp)){
			break;
		}
	}
	
	fclose(fp);
 
    clock_t begin = clock();

    tamanho = tam / sizeof(array[0]);
	
	quickSort(array, 0, tamanho-1);

    for (int i = 0; i < tam; i++) {
        printf("%d ", array[i]);
    }
	
	clock_t end = clock();
	time_spent += (double)(end - begin) / CLOCKS_PER_SEC;

	printf("O tempo de execucao foi: %f segundos\n", time_spent);
	
	return 0;
}