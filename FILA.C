#include <stdio.h>
#include <string.h>
#define MAX 5

struct fila
{
    int info;
    struct fila *prox;
};
typedef struct fila Fila;

enfileira(Fila **inicio, Fila **fim, int valor)
{
    Fila *novo;
    novo = (Fila *) malloc(sizeof(Fila));
    novo ->info = valor;
    novo ->prox = NULL;
    if(*inicio ==NULL)
        *inicio = *fim=novo;
    else
    {
        (*fim)->prox=novo;
        *fim=novo;
    }
}
desenfileira(Fila **inicio, int *valor)

{
    Fila *aux;
    if(*inicio == NULL)
    {
        printf("Fila vazia");
        exit(1); /*aborta programa*/
    }
    else
    {
        *valor = (*inicio)->info;
        aux = *inicio;
        *inicio = (*inicio) ->info;
        aux = *inicio;
        *inicio = (*inicio) ->prox;
        free(aux);
    }
}

cria_Fila_p(Fila **prim, Fila **fim, int tam)
{
    int i,valor;

    for(i=0;i<tam;i++)
    {
        printf("Digite um valor:");
        scanf("%d",&valor);
        enfileira(&(*prim),&(*fim),valor);
    }
}

void Fila_elementos(Fila *prim)
{
    while(prim!=NULL)
    {
        printf("%d\n",prim->info);
        prim=prim->prox;
    }
}


void libera_Fila_elementos(Fila *prim)
{

    Fila *aux;

    while (prim!=NULL)
    {
        aux=prim;
        prim=prim->prox;
        free(aux);
    }
}

main(){ Fila *prim,*fim;
 /* declara uma Fila n o inicializada */
 prim = fim = NULL;
 /* inicializa Fila como vazia */
 int valor;
 cria_Fila_p(&prim,&fim,MAX);
  desenfileira(&prim,&valor);
   printf("Valor = %d\n",valor);
   desenfileira(&prim,&valor);
    printf("Valor = %d\n",valor);
    Fila_elementos(prim);
    libera_Fila_elementos(prim);
    }
