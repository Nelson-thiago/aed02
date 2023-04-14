#include <stdio.h>
#include <stdlib.h>
#include "questao04.h"

void entrada04(float *sal, float *por){
    printf("Insira o salario antigo: ");
    scanf("%f", sal);
    printf("Insira a porcentagem: ");
    scanf("%f", por);
}

void processamento04(float *sal, float *por, float *nsal){
    *nsal =  *sal + ((*sal) * (*por)) / 100.0;
}

void saida04(float nsal){
    printf("\nNovo salario: %.2f", nsal);
}

void questao04(){
    float salario, porcentagem, nSalario;

    entrada04(&salario, &porcentagem);
    processamento04(&salario, &porcentagem, &nSalario);
    saida04(nSalario);
}
