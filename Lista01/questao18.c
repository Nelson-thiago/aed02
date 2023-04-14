#include <stdio.h>
#include <stdlib.h>
#include "questao18.h"

void entrada18(float *med1, float *med2){
    printf("Insira a media da unidade 1: ");
    scanf("%f", med1);
    printf("Insira a media da unidade 2: ");
    scanf("%f", med2);
}

void processamento18(float *med1, float *med2, float *medF){
    *medF = (*med1 + *med2) / 2.0;
}

void saida18(float medF){
    printf("\nMedia final: %.2f", medF);

    if(medF >= 7.0){
        printf("\nAPROVADO\n");
    }else if(medF < 3.0){
        printf("\nREPROVADO\n");
    }else{
        printf("\nPROVA FINAL\n");
    }
}

void questao18(){
    float media1, media2, mediaFinal;

    entrada18(&media1, &media2);
    processamento18(&media1, &media2, &mediaFinal);
    saida18(mediaFinal);
}
