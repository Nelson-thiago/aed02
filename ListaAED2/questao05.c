#include <stdio.h>
#include <stdlib.h>
#include "questao05.h"

void entrada05(float *sBa, int *dep){
    printf("Insira seu salario base: ");
    scanf("%f", sBa);
    printf("Insira a quantidade de dependentes: ");
    scanf("%d", dep);
}

void processamento05(float *sBa, int *dep, float *sBru, float *sLiq){
    *sBru = *sBa + ((*dep) * (32.0));
    *sLiq = *sBru - ((*sBru) * (27.5)) / 100.0;
}

void saida05(float sLiq){
    printf("\nSalario liquido: %.2f", sLiq);
}

void questao05(){
    float salBase, salBruto, salLiquido;
    int dependentes;

    entrada05(&salBase, &dependentes);
    processamento05(&salBase, &dependentes, &salBruto, &salLiquido);
    saida05(salLiquido);
}
