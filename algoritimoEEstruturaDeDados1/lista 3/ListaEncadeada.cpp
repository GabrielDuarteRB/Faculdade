#include <stdio.h>

struct No
{
    int dado;
    struct No *prox;
} *inicio = NULL;

int menu()
{
    int op;
    printf("menu\n"
           "1 Inserir no Inicio\n"
           "2 Inserir no final\n"
           "3 Imprimir\n"
           "4 Buscar\n"
           "5 Alterar (usando o buscar)\n"
           "6 Excluir um unico elemento (usando o buscar)\n"
           "7 Deletar toda a lista\n"
           "8 fim\n");
    scanf("%d", &op);
    return op;
}

int inclui_inicio(int num)
{
    struct No *novo;
    novo = new struct No();
    if (novo == NULL)
    {
        return 0;
    }
    novo->dado = num;
    novo->prox = inicio;
    inicio = novo;
    return 1;
}

int inclui_final(int num)
{
    struct No *novo, *atual;
    novo = new struct No();
    if (novo == NULL)
    {
        return 0;
    }
    novo->dado = num;
    novo->prox = NULL;
    if (inicio == NULL)
    {
        inicio = novo;
    }
    else
    {
        atual = inicio;
        while (atual->prox != NULL)
        {
            atual = atual->prox;
        }
        atual->prox = novo;
    }
    return 1;
}

int imprime()
{
    struct No *atual;
    atual = inicio;
    while (atual != NULL)
    {
        printf("%d ", atual->dado);
        atual = atual->prox;
    }
    printf("\n");
    return 1;
}

void buscar(int num)
{
    int controle = 0;
    struct No *atual;
    atual = inicio;
    while (atual != NULL)
    {
        if (atual->dado == num)
        {
            printf("Encontrado hein %p \n\n", atual->prox);
            controle = 1;
        }
        atual = atual->prox;
    }
    if (controle == 0)
    {
        printf("numero nao encontrado! \n\n");
    }
}

int alterar(int num, int novo_num)
{
    struct No *atual;
    atual = inicio;
    while (atual != NULL)
    {
        if (atual->dado == num)
        {
            atual->dado = novo_num;
            return 1;
        }
        atual = atual->prox;
    }
    return 0;
}

int excluir(int num)
{
    struct No *atual, *anterior;
    atual = inicio;
    anterior = NULL;
    while (atual != NULL)
    {
        if (atual->dado == num)
        {
            if (anterior == NULL)
            {
                inicio = atual->prox;
            }
            else
            {
                anterior->prox = atual->prox;
            }
            delete (atual);
            return 1;
        }
        anterior = atual;
        atual = atual->prox;
    }
    return 0;
}

int deletar_tudo()
{
    struct No *atual, *prox;
    atual = inicio;
    while (atual != NULL)
    {
        prox = atual->prox;
        delete (atual);
        atual = prox;
    }
    inicio = NULL;
    return 1;
}

int main()
{
    int op, num, novo_num;
    op = menu();
    while (op != 8)
    {
        switch (op)
        {
        case 1:
            printf("Digite o numero a ser inserido no inicio da lista: ");
            scanf("%d", &num);
            if (inclui_inicio(num))
            {
                printf("Numero inserido com sucesso.\n\n");
            }
            else
            {
                printf("Erro ao inserir numero.\n\n");
            }
            break;
        case 2:
            printf("Digite o numero a ser inserido no final da lista: ");
            scanf("%d", &num);
            if (inclui_final(num))
            {
                printf("Numero inserido com sucesso.\n\n");
            }
            else
            {
                printf("Erro ao inserir numero.\n\n");
            }
            break;
        case 3:
            printf("Lista: ");
            if (imprime())
            {
                printf("Lista impressa com sucesso.\n\n");
            }
            else
            {
                printf("Erro ao imprimir lista.\n\n");
            }
            break;
        case 4:
            printf("Digite o numero a ser buscado: ");
            scanf("%d", &num);
            buscar(num);
            //                if (buscar(num)) {
            //                    printf("Numero encontrado na lista.\n\n");
            //                } else {
            //                    printf("Numero nao encontrado na lista.\n\n");
            //                }
            break;
        case 5:
            printf("Digite o numero a ser buscado: ");
            scanf("%d", &num);
            printf("Digite o novo numero: ");
            scanf("%d", &novo_num);
            if (alterar(num, novo_num))
            {
                printf("Numero alterado com sucesso.\n\n");
            }
            else
            {
                printf("Erro ao alterar numero.\n\n");
            }
            break;
        case 6:
            printf("Digite o numero a ser excluido: ");
            scanf("%d", &num);
            if (excluir(num))
            {
                printf("Numero excluido com sucesso.\n\n");
            }
            else
            {
                printf("Erro ao excluir numero.\n\n");
            }
            break;
        case 7:
            if (deletar_tudo())
            {
                printf("Lista deletada com sucesso.\n\n");
            }
            else
            {
                printf("Erro ao deletar lista.\n\n");
            }
            break;
        default:
            printf("Opcao invalida.\n\n");
            break;
        }
        op = menu();
    }
    return 0;
}
