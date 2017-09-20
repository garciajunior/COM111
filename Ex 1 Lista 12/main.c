/* 
 * File:   main.c
 * Author: aluno
 *
 * Created on 13 de Setembro de 2017, 21:25
 */

#include <stdio.h>
#include <stdlib.h>
#include "Cadastro.h"


/*
 * 
 */
int main() {
    int num,i, qtd, elementof, elementop;
    fila *f,*auxF;
    pilha *p, *auxP ;
    
    qtd = 5; //criterio de parada

    f = criaFila();
    p= criaPilha();
    auxF = criaFila();
    auxP= criaPilha();
    
    
    for (i = 0; i < qtd; i++)
    {
        enfileirar(f, i * 10);
        push(p, (i) * 20) ;
    }
    
    printf("Relatorio da pilha e fila\ntopo%d\n", topo(p));
for (i = 0; i < qtd; i++)
    {
        elementof = desenfileirar(f);
        elementop = pop(p);

        if (elementof != elementop )
        {
               push(auxP, elementop);
               enfileirar(auxF, elementof);

         }
           else
          {
                printf("\n Elemento igual nas duas [%d]:\t%d",i+1,elementof);
          }

    }    
    printf("\nComeço%d", comecoFila(auxF));
    printf("\nTopo%d", topo(auxP));
     
    
   
    /*while(!filaVazia(auxF))
    {
       printf("\n Elemento da fila:\t%d",desenfileirar(auxF)); 
    }
    
    while( !pilhaVazia(auxP))
    {
        push(p, pop(auxP));
    }
    
    while( !pilhaVazia(p))
    {
     printf("\n Elemento da Pilha:\t%d",pop(auxP));
    }
    */
    
   return 0;
}

