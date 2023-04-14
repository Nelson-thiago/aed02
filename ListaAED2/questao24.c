#include <stdio.h>
#include <stdlib.h>
#include "questao24.h"

void entrada24(int *vCompra, int *vPago){
    printf("Entre com o valor da compra: ");
    scanf("%d",vCompra);
    printf("Entre com o valor a ser pago: ");
    scanf("%d",vPago);

}
void processamento24(int *vCompra, int *vPago, int *c, int *d, int *u, int *troco, int *res){
    if(*vPago < *vCompra){
        *res = 1;
    }else{
        *res = 0;
        *troco = *vPago - *vCompra;

        *c = *troco / 100;
        *troco -= ((*c) * 100);

        *d = *troco/10;
        *troco -= ((*d) * 10);

        *u = *troco / 1;
    }
}

void saida24(int cem, int dez, int um, int res){
    if(res){
        printf("\nO PAGAMENTO FOI NEGADO.\n");
    }else{
        printf("\nTroco: %d notas de 100, %d notas de 10 e %d notas de 1.\n", cem, dez, um);
    }
}

void questao24(void){
    int valorCompra, valorPago, cem, Dez, um,troco, resultado;

    entrada24(&valorCompra, &valorPago);
    processamento24(&valorCompra, &valorPago, &cem, &Dez, &um, &troco, &resultado);
    saida24(cem, Dez, um, resultado);
}
