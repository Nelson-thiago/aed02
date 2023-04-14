#include <stdio.h>
#include <stdlib.h>
#include "questao02.h"

void entrada02(float *n1, float *n2, float *n3, float *n4){
    printf("Insira a 1o nota: ");
    scanf("%f", n1);
    printf("Insira a 2o nota: ");
    scanf("%f", n2);
    printf("Insira a 3o nota: ");
    scanf("%f", n3);
    printf("Insira a 4o nota: ");
    scanf("%f", n4);

}

void processamento02(float *n1, float *n2, float *n3, float *n4, float *media){
    *media = (*n1 + *n2 + *n3 + *n4) / 4.0;
}

void saida02(float media){
    printf("\nMedia: %.2f", media);
}

void questao02(){
    float nota1, nota2, nota3, nota4, m;

    entrada02(&nota1, &nota2, &nota3, &nota4);
    processamento02(&nota1, &nota2, &nota3, &nota4, &m);
    saida02(m);
}
