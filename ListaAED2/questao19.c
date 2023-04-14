#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "questao19.h"

void entrada19(float *a, float *b, float *c){
    printf("Insira a medida do lado A: ");
    scanf("%f", a);
    printf("Insira a medida do lado B: ");
    scanf("%f", b);
    printf("Insira a medida do lado c: ");
    scanf("%f", c);

}

void processamento19(float *a, float *b, float *c){
    if(*a == *b && *b == *c){
        printf("\nEQUILATERO");
    }else if (*a == *b || *b == *c || *a == *c){
        printf("\nISOSCELES");
    }else{
        printf("\nESCALENO");
    }
}

void questao19(){
    float ladoA, ladoB, ladoC;

    entrada19(&ladoA, &ladoB, &ladoC);
    processamento19(&ladoA, &ladoB, &ladoC);
}
