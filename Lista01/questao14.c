#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "questao14.h"

void entrada14(int *num){
    printf("insira um numero: ");
    scanf("%d", num);
}

void processamento14(int *num, int *resultado){
    *resultado = *num % 2 == 0;
}

void saida14(int resultado){
    if(resultado){
        printf("\nO numero e par\n");
    }else{
        printf("\nO numero e impar.\n");
    }
}

void questao14(){
    float numero;
    int res;

    entrada14(&numero);
    processamento14(&numero, &res);
    saida14(res);
}
