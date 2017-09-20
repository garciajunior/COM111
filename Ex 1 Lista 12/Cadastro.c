
#include <stdio.h>
#include <stdlib.h>
#include "Cadastro.h"

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
    return f->inicio == NULL;
                
}

int tamanhoFila( fila *f)
{
    return f->qtd;
}
void esvaziaFila( fila *f)
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
   
    
    
//---------------Pilha ---------------------------------------------------------
    struct Tno
{
    int dado;
    struct Tno *prox;
};

struct pilha
{
     struct Tno *topo;
};
/// -----------CRIA PILHA----------------
pilha *criaPilha()
{
    pilha *p;
    p = (pilha*) malloc ( sizeof(pilha));
    if ( !p)
    {
        printf("Nao foi possivel alocar memoria \n");
        exit(1);
    }
    p->topo= NULL;
    return p;
}
/// ---------------- PUSH---------------
void push(pilha *p, int elemento)
{
    Tno *novoNo;
    novoNo =  (Tno*) malloc( sizeof( Tno));
    if ( !novoNo)
    {
        printf("Nao foi possivel alocar memoria.\n");
        exit (1);
    }
    novoNo->dado =  elemento;
    novoNo->prox =  p->topo;
    // atualizar o topo da pilha
    p->topo =  novoNo;
    return;
}
///-----------------POP-------------------
int pop(pilha *p)
{
    int dadoAux = '-';
    Tno *noAux;
    if( p->topo != NULL)// a pilha nao esta vazia
    {
        noAux =  p->topo;
        dadoAux  = p->topo->dado;
        p->topo = p->topo->prox;
        free( noAux);
    }
    return dadoAux;
}
//---------------Função topo------------------------
int topo(pilha *p)
{
    int res = '-';
     if( p->topo != NULL)// a pilha nao esta vazia
     {
         res = p->topo->dado;
     }
    return res;
}
/// ------------ESVAZIA-----------------------
void esvaziaPilha(pilha *p)
{
     Tno *TnoAux; 
    while ( p->topo != NULL)
    {
        TnoAux = p->topo;
        p->topo =  p->topo->prox;
        free(TnoAux);
    }
     return ;
}
//----------->>>>>>Esvaziando a Pilha------------
/*void esvaziaRetornando(pilha *p)
{
    no *noAux; 
    while ( p->topo != NULL)
    {
        noAux = p->topo;
        p->topo =  p->topo->prox;
        printf("\t%c", p->topo->dado);
    }
    
   
}*/
//------------RETORNA  SE A PILHA ESTA VAZIA--------
 int pilhaVazia(pilha *p)
 {
     return ( p->topo ==NULL); /// essa merda retorna verdadeiro ou falso
 }

    

