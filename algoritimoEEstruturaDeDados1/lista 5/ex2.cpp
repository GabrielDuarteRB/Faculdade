#include <stdio.h>

struct No {
    int n;
    struct No *prox, *ant;
}*inicio = NULL, *fim = NULL;

void menu(int* opc) {
    printf("\n1 - Inserir no inicio");
    printf("\n2 - Inserir no fim");
    printf("\n3 - Imprimir");
    printf("\n4 - Buscar");
    printf("\n5 - Alterar");
    printf("\n6 - Excluir um unico elemento");
    printf("\n7 - Excluir a lista toda");
    printf("\n8 - Sair");
    printf("\nEscolha uma opcao: ");
    scanf("%d", opc);
}

void inserir_inicio() {
    int valor;
    struct No *novo, *aux = inicio, *aux2 = fim;
    novo = new struct No();

    printf("Escolha um valor para ser adicionado no inicio: ");
    scanf("%d", &valor);

    if(novo == NULL) {
        printf("Nao ha memoria o suficiente");
        return;
    }
    
    novo->n = valor;
    if(inicio == NULL) {
        novo->prox = novo;
        novo->ant = novo;
        fim = novo;
    } else {
        novo->prox = inicio;
        novo->ant = fim;
        aux2->prox = novo;
    } 

    inicio = novo;
    printf("valor inserido com sucesso");
}

void inserir_final() {
    int valor;
    struct No *novo, *aux = inicio, *aux2 = fim;
    novo = new struct No();

    printf("Escolha um valor para ser adicionado no final: ");
    scanf("%d", &valor);

    if(novo == NULL) {
        printf("Nao ha memoria o suficiente");
        return;
    }

    novo->n = valor;
    if(inicio == NULL) {
        novo->prox = novo;
        novo->ant = novo;
        inicio = novo;
    } else {
        novo->prox = aux;
        aux2->prox = novo;
    }

    fim = novo;

    printf("valor inserido com sucesso");
}

void imprimir() {

    struct No *aux = inicio;

    if(aux == NULL) {
        printf("Lista vazia!");
        return;
    }

    do{
        printf("\n%d", aux->n);
        aux = aux->prox;
    }while(aux != inicio);
}

No* buscar(int valor) {
    struct No *aux = inicio, *aux2 = fim;

    while((aux->ant != aux2->prox && aux != aux2->prox) || aux2 == fim) {
        if(aux->n == valor) {
            printf("\nValor encontrado");
            return aux;
        }

        if(aux2->n == valor) {
            printf("\nValor encontrado");
            return aux2;
        }

        aux = aux->prox;
        aux2 = aux2->ant;
    } 

    printf("\nValor nao foi encontrado");
    return NULL;
}

void alterar() {
    int valor, novoValor;
    struct No *aux;

    printf("Escolha um valor para ser alterado: ");
    scanf("%d", &valor);
    printf("Escolha o novo valor: ");
    scanf("%d", &novoValor);
    aux = buscar(valor);
    

    if(aux != NULL) {
        aux->n = novoValor;
        printf(" e alterado");
    }
}

void excluir_elemento() {
    int valor;
    struct No *aux = inicio;
    printf("Escolha um valor para ser excluido: ");
    scanf("%d", &valor);

    if(aux == NULL) {
        printf("Lista vazia!");
    }

    do {
        if(aux->n == valor) {
            if(aux == NULL) {
                inicio = NULL;
            } else {
                aux->ant->prox = aux->prox;
                aux->prox->ant = aux->ant;
            }

            printf("\nValor excluido com sucesso!");
            delete(aux);
            return;
        }
        aux = aux->prox;
    } while(aux != inicio);

}

void excluir_lista_toda() {
    struct No *atual = inicio, *prox;

    do {
        prox = atual->prox;
        delete(atual);
        atual = prox;
    } while(atual != inicio);

    inicio = NULL;

    printf("Lista excluida!");
}

int main(){
    int opc = 0;


    while(opc != 8) {
        menu(&opc);
        switch (opc) {
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
                int valor;
                printf("Escolha um valor para ser buscado: ");
                scanf("%d", &valor);
                buscar(valor);
                break;
            case 5:
                alterar();
                break;
            case 6:
                excluir_elemento();
                break;
            case 7:
                excluir_lista_toda();
                break;
            case 8:
                printf("Ate logo");
                break;
            default:
                printf("Digite um numero valido!");
        }
    }

    getchar();
    return 0;
};