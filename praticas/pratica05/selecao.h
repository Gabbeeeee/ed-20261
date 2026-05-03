#ifndef SELECAO_H
#define SELECAO_H

void troca(int *a, int *b);

int linear_search(int *v, int n, int k);
int particionar(int *v, int inicio, int fim);
int quick_select(int *v, int inicio, int fim, int k);

void bubble_sort(int *v, int n); // para ordenar vetor e verificar valor da posicao k

#endif