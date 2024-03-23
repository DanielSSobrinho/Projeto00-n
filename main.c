#include <stdio.h>
#include "tarefas.h"

void main(){
    int posicao = 0; 
    Tarefa tarefa[TOTAL];


    int resp;
    do
    {
        printf("\nMenu Principal: \n");
        printf("1 - Criar Tarefa \n");
        printf("2 - Deletar Tarefa \n");
        printf("3 - Listar Tarefas \n");
        printf("0 - Sair \n");

        printf("Entre com uma opcao: ");

        scanf("%d", &resp);
        printf("Opcao selecionado: %d \n", resp);

        switch (resp)
        {
        case 1:
            Criar_tarefa(tarefa, &posicao);
            break;
        case 2:
            Deletar_tarefa(tarefa, &posicao);
            break;
        case 3:
            Listar_tarefa(tarefa, posicao);
            break;

        default:
            printf("Opcao invalida! \n");
            break;
        }
    } while (resp != 0);
    
}