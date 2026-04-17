#ifndef SELECAO_H
#define SELECAO_H

int busca_sequencial(int vetor[], int n, int valor);

int quick_select(int v[], int inicio, int fim, int valor);
int particionar_vetor(int v[], int inicio, int fim);
void troca(int *a,int *b);

#endif