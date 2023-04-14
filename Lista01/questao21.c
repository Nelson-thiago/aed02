#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "questao21.h"

void entrada21(int *n1, int *n2, int *n3){
    printf("Entre com o numero 1: ");
    scanf("%d", n1);
    printf("Entre com numero 2: ");
    scanf("%d", n2);
    printf("Entre com numero 3: ");
    scanf("%d", n3);
}

void processamento21(int *n1, int *n2, int *n3, int *maior, int *meio, int * menor){
    if(*n1 == *n2 && *n2 == *n3){
        *maior = *n1;
        *meio = *n2;
        *menor = *n3;
    }else{
        if(*n1 > *n2 && *n1 > *n3){
            *maior = *n1;
            if(*n2 > *n3){
                *meio = *n2;
                *menor = *n3;
            }else{
                *meio = *n3;
                *menor = *n2;
            }
        }else if(*n2 > *n1 && *n2 > *n3){
            *maior = *n2;
            if(*n1 > *n3){
                *meio = *n1;
                *menor = *n3;
            }else{
                *meio = *n3;
                *menor = *n1;
            }
        }else{
            *maior = *n3;
            if(*n1 > *n2){
                *meio = *n1;
                *menor = *n2;
            }else{
                *meio = *n2;
                *menor = *n1;
            }
        }
    }
}

void saida21(int maior, int meio, int menor){
    printf("\nOs numeros em ordem crescente: %d, %d, %d", menor, meio, maior);
}

void questao21(){
    int n1, n2, n3, maior, meio, menor;

    entrada21(&n1, &n2, &n3);
    processamento21(&n1, &n2, &n3, &maior, &meio, &menor);
    saida21(maior, meio, menor);
}
