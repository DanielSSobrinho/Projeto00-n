#include <stdio.h>

int main () {
    int opcao;
    do {
    printf("Menu - Opções de Funções\n");
    printf("Opção 1 - Cadastro cliente\n");
    printf("Opção 2 - Descadastro cliente\n"); 
    printf("Opção 3 - Altera cliente\n");
    printf("Opção 4 - Busca cliente\n");
    printf("Opção 0 - Sair\n");
    printf("Escolha uma opção:\n");
    int i = scanf("%d\n", opcao);
    printf("Opção escolhida:\n", opcao);
    }while(opcao != 0);
}
