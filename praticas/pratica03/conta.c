#include <stdio.h>
#include <stdlib.h>
#include "conta.h"

struct conta {
    int numero;
    float saldo;
};

Conta* criar_conta(int numero) 
{
    Conta* c = (Conta*) malloc(sizeof(Conta));  // aloca memória dinamicamente para a conta
    if (c != NULL) {                            // verificação de erro
        c->numero = numero;
        c->saldo = 0.0;
    }
    return c;                    //retorna o ponteiro para a conta criada
}

void depositar_conta(Conta* c, float valor) 
{
    if (c != NULL && valor > 0) {  //só deposita se a conta existir e o valor for positivo
        c->saldo += valor;           
    }
}

int sacar_conta(Conta* c, float valor) 
{
    if (c != NULL && valor > 0 && c->saldo >= valor) //a conta existe e tem dinheiro suficiente?
    {
        c->saldo -= valor;
        return 1;           //sim -> conseguiu sacar
    }
    return 0;               //não -> saldo insuficiente
}

float ver_saldo_conta(Conta* c) 
{
    if (c != NULL) {       //retorna 0 se não existir a conta
        return c->saldo;
    }
    return 0.0;
}

void destruir_conta(Conta* c) {  //libera memória alocada
    free(c);
}