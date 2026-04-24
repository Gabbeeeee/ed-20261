#ifndef CONTA_H
#define CONTA_H   

typedef struct conta Conta;

Conta* criar_conta(int numero); //cria uma conta e retorna um ponteiro para ela

void depositar_conta(Conta* c, float valor);  //saldo + valor = novo saldo

int sacar_conta(Conta* c, float valor); //retorna 1 se ok, 0 se falhou

float ver_saldo_conta(Conta* c); 

void destruir_conta(Conta* c);  //libera memória alocada na criação

#endif