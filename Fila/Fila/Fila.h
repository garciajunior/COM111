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
int desenfileirar( fila *f);

//ComecoFila (mostrar quem está no início da fila)
int comecoFila( fila *f);

//Esvazia (remove todos os elementos da fila)
void esvazia( fila *f);

//filaVazia (verifica se a fila está vazia)
int filaVazia(fila *f);

//TamanhoFila (retorna a quantidade de elementos na fila)*/
int tamanhoFila( fila *f);



#endif	/* FILA_H */

