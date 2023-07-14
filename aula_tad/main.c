#include <stdio.h>
#include <stdlib.h>
#include "pessoa.h"

int main(){

    Pessoa *pessoas = list_pessoa();
    int opcao;
    float altura;

    do{
        printf("\nEscolha uma opcao:\n");
        printf("1 - Adicionar pessoa\n");
        printf("2 - Remover pessoa\n");
        printf("3 - Buscar pessoa\n");
        printf("4 - Mostrar todas as pessoas\n");
        printf("0 - Sair\n");
        scanf("%d", &opcao);

        switch(opcao){
            case 1:
                pessoas = add(pessoas);
                break;
            case 2:
                printf("\nInsira a altura da pessoa a ser removida: ");
                scanf("%f", &altura);
                pessoas = remover(pessoas, altura);
                break;
            case 3:
                printf("\nInsira a altura da pessoa a ser buscada: ");
                scanf("%f", &altura);
                mostrar_pessoa(pessoas, altura);
                break;
            case 4:
                mostrar_todos(pessoas);
                break;
            case 0:
                printf("\nSaindo...\n");
                break;
            default:
                printf("\nOpcao invalida.\n");
                break;
        }

    }while(opcao != 0);

    return 0;
}
