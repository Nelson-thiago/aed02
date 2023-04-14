#include <stdio.h>
#include <stdlib.h>
#include "questao06.h"

void entrada06(float *vAntigo, float *vNovo){
    printf("Insira o valor antigo do produto: ");
    scanf("%f", vAntigo);
    printf("Insira o valor novo do produto: ");
    scanf("%f", vNovo);
}

void processamento06(float *vAntigo, float *vNovo, float *por){
    *por = ((*vNovo - *vAntigo) / *vAntigo) * 100;
}

void saida06(float por){
    printf("\nA porcentagem de aumento eh de: %.2f, por");
}

void questao06(){
    float valorAntigo, valorNovo, porcentagemAumento;

    entrada06(&valorAntigo, &valorNovo);
    processamento06(&valorAntigo, &valorNovo, &porcentagemAumento);
    saida06(porcentagemAumento);
}
