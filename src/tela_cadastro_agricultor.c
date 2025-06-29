#include <stdio.h>
#include <stdlib.h>
#include "tela_cadastro_agricultor.h"

void tela_cadastro_agricultor() {
    char nome[50];
    char endereco[50];
    char telefone[50];
    char cidade[50];
    system("cls || clear");
    printf("===CADASTRAR AGRICULTOR===\n");
    printf("Nome: ");
    fgets(nome, sizeof(nome), stdin);
    printf("Endereco: ");
    fgets(endereco, sizeof(endereco), stdin);
    printf("Telefone: ");
    fgets(telefone, sizeof(telefone), stdin);
    printf("Cidade: ");
    fgets(cidade, sizeof(cidade), stdin);
    printf("Agricultor cadastrado com sucesso\n");
}
