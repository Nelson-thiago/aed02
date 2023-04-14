#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "questao23.h"

void entrada23(float *percuso, char *carro){
    printf("Insira o percuso em Km: ");
    scanf("%f", percuso);
    printf("Selecione o tipo de carro [A, B, C]: ");
    scanf("%s", carro);
}

void processamento23(float *percuso, char *carro, float *comb){
    *carro = tolower(*carro);

    switch(*carro){
        case 'a':
            *comb = *percuso / 8.0;
            printf("\nO carro consumiu %.2f litros de combustivel", *comb);
            break;
        case 'b':
           *comb = *percuso / 9.0;
           printf("\nO carro consumiu %.2f litros de combustivel", *comb);
           break;
        case 'c':
           *comb = *percuso / 12.0;
            printf("\nO carro consumiu %.2f litros de combustivel", *comb);
            break;
        default:
            printf("\nTipo de carro invalido\n!!");
    }
}

void questao23(){
    float percursoPercorrido, combustivel;
    char tipoCarro[50];

    entrada23(&percursoPercorrido, &tipoCarro);
    processamento23(&percursoPercorrido, &tipoCarro, &combustivel);
}
