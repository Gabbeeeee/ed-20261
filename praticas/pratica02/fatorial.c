// Ler um número inteiro positivo e calcular o seu fatorial de duas formas: utilizando repetição;
// e utilizando recursividade. Indicar a complexidade assintótica de cada solução.

#include <stdio.h>    

long long fat_recursivo(int n) {  //complexidade O(n)

    if (n < 0) return -1; 
    
    if (n == 0 || n == 1) return 1; 

    return n * fat_recursivo(n-1);
}

long long fat_iterativo(int n) { //complexidade O(n)

    if (n < 0) return -1; // erro

    if (n == 0 || n == 1) return 1; 

    long long resultado = 1;

    for(int i = 2; i <= n; i++) {
        resultado *= i;
    }

    return resultado;
}

int main (){
    //TESTES

    printf("Fatorial recursivo de 12: %lld\n", fat_recursivo(12));
    printf("Fatorial iterativo de 12: %lld\n", fat_iterativo(12));

    printf("Fatorial recursivo de 6: %lld\n", fat_recursivo(6));
    printf("Fatorial iterativo de 6: %lld\n", fat_iterativo(6));

    printf("Fatorial recursivo de -4: %lld\n", fat_recursivo(-4));
    printf("Fatorial iterativo de -4: %lld\n", fat_iterativo(-4));

    printf("Fatorial recursivo de 20: %lld\n", fat_recursivo(20));
    printf("Fatorial iterativo de 20: %lld\n", fat_iterativo(20));

    return 0;
}