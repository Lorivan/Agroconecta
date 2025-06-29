#include <stdio.h>
#include <stdlib.h>
#include "tela_cadastro_cliente.h"

void tela_cadastro_cliente() {
    char nome[50];
    char endereco[100];
    char telefone[22];
    char cpf[15];

    system("cls || clear");
    printf("===CADASTRO DE CLIENTE===\n");
    printf("Nome: ");
    fgets(nome, sizeof(nome), stdin);
    printf("endereco: ");
    fgets(endereco, sizeof(endereco), stdin);
    printf("telefone: ");
    fgets(telefone, sizeof(telefone), stdin);
    printf("cpf: ");
    fgets(cpf, sizeof(cpf), stdin);
    printf("Cliente cadastrado com sucesso!\n");
}

