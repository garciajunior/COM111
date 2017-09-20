/* 
 * File:   main.c
 * Author: aluno
 *
 * Created on 13 de Setembro de 2017, 21:25
 */

#include <stdio.h>
#include <stdlib.h>
#include "Fila.h"


/*
 * 
 */
int main() {
    int num,j;
    fila *f;
    f = criaFila();
    printf("Informe um numero:\t");
    scanf("%d",&num);
    enfileirar(f,num);
    printf(" \n O numero desenfileirado k%d", desenfileirar(f));
    printf(" \nInforme um numero:\t");
    scanf(" %d", &num);
    enfileirar(f, num);
    j = comecoFila(f);
    printf("kkkkk\n\n\n%d",j);
    
            
    return (EXIT_SUCCESS);
}

