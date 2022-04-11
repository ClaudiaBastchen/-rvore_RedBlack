#include <stdio.h>
#include <stdlib.h>
#include "Arvore_RedBlack.h"
#include "Arvore_RedBlack.c"

int main() {
    Arvore_RedBlack* raiz = cria_Arvore_RedBlack();

    //int i, N = 7, val[7] ={20, 15, 30, 85, 50, 21, 70};
    int i, N = 9, val[9] = {11, 2, 1, 5, 4, 7, 8, 14, 15};
    //int i, N = 10, val[10] ={10, 15, 10, 20, 30, 70, 70, 85, 50, 50};

    for(i = 0; i < N; i++) {
        insere_Arvore_RedBlack(raiz, val[i]);
    }

    emOrdem_Arvore_RedBlack(raiz, 0);

    printf("\n____________________________________________\n");

    remove_Arvore_RedBlack(raiz, 4);
    emOrdem_Arvore_RedBlack(raiz, 0);

    printf("\n____________________________________________\n");

    remove_Arvore_RedBlack(raiz, 1);
    emOrdem_Arvore_RedBlack(raiz, 0);

    return 0;
}
