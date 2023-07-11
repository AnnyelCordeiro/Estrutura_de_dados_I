#include<stdio.h>
#include<stdlib.h>
#include"pessoa.h"

struct pessoa{
    int id, idade;
    float altura;
    char nome[50];
};

void inserirPessoaInicio(Pessoa *lista){
    int pos;
    printf("Quantas pessoas serão inseridas?");scanf("%d", &pos);
    lista = (Pessoa *)calloc(pos + 1, sizeof(Pessoa));
    for (int j = 0; j < pos; j++)
    {
        lista[j].id = -1;
    }
    
    for (int i = 0; i < pos; i++)
    {
        lista[i].id = i;
        printf("Idade: "); scanf("%d", &lista[i].idade);
        printf("Altura: "); scanf("%f", &lista[i].altura);
        printf("Nome: "); scanf("%s", lista[i].nome);
    }
}

void inserirPessoaFim(Pessoa *lista){
    int pos;
    printf("Quantas pessoas serão inseridas?");scanf("%d", &pos);
    pos++;
    lista = (Pessoa *)realloc(lista, pos * sizeof(Pessoa));
    for (int i = 0; i < pos; i++)
    {
        lista[i].id = i;
        printf("Idade: "); scanf("%d", &lista[i - 1].idade);
        printf("Altura: "); scanf("%f", &lista[i - 1].altura);
        printf("Nome: "); scanf("%s", lista[i - 1].nome);
    }
}

void inserirPessoaOrdenado(Pessoa *lista){
    int pos;
    Pessoa new;
    printf("Quantas pessoas serão inseridas?");scanf("%d", &pos);
    pos++;
    lista = (Pessoa *)realloc(lista, pos * sizeof(Pessoa));

    int pos_correta;
    while (pos_correta < pos-1 && new.idade > lista[pos_correta].idade)
    {
        pos_correta++;
    }
    
    for (int i = pos - 1; i < pos_correta; i--)
    {
        lista[i] = lista[i-1];
    }

    lista[pos_correta] = new;
}

void mostrarPessoa(Pessoa p){
    printf("Id: %d\nNome: %c\nIdade: %d\nAltura: %f", p.nome,p.idade,p.altura);
}

void mostrarTodasPessoas(Pessoa *lista){
    int tam;
    tam = contarPessoasNaLista(lista);
    for (int i = 0; i < tam; i++)
    {
        mostrarPessoa(lista[i]);
    }   
}

int contarPessoasNaLista(Pessoa *lista){
    int tam = 0;
    while (lista[tam].id != -1){
        tam++;
    }
    return tam;
}

void buscarPessoa(Pessoa *lista){
    int id_busca,tam = contarPessoasNaLista(lista);
    printf("Id a ser buscada? "); scanf("%d", &id_busca);
    
    for (int i = 0; i < tam; i++)
    {
        if (lista[i].id == id_busca)
        {
            mostrarPessoa(lista[i]);
            return i;
        }
    }
    return -1;    
}

void removerPessoa(Pessoa *lista){
    int remove, tam;
    remove = buscar(lista);
    tam = contarElemento(lista);

    if (remove != -1)
    {
        lista[remove] = lista[tam - 1];
        lista[tam - 1].id = -1;
    }else
    {
        printf("Conta já Removido ou inexistente");
    }
}

void liberarMemoria(Pessoa *lista){
    free(lista);
}
