#include <stdio.h>

int main() {

    int estoque, fornecidos;

    printf("Itens em estoque: ");
    scanf_s("%d", &estoque);

    printf("Itens fornecidos: ");
    scanf_s("%d", &fornecidos);

    if(estoque < fornecidos) {
        printf("Não havará itens suficientes em estoque para atender o pedido");
        getchar();
        getchar();
        return 0;
    }

    estoque -= fornecidos;

    printf("Estoque atual pos compra: %d", estoque);
    getchar();
    getchar();
    return 0;
}