#include <stdio.h>
#include "conta.h"

int main() 
{
    //TESTE

    Conta* c1 = criar_conta(1);
    depositar_conta(c1, 1000.0);
    
    printf("Saldo: %.2f\n", ver_saldo_conta(c1));

    if (sacar_conta(c1, 300.0)) {
        printf("Saque feito.\n");
    } else {
        printf("Saldo insuficiente!\n");
    }

    printf("Saldo final: %.2f\n", ver_saldo_conta(c1));

    destruir_conta(c1);

    return 0;
}