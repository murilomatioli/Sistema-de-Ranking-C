#include <stdio.h>
#include "func.h"
#include <stdlib.h>

int main()
{
    Jogador *lista = NULL;

    int op = 0;

    while (op != -1)
    {
        printf("Qual operacao? \n[1] Inserir\n[2] Listar \n");
        scanf("%d", &op);
        switch (op)
        {
        case 1:
            inserir(&lista);
            break;
        case 2:
            listarRanking(lista);
            break;
        default:
            op = -1;
            break;
        }
    }
    printf("Fim!");
}