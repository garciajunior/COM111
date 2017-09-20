
#include <stdio.h>
#include <stdlib.h>
#include "Fila.h"


struct no
{
    int dado;
    struct no *prox;
};
struct fila 
{
    struct no *inicio;
    struct no *fim;
    int qtd;
};

fila *criaFila()
{
    fila *f;
    f = (fila *)  malloc ( sizeof(fila));
    if ( !f )
    {
        printf("Nao foi possivel alocar memoria \n");
        exit (1);
    }
    
    f->inicio = NULL;
    f->fim = NULL;
    f-> qtd = 0;
    return f;    
    
}
void enfileirar( fila *f, int elemento)
{
    // alocar memoria e inicialiazar o novo no
    no *novoNo =  (no*) malloc (sizeof(no));
    if( !novoNo)
    {
        printf("Erro ao alocar memoria");
        exit (1);
    }
    novoNo->dado = elemento;
    novoNo->prox = NULL;
        
    if ( f->inicio == NULL)
    {
        f->inicio = novoNo;
        f->fim = novoNo;
    } else
    {
        f->fim->prox = novoNo;
        f->fim = novoNo;
    }
    // ajustar a quantidade
    f->qtd++;
    return ;
        
    
}
int  desenfileirar( fila *f)
{
    int  dado = 0;
    no *aux;
    
   if (f->inicio != NULL)
   {
       aux = f->inicio;
       f->inicio = f->inicio->prox;
         dado = aux->dado;
         
       if( f->inicio == NULL)
       {
           f->fim =NULL;
       }
     
       f->qtd--;    
       free (aux);
   }   
    return dado;
    
}
int comecoFila( fila *f)
{
    return f->inicio->dado;
}

int filaVazia(fila *f)
{
    return f->inicio ==NULL;
                
}

int tamanhoFila( fila *f)
{
    return f->qtd;
}
void esvazia( fila *f)
{
    no *aux;
    while ( f->inicio != NULL)
    {
        aux = f->inicio;
        f->inicio = f->inicio->prox;
        f->qtd--;
        free(aux);
    }
    f->fim = NULL;
    
}