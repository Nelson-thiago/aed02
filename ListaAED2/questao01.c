#include <stdio.h>
#include <stdlib.h>
#include "questao01.h"

void entrada01(int *x, int *y, int *z){
    printf("Insira o 1o valor: ");
    scanf("%d", x);
    printf("Insira o 2o valor: ");
    scanf("%d", y);
    printf("Insira o 3o valor: ");
    scanf("%d", z);
}

void processamento01(int *x, int *y, int *z, int *soma){
    *soma = (*x + *y + *z);
}

void saida01(int soma){
    printf("\nResultado: %d", soma);
}

void questao01(){
    int n1, n2, n3, s;

    entrada01(&n1, &n2, &n3);
    processamento01(&n1, &n2, &n3, &s);
    saida01(s);
}
