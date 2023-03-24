#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	int i, qtd, max;
	FILE *fp;
	fp = fopen("aleatorios.txt", "w");
	if(fp == NULL){
	    printf("erro.\n");
	    return 1;
	}
	
	printf("Entre com a quantidade de numeros a serem gerados.... ");
	scanf ("%d%*C", &qtd);
	max = qtd*10;
	
	srand( (unsigned) time(NULL));
	for(i=1; i<=qtd; i++){
	    fprintf(fp, "%d\n", rand()% (max));
	}
	fclose(fp);
	return 0;
}
