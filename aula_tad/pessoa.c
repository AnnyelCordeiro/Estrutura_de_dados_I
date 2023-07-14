#include <stdio.h>
#include <stdlib.h>
#include "pessoa.h"

typedef struct pessoa{
    char nome[30];
    int idade;
    float altura;
    Pessoa *proximo;
}Pessoa;

Pessoa *list_pessoa(){
    return NULL;
}

Pessoa *add(Pessoa *pessoas){

    Pessoa *new;

    new  = (Pessoa *) malloc(sizeof(Pessoa));

    printf("\nInsira seu nome: "), scanf("%c", new->nome);
    printf("Insira sua idade: "), scanf("%i", &new->idade);
    printf("Insira sua altura: "), scanf("%f", &new->altura);
    new->proximo = pessoas;

   // return new;
}

Pessoa *remover(Pessoa *pessoas, float altura){
    Pessoa *aux = pessoas, *aux2;

    if(list_pessoa(pessoas)){
        printf("\nNão ha contas registradas.");
        return aux;
    }

    if(aux->altura == altura){
        aux = aux->proximo;
        return aux;
    }

    while(aux->proximo != NULL && aux->proximo->altura != altura){
        aux = aux->proximo;
    }

    if(aux->proximo == NULL){
        printf("\nConta inexistente.\n");
        return pessoas;
    }

    aux2 = aux->proximo;
    aux->proximo = aux->proximo->proximo;
    free(aux2);

    return pessoas;
}

Pessoa *buscar(Pessoa *pessoas, float altura){

    Pessoa *aux = pessoas;

    while(aux != NULL && aux->altura != altura){
        aux = aux->proximo;
    }

    return aux;
}

void mostrar_pessoa(Pessoa *pessoas, float altura){
    
    Pessoa *aux = buscar(pessoas, altura);
    printf("Nome: %s\n", aux->nome);
    printf("Idade: %i\n", aux->idade);
    printf("Altura: %f\n", aux->altura);
}

void mostrar_todos(Pessoa *pessoas){

    Pessoa *aux = pessoas;
    printf("\n");
    while(aux != NULL){
        printf("Nome: %s\n", aux->nome);
        printf("Idade: %i\n", aux->idade);
        printf("Altura: %f\n", aux->altura);

        aux = aux->proximo;
        printf("\n");
    }  
}

