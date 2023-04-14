#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "questao15.h"

void entrada15(int *x, int *y){
    printf("Insira um numero: ");
    scanf("%d", x);
    printf("Insira outro numero: ");
    scanf("%d", y);
}

void processamento15(int *x, int *y, int *resultado){
    *resultado = (*x > *y);
}

void saida15(int a, int b, int resultado){
    if(resultado){
        printf("\nO maior numero eh: %d\n", a);
    }else{
         printf("\nO maior numero eh: %d\n", b);
    }
}

void questao15(){
    int n1, n2, res;

    entrada15(&n1, &n2);
    processamento15(&n1, &n2, &res);
    saida15(n1, n2, res);
}
