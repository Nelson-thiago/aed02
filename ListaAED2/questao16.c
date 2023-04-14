#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "questao16.h"

void entrada16(float *salB){
    printf("Insira o salario bruto: ");
    scanf("%f", salB);
}

void processamento16(float *salB){
    if(*salB < 2000){
        *salB -= ((*salB * 10) / 100.0);
    }else{
         *salB -= ((*salB * 20) / 100.0);
    }
}

void saida16(float salL){
    printf("\nO salario liquido eh: %.2f", salL);
}

void questao16(){
    float salarioBruto;

    entrada16(&salarioBruto);
    processamento16(&salarioBruto);
    saida16(salarioBruto);
}
