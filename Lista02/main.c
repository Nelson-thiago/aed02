#include <stdio.h>
#include <stdlib.h>
#define TAM 10

int main() {
    int lista[TAM];

    scan(lista, TAM);

    printf("\nLista antes da ordenacao: ");
    printArray(lista, TAM);

    //bubble(lista, TAM);
    //insertion(lista, TAM);
    //selection(lista, TAM);

    printf("Lista apos a ordenacao: ");
    printArray(lista, TAM);

    return 0;
}


void scan(int lista[], int tam) {
    printf("Digite os %d numeros da lista:\n", tam);
    for (int i = 0; i < tam; i++) {
        scanf("%d", &lista[i]);
    }
}

void bubble(int lista[], int tam) {
    for (int i = 0; i < tam - 1; i++) {
        for (int j = 0; j < tam - i - 1; j++) {
            if (lista[j] > lista[j + 1]) {
                int aux = lista[j];
                lista[j] = lista[j + 1];
                lista[j + 1] = aux;
            }
        }
    }
}

void insertion(int lista[], int tam) {
    for (int i = 1; i < tam; i++) {
        int aux = lista[i];
        int j = i - 1;

        while (j >= 0 && lista[j] > aux) {
            lista[j + 1] = lista[j];
            j--;
        }

        lista[j + 1] = aux;
    }
}

void selection(int lista[], int tamanho){

    for (int i = 0; i < TAM - 1; i++){
        int menor = i;
        for (int j = i + 1; j < TAM; j++){
            if(lista[menor] > lista[j]){
                menor = j;
            }
        }
        if(i != menor){
            int aux = lista[i];
            lista[i] = lista[menor];
            lista[menor] = aux;
        }
    }

}

void printArray(int lista[], int tam) {
    for (int i = 0; i < tam; i++) {
        printf("%d ", lista[i]);
    }
    printf("\n");
}

