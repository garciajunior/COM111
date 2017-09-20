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
    int num,i;
    fila *f;

    f = criaFila();
   enfileirar(f,121,'A');
   enfileirar(f,123,'B');
   num =  desenfileirar(f);
   printf("Processo removido %d\n", num);
   enfileirar(f,245,'C');
   for ( i  = 246; i <= 252; i++)
   {
       
        enfileirar(f,i,'C');
        
   }
   
   num =  desenfileirar(f);
   printf("Processo removido %d\t\n",num);
   
   num =  desenfileirar(f);
   printf("Processo removido %d\n",num);
    
      for ( i  = 310; i <= 362; i++)
   {
       
        enfileirar(f,i,'D');
        
   }
    
     while(!filaVazia(f))
     {
    num =  desenfileirar(f);
   printf("Processo  %d\n",num);
       
     }
     
         
    
    
    
  
    
            
    return 0;
}

