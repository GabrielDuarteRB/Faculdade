#include <stdio.h>

int main() {

    int matriz[5][5], c, l;

    for(l = 0; l < 5; l++) {
        for(c = 0; c < 5; c++) {
            if(l == c) {
                matriz[l][c] = 1;
            } else {
              matriz[l][c] = 0;
            }
        }
    }

    for(c = 0; c < 5; c++) {
        for(l = 0; l < 5; l++) {
            printf("%d", matriz[l][c]);
        }
        printf("\n");
    }

    getchar();
    getchar();
    return 0;

}