#include <stdio.h>

struct No {
    int n;
    struct No *prox;
}*inicio=NULL;

void menu(int* opc) {
    printf("\n1 - Inserir no inicio");
    printf("\n2 - Inserir no final");
    printf("\n3 - Imprimir");
    printf("\n4 - Buscar");
    printf("\n5 - Alterar");
    printf("\n6 - Excluir um unico elemento");
    printf("\n7 - Deletar toda a lista");
    printf("\n8 - Sair");
    printf("\nEscolha uma opcao:");
    scanf("%d", opc);
}

void inserir_inicio() {
    int value;
    struct No *novo;
    printf("\nEscolha um valor para ser adicionado: ");
    scanf("%d", &value);
    if(novo == NULL) {
       printf("\nNao inserido, nao ha memoria disponivel.");
       return;
    }

    novo->n = value;
    novo->prox = inicio;
    printf("\nValor inserido com sucesso\n");
}

void inserir_final() {
    int value;
    printf("\nEscolha um valor para ser adicionado: ");
    scanf("%d", &value);
    struct No *novo, *aux;
    novo = new struct No();

    if(novo == NULL) {
        printf("\nNao inserido, nao ha memoria disponivel.");
        return;
    } 

    if(inicio == NULL) {
        inicio = novo;
    } else {
        aux = inicio;
        while(aux->prox != NULL) {
            aux = aux->prox;
        }
    }

    novo->n = value;
    novo->prox = NULL;
    aux->prox = novo;
    printf("\nValor inserido com sucesso\n");
}

void imprimir() {
    struct No *aux = inicio;

    if(aux == NULL){
        printf("Lista vazia!");  
        return;      
    }

    for(;aux != NULL; aux=aux->prox) {
        printf("%d ", aux->n);
    }
}

int main() {
    int opc = 0;

    while(opc != 8) {
        menu(&opc);

        switch (opc)
        {
            case 1:
                inserir_inicio();
                break;
            case 2:
                inserir_final(); 
                break;
            case 3:
                imprimir();
                break;
            case 4:
                printf("Buscar");
                break;
            case 5:
                printf("Alterar");
                break;
            case 6:
                printf("Excluir um unico elemento");
                break;
            case 7:
                printf("excluir a lista toda");
                break;
            case 8:
                printf("Ate logo\n");
                break;
            default:
                printf("\nEscolha um numero valido\n");
        }
    }

    getchar();

    return 0;
}