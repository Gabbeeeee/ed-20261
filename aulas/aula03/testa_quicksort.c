#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "ordenacao.h"

#define TAMANHO 100000

int main() 
{
    int vetor[TAMANHO];
    for(int i=0; i < TAMANHO; i++) 
    {
        vetor[i] = rand()%10;
    }

    //printf("Vetor antes de ordenar\n");
    //imprimir_vetor(vetor, TAMANHO);

    clock_t inicio = clock();
    quick_sort(vetor, 0, TAMANHO-1);
    clock_t termino = clock();
    float duracao = (float)(termino - inicio) / CLOCKS_PER_SEC;

    printf("Vetor ordenado em %fs\n", duracao);
    //imprimir_vetor(vetor,TAMANHO);

    return 0;
}