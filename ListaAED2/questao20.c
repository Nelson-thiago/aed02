#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "questao20.h"

void entrada20(int *n1, int *n2, int *n3){
    printf("Entre com o numero 1: ");
    scanf("%d", n1);
    printf("Entre com numero 2: ");
    scanf("%d", n2);
    printf("Entre com numero 3: ");
    scanf("%d", n3);
}

void processamento20(int *n1, int *n2, int *n3, int *res){
    if(*n1 == *n2 && *n2 == *n3){
        *res = NULL;
    }else{
        if(*n1 > *n2 && *n1 > *n3){
            *res = *n1;
        }else if(*n2 > *n1 && *n2 > *n3){
            *res = *n2;
        }else{
            *res = *n3;
        }
    }
}

void saida20(int res){
    if(res == NULL){
        printf("\nNumeros identicos");
    }else{
        printf("\nMaior valor: %d", res);
    }
}

void questao20(){
    int numero1, numero2, numero3, resposta;

    entrada20(&numero1, &numero2, &numero3);
    processamento20(&numero1, &numero2, &numero3, &resposta);
    saida20(resposta);
}
