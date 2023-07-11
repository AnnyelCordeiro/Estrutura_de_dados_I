#include<stdio.h>
#include"pessoa.h"

int main() {
    Pessoa *lista = NULL;
    int opcao;

    do {
        printf("\n---- MENU ----\n");
        printf("1. Inserir pessoa no início\n");
        printf("2. Inserir pessoa no fim\n");
        printf("3. Inserir pessoa ordenadamente\n");
        printf("4. Mostrar todas as pessoas\n");
        printf("5. Buscar pessoa\n");
        printf("6. Remover pessoa\n");
        printf("7. Liberar memória\n");
        printf("8. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                inserirPessoaInicio(lista);
                break;
            case 2:
                inserirPessoaFim(lista);
                break;
            case 3:
                inserirPessoaOrdenado(lista);
                break;
            case 4:
                mostrarTodasPessoas(lista);
                break;
            case 5:
                buscarPessoa(lista);
                break;
            case 6:
                removerPessoa(lista);
                break;
            case 7:
                liberarMemoria(lista);
                break;
            case 8:
                printf("Saindo...\n");
                break;
            default:
                printf("Opção inválida!\n");
                break;
        }
    } while (opcao != 8);

    return 0;
}
