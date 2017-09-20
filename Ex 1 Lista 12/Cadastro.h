    /* 
 * File:   Fila.h
 * Author: aluno
 *
 * Created on 13 de Setembro de 2017, 21:25
 */

#ifndef FILA_H
#define	FILA_H

typedef struct no no;
typedef struct fila fila;

//CriaFila (cria a estrutura fila vazia)
fila *criaFila();

//Enfileirar - (enqueue) (inserir elemento na fila)
void enfileirar( fila *f, int elemento);


  //Desenfileirar – (dequeue) (remover elemento da fila)
int  desenfileirar( fila *f);
//ComecoFila (mostrar quem está no início da fila)
int comecoFila( fila *f);

//Esvazia (remove todos os elementos da fila)
void esvaziaFila( fila *f);

//filaVazia (verifica se a fila está vazia)
int filaVazia(fila *f);

//TamanhoFila (retorna a quantidade de elementos na fila)*/
int tamanhoFila( fila *f);

//------------------Pilha -------------------------------------

typedef struct pilha pilha;
typedef struct Tno Tno;

//CriaPilha (cria a estrutura pilha vazia)
pilha *criaPilha();

//Push (inserir elemento na pilha)
void push(pilha *p, int elemento);

//Pop (remover elemento da pilha)
int pop(pilha *p);

//Topo (mostrar quem está no topo da pilha)
int topo(pilha *p);

//Esvazia (remove todos os elementos da pilha)
void esvaziaPilha(pilha *p);

//Esvazia retornando (remove todos os elementos da pilha)
void esvaziaRetornando(pilha *p);

//pilhaVazia (verifica se a pilha está vazia)
int pilhaVazia(pilha *p);


#endif	/* FILA_H */

