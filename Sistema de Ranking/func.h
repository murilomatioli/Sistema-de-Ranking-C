#ifndef FUNC_H
#define FUNC_H

// structs

typedef struct Jogador
{
    char nome[40];
    int pontos;
    struct Jogador *prox;
} Jogador;

// funcoes

void inserir(Jogador **lista);
void remover(Jogador **lista);
void listarRanking(Jogador *lista);

void imprimeJogador(Jogador *lista);

#endif