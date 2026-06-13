#include <stdio.h>
#include "lista_linear.h"

int main() {

    Lista *lista = lista_criar();

    lista_inserir_inicio(lista, 20);
    lista_inserir_inicio(lista, 10);

    lista_inserir_final(lista, 30);
    lista_inserir_final(lista, 40);

    lista_exibir(lista);

    if (lista_buscar(lista, 30))           //valor que existe na lista
        printf("Valor 30 encontrado.\n");
    else
        printf("Valor 30 nao encontrado.\n");

    if (lista_buscar(lista, 50))           //valor que não existe
        printf("Valor 50 encontrado.\n");
    else
        printf("Valor 50 nao encontrado.\n");

    printf("\nRemovendo 20:\n");

    lista_remover(lista, 20);
    lista_exibir(lista);

    printf("\nRemovendo 10:\n");

    lista_remover(lista, 10);
    lista_exibir(lista);

    printf("\nRemovendo 40:\n");

    lista_remover(lista, 40);
    lista_exibir(lista);

    lista_destruir(lista);

    return 0;
}