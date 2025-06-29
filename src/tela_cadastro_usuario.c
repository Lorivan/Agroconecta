#include <stdio.h>
#include <stdlib.h>
#include "tela_cadastro_usuario.h"

void tela_cadastro_usuario() {
    char nome[50];
    char email[50];
    char cpf[15];
    int idade;
    system("cls || clear");
    printf("Nome: ");
    fgets(nome, sizeof(nome), stdin);
    printf("Email: ");
    fgets(email, sizeof(email), stdin);
    printf("CPF: ");
    fgets(cpf, sizeof(cpf), stdin);
    printf("Idade: ");
    scanf("%d", &idade);
    printf("Usuario cadastrado com sucesso!\n");
}
