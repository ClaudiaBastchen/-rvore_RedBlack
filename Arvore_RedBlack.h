/* DEFININDO A ESTRUTURA */

typedef struct NO* Arvore_RedBlack;

/* CRIANDO A �RVORE*/

Arvore_RedBlack* cria_Arvore_RedBlack();

/* LIBERANDO A �RVORE */

void libera_Arvore_RedBlack(Arvore_RedBlack* raiz);

/* CONSULTANDO A �RVORE */

int consulta_Arvore_RedBlack(Arvore_RedBlack *raiz, int valor);

/* INSER��O */

int insere_Arvore_RedBlack(Arvore_RedBlack* raiz, int valor);

/* REMO��O */

int remove_Arvore_RedBlack(Arvore_RedBlack *raiz, int valor);


/* PROPRIEDADES DA �RVORE */

int estaVazia_Arvore_RedBlack(Arvore_RedBlack *raiz);

int totalNO_Arvore_RedBlack(Arvore_RedBlack *raiz);

int altura_Arvore_RedBlack(Arvore_RedBlack *raiz);

/* PERCURSO */

void preOrdem_Arvore_RedBlack(Arvore_RedBlack *raiz, int H);

void emOrdem_Arvore_RedBlack(Arvore_RedBlack *raiz, int H);

void posOrdem_Arvore_RedBlack(Arvore_RedBlack *raiz, int H);
