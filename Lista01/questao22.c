#include <stdio.h>
#include <stdlib.h>
#include "questao22.h"

void entrada22(char *nCidade[20], int *nEleitores){
    printf("Insira o nome do municipio \n");
    scanf("%s", nCidade);
    printf("Insira a quantidade de eleitores \n");
    scanf("%d", nEleitores);

}
void processamento22(char *nome, int *eleitores, int *mvotado){

    if(*eleitores <= 200000){
        printf("\nNa cidade de %s nao havera 2o turno. \n", nome);
    }else{
        printf("Informe a quantidade de votos do candidato mais votado: ");
        scanf("%d",mvotado);

        if(*mvotado <= *eleitores / 2.0){
            printf("\nNa cidade de %s havera 2o turno.\n", nome);
        }else{
            printf("\nNa cidade de %s nao havera 2o turno.\n", nome);
        }
    }
}

void questao22(void){
    int cidade, qntEleitores, maisVotado;

    entrada22(&cidade, &qntEleitores);
    processamento22(&cidade, &qntEleitores, &maisVotado);
}

