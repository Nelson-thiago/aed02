#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "questao12.h"

void entrada12(float *num1, float *num2){
    printf("insira a primeira nota: ");
    scanf("%f", num1);
    printf("Insira a segunda nota: ");
    scanf("%f", num2);
}

void processamento12(float *num1, float *num2, float *med){
    *med = (*num1 + *num2) / 2.0;
}

void saida12(float med){
    if(med >= 7.0){
        printf("\nO aluno  aprovado");
    }else{
        printf("\nO aluno  reprovado");
    }
}

void questao12(){
    float numero1, numero2, media;

    entrada12(&numero1, &numero2);
    processamento12(&numero1, &numero2, &media);
    saida12(media);
}
