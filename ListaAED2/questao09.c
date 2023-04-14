#include <stdio.h>
#include <stdlib.h>
#include "questao09.h"

void entrada09(int *n){
    printf("Insira o valor: ");
    scanf("%d", n);
}

saida09(int n){
    if(n > 100){
        printf("\nO numero eh maior que 100.\n");
    }else{
        printf("\nO numero nao eh maior que 100.\n");
    }
}

void questao09(){
    int numero;

    entrada09(&numero);
    saida09(numero);
}
