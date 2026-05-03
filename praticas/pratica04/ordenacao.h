#ifndef ORDENACAO_H
#define ORDENACAO_H

void troca(int *a, int *b);

void bubble_sort(int *v, int n);
void selection_sort(int *v, int n);

int particionar(int *v, int inicio, int fim);
void quick_sort(int *v, int inicio, int fim);

#endif