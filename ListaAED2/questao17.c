#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "questao17.h"

void entrada17(float *vP){
    printf("Insira o valor de compra do produto: ");
    scanf("%f", vP);
}

void processamento17(float *vP){
    if(*vP < 200){
        *vP += ((*vP * 50) / 100.0);
    }else{
         *vP += ((*vP * 30) / 100.0);
    }
}

void saida17(float vV){
    printf("\nO valor da venda serah: %.2f reais", vV);
}

void questao17(){
    float valorCompra;

    entrada17(&valorCompra);
    processamento17(&valorCompra);
    saida17(valorCompra);
}
