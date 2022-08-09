typedef struct funcionario{
    int codigo;
    char nome[50];
    int idade;
    char empresa[50];
    char departamento[100];
    float salario;
}FUNCIONARIO;

typedef struct NO *arvoreLLRB;

arvoreLLRB *cria_arvoreLLRB();

int cor(struct NO *H);

void trocaCor(struct NO *H);

struct NO *insereNO(struct NO *H, int valor, int *resp);

int insere_arvoreLLRB(arvoreLLRB *raiz, int valor);

int remove_arvoreLLRB(arvoreLLRB *raiz, int valor);

struct NO *removeNO(struct NO *H, int valor);

struct NO *removeMenor(struct NO *H);

struct NO *procuraMenor(struct NO *atual);

int consulta_arvoreLLRB(arvoreLLRB *raiz, int valor);

TERCEIROS entraDados();
