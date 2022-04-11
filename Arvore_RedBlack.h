/* DEFININDO A ESTRUTURA */

typedef struct NO* Arvore_RedBlack;

/* CRIANDO A ÁRVORE*/

Arvore_RedBlack* cria_Arvore_RedBlack();

/* LIBERANDO A ÁRVORE */

void libera_Arvore_RedBlack(Arvore_RedBlack* raiz);

/* CONSULTANDO A ÁRVORE */

int consulta_Arvore_RedBlack(Arvore_RedBlack *raiz, int valor);

/* INSERÇÃO */

int insere_Arvore_RedBlack(Arvore_RedBlack* raiz, int valor);

/* REMOÇÃO */

int remove_Arvore_RedBlack(Arvore_RedBlack *raiz, int valor);


/* PROPRIEDADES DA ÁRVORE */

int estaVazia_Arvore_RedBlack(Arvore_RedBlack *raiz);

int totalNO_Arvore_RedBlack(Arvore_RedBlack *raiz);

int altura_Arvore_RedBlack(Arvore_RedBlack *raiz);

/* PERCURSO */

void preOrdem_Arvore_RedBlack(Arvore_RedBlack *raiz, int H);

void emOrdem_Arvore_RedBlack(Arvore_RedBlack *raiz, int H);

void posOrdem_Arvore_RedBlack(Arvore_RedBlack *raiz, int H);
