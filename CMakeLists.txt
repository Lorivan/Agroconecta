cmake_minimum_required(VERSION 3.10)
project(Agroconecta C)

# Inclui os diretórios onde os arquivos de cabeçalho (.h) estão localizados
include_directories(src include)

# Adiciona os arquivos fonte (.c) do seu projeto
# Certifique-se de listar todos os arquivos .c aqui
add_executable(Agroconecta
        src/main.c
        src/tela_cadastro_agricultor.c
        src/tela_cadastro_cliente.c
        src/tela_cadastro_usuario.c
        src/tela_login.c
)

# Se você tiver bibliotecas externas, adicione-as aqui
# target_link_libraries(Agroconecta sua_biblioteca)
