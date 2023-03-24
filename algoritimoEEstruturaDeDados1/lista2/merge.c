#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void merge(int array[], int esquerda[], int direita[], int tamanhoEsquerdo, int tamanhoDireito) {
    int i, j, k;
    i = j = k = 0;

    while (i < tamanhoEsquerdo && j < tamanhoDireito) {
        if (esquerda[i] <= direita[j]) {
            array[k++] = esquerda[i++];
        } else {
            array[k++] = direita[j++];
        }
    }

    while (i < tamanhoEsquerdo) {
        array[k++] = esquerda[i++];
    }

    while (j < tamanhoDireito) {
        array[k++] = direita[j++];
    }
}

void mergeSort(int array[], int tamanho) {
    if (tamanho < 2) {
        return;
    }

    int meio = tamanho / 2;

    int esquerda[meio], direita[tamanho - meio];

    for (int i = 0; i < meio; i++) {
        esquerda[i] = array[i];
    }

    for (int i = meio; i < tamanho; i++) {
        direita[i - meio] = array[i];
    }

    mergeSort(esquerda, meio);
    mergeSort(direita, tamanho - meio);
    merge(array, esquerda, direita, meio, tamanho - meio);
}

int main(){
	int qtd, max, j=0, tam=10000;
	int array[tam], aux=0;
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
    
	
	mergeSort(array, tam);

    for (int i = 0; i < tam; i++) {
        printf("%d ", array[i]);
    }
	
	clock_t end = clock();
	time_spent += (double)(end - begin) / CLOCKS_PER_SEC;

	printf("O tempo de execucao foi: %f segundos\n", time_spent);
	
	return 0;
}