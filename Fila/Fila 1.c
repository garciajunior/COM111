
#include <stdio.h>
#include <stdlib.h>
#include "Fila.h"


struct no
{
    int codigo;
    char tipo;
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
void enfileirar( fila *f, int codigo, char tipo)
{
    // alocar memoria e inicialiazar o novo no
    tProcesso *novoP =  (tProcesso*) malloc (sizeof(tProcesso));
    if( !novoP)
    {
        printf("Erro ao alocar memoria");
        exit (1);
    }
    novoP->codigo = codigo;
    novoP->tipo  = tipo;
    novoP->prox = NULL;
        
    if ( f->inicio == NULL)
    {
        f->inicio = novoP;
        f->fim = novoP;
    } else
    {
        f->fim->prox = novoP;
        f->fim = novoP;
    }
    // ajustar a quantidade
    f->qtd++;
    return ;
        
    
}
int   desenfileirar( fila *f)
{
    int c;
   
    tProcesso *aux =NULL;
    
   if (f->inicio != NULL)
   {
       aux = f->inicio;
       f->inicio = f->inicio->prox;
         
         
       if( f->inicio == NULL)
       {
           f->fim =NULL;
       }
     
       f->qtd--;    
      
   }   
   c = aux->codigo;
   free (aux);
    return c;
    
}
int comecoFila( fila *f)
{
    return f->inicio->codigo;
}

int filaVazia(fila *f)
{
    return f->inicio == NULL;
                
}

int tamanhoFila( fila *f)
{
    return f->qtd;
}
void esvazia( fila *f)
{
    tProcesso *aux;
    while ( f->inicio != NULL)
    {
        aux = f->inicio;
        f->inicio = f->inicio->prox;
        f->qtd--;
        free(aux);
    }
    f->fim = NULL;
    
}
