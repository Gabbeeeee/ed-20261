// Ler um vetor com 100 números e procurar um valor informado pelo usuário utilizando a busca sequencial. 
// Indicar a complexidade assintótica do algorítimo analisando o melhor caso e o pior caso.

#include <stdio.h>    
#define TAM 100

void ler_vetor(int v[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        printf("Digite o elemento %d: ", i);
        scanf("%d", &v[i]);
    }
}

float busca_sequencial(int tamanho, float vetor[], float valor) {

    for (int i = 0; i < tamanho; i++) {
        if (vetor[i] == valor) {
           return i; //retorna índice da primeira ocorrência
        }
    }
    return -1; //indica erro: número não encontrado
}

//melhor caso: achou no primeiro -> complexidade O(1)
//pior caso: não achou -> complexidade O(n)


int main() {

    int vetor[100] = { //TESTE
    12, 45, 7, 89, 23, 56, 78, 34, 90, 11,
    67, 3, 29, 54, 81, 6, 38, 72, 14, 99,
    25, 60, 1, 44, 88, 19, 73, 32, 50, 27,
    91, 5, 66, 48, 21, 84, 9, 36, 70, 15,
    95, 2, 58, 41, 76, 18, 63, 30, 52, 87,
    10, 68, 4, 80, 24, 57, 92, 13, 39, 74,
    16, 83, 28, 61, 8, 46, 97, 20, 64, 35,
    79, 17, 53, 93, 22, 69, 40, 82, 26, 59,
    94, 31, 75, 47, 85, 33, 62, 6, 98, 37,
    71, 49, 86, 42, 65, 55, 77, 43, 96, 100
    };
    
    printf("Busca 1 (12): posicao = %d\n", busca_sequencial(vetor, TAM, 12));    // início (melhor caso)
    printf("Busca 2 (89): posicao = %d\n", busca_sequencial(vetor, TAM, 89));    // finalzinho
    printf("Busca 3 (100): posicao = %d\n", busca_sequencial(vetor, TAM, 100));  // final (pior caso)
    printf("Busca 4 (6): posicao = %d\n", busca_sequencial(vetor, TAM, 6));      // aparece mais de uma vez, retorna a primeira ocorrência
    printf("Busca 5 (101): posicao = %d\n", busca_sequencial(vetor, TAM, 101));  // 101 → não existe, retorna -1

    return 0;
}