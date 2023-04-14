#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "questao13.h"

void entrada13(int *num){
    printf("insira um numero: ");
    scanf("%d", num);
}

void processamento13(int *num, int *res){
    *res = *num % 5 == 0;
}

void saida13(int res){
    if(res){
        printf("\nO numero eh divisivel por 5.\n");
    }else{
        printf("\nO numero nao eh divisivel por 5.\n");
    }
}

void questao13(){
    float numero;
    int resultado;

    entrada13(&numero);
    processamento13(&numero, &resultado);
    saida13(resultado);
}
