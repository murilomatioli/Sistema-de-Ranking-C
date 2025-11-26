#include <stdio.h>
#include "func.h"
#include <stdlib.h>

void inserir(Jogador **lista)
{
    Jogador *novo, *aux;
    novo = malloc(sizeof(Jogador));
    aux = *lista;

    printf("Informe o nome e pontuacao: ");
    scanf("%40s %d", novo->nome, &novo->pontos);
    novo->prox = NULL;
    if (*lista == NULL)
    {
        *lista = novo;
        printf("Criado com sucesso!\n");
        return;
    }
    if (novo->pontos > aux->pontos)
    {
        novo->prox = aux;
        *lista = novo;
        printf("Criado com sucesso!");
        return;
    }
    while (aux->prox != NULL)
    {
        aux = aux->prox;
    }
    aux->prox = novo;
    printf("Criado com sucesso!\n");
}

void listarRanking(Jogador *lista)
{
    if (lista == NULL)
    {
        printf("O ranking esta vazio.\n");
        return;
    }
    Jogador *aux;
    aux = lista;
    printf("[Nome | Pontos]\n");
    while (aux != NULL)
    {
        imprimeJogador(aux);
        aux = aux->prox;
    }
}

void imprimeJogador(Jogador *lista)
{
    printf("%s | %d\n", lista->nome, lista->pontos);
}