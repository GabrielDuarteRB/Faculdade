#include <stdio.h>

void shellSort(int lista[], int tamanho){
    int a, b, c = 1, aux;

    while (c < tamanho/3){
        c = 3 * c + 1;
    }

    while (c > 0){
        for (a = c; a < tamanho; a++){
                aux = lista[a];
                b = a;

                while (b >= c && aux < lista[b - c]){
                    lista[b] = lista[b - c];
                    b = b - c;
                }

                lista[b] = aux;
        }

        c = (c - 1)/3;
    }
}


int main(){
    int lista[10] = {90, 4, 27, 2, 21, 1, 8, 100, 87, 7}, tamanho = 10;
    int i;

    shellSort(lista, tamanho);

    for (i = 0; i < tamanho; i++){
        printf(" %d ", lista[i]);
    }

    getchar();
    getchar();
    return 0;
}
