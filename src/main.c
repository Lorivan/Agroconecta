#include <stdio.h>
#include <stdlib.h>

#include "tela_login.h"
#include "tela_cadastro_usuario.h"
#include "tela_cadastro_agricultor.h"
#include "tela_cadastro_cliente.h"


int main() {
    int opcao;

    do {
        system("cls || clear");
        printf("=== MENU PRINCIPAL ===\n");
        printf("1. Tela de Login\n");
        printf("2. Cadastro de usuario\n");
        printf("3. Cadastro agricultor\n");
        printf("4. Cadastro de cliente\n");
        printf("0. Sair\n");
        printf(" Escolha a Opcao: ");
        scanf("%d", &opcao);
        getchar();
        system("cls || clear");
        switch (opcao) {
            case 1: tela_login(); break;
             case 2: tela_cadastro_usuario(); break;
                case 3: tela_cadastro_agricultor(); break;
                case 4: tela_cadastro_cliente(); break;
                case 0: printf("Sair\n"); break;
                default: printf("Opcao invalida\n");
        }
        if (opcao != 0) {
            printf("\n Pressiona enter para continuar");
            getchar();
        }
    } while (opcao != 0);
    return 0;
}