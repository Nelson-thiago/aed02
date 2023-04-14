#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "questao11.h"

void entrada11(int *num){
    printf("Insira um numero: ");
    scanf("%d", num);
}

void processamento11(int *num, int *boleano){
    *boleano = (*num >= 100 && *num <= 500);
}

void saida11(int boleano){
    if(boleano){
        printf("O numero esta entre 100 e 500");
    }else{
        printf("O numero nao esta entre 100 e 500");
    }
}

void questao11(){
    int numero, saida;

    entrada11(&numero);
    processamento11(&numero, &saida);
    saida11(saida);
}
