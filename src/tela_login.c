#include <stdio.h>
#include <stdlib.h>
#include <tela_login.h>
void tela_login() {
    char usuario[50], senha[50];

    system("cls || clear");
    printf("===TELA DE LOGIN===\n");
    printf("admin");
    fgets(usuario, sizeof(usuario), stdin);
    printf("admin123");
    fgets(senha, sizeof(senha), stdin);
    printf("Login realizado com sucesso!\n");
}