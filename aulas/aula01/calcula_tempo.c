#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
 
    long int soma = 10 + 20; 

    clock_t tempo_inicial = clock();

    for (long int i=0; i<10000000000L; i++) {
        soma = soma + 1;
    }

    clock_t tempo_final = clock();

    float duracao = (float) (tempo_final - tempo_inicial) / CLOCKS_PER_SEC;

    printf("O tempo de execucao foi %.5lf segundos\n", duracao);

    return 0;
}