#include <stdio.h>

typedef struct {
    int n200;
    int n100;
    int n50;
    int n20;
    int n10;
    int n5;
    int n2;
    int resto;
} Cedulas;


Cedulas qnt_cedulas(int valor) 
{
    Cedulas c = {0};  //inicializa struct toda com zero

    if (valor <= 0 || valor > 1000) 
    {
        c.resto = -1; //indica erro
        printf("Erro: valor maximo excedido.\n");
        return c;
    }
    
    c.n200 = valor /200;
    valor %= 200;

    c.n100 = valor /100;
    valor %= 100;

    c.n50 = valor /50;
    valor %= 50;

    c.n20 = valor /20;
    valor %= 20;

    c.n10 = valor /10;
    valor %= 10;

    c.n5 = valor /5;
    valor %= 5;

    c.n2 = valor /2;
    valor %= 2;

    c.resto = valor;

    return c;
}

int main() {

    printf("Teste -> 774 reais\n");

    Cedulas resultado = qnt_cedulas(774);
    printf("200: %d\n", resultado.n200);
    printf("100: %d\n", resultado.n100);
    printf("50: %d\n", resultado.n50);
    printf("20: %d\n", resultado.n20);
    printf("10: %d\n", resultado.n10);
    printf("5: %d\n", resultado.n5);
    printf("2: %d\n", resultado.n2);

    printf("Teste -> 2000 reais\n");

    Cedulas result = qnt_cedulas(2000);
    printf("200: %d\n", result.n200);
    printf("100: %d\n", result.n100);
    printf("50: %d\n", result.n50);
    printf("20: %d\n", result.n20);
    printf("10: %d\n", result.n10);
    printf("5: %d\n", result.n5);
    printf("2: %d\n", result.n2);

    return 0;
}