#include <stdio.h>
#include <stdlib.h>
#include "questao08.h"

void entrada08(float *kmh){
    printf("Insira o valor em Km/h: ");
    scanf("%f", kmh);
}

void processamento08(float *kmh, float *ms){
   *ms = *kmh / 3.6;
}

void saida08(float ms){
    printf("\nVelocidade em m/s: %g", ms);
}

void questao08(){
    float kmH, mS;

    entrada08(&kmH);
    processamento08(&kmH, &mS);
    saida08(mS);
}
