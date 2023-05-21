#include <stdio.h>
#include <stdlib.h>
#define TAM 10

int main() {
    int lista[TAM];

    entrada(lista, TAM);

    printf("\nLista antes da ordenacao: ");
    printArray(lista, TAM);

    //quickSort(lista, 0, TAM - 1);
    //mergeSort(lista, TAM);
    //bubble(lista, TAM);
    //insertion(lista, TAM);
    //selection(lista, TAM);

    printf("Lista apos a ordenacao: ");
    printArray(lista, TAM);

    return 0;
}


void entrada(int lista[], int tam) {
    printf("Digite os %d numeros da lista:\n", tam);
    for (int i = 0; i < tam; i++) {
        scanf("%d", &lista[i]);
    }
}

void printArray(int lista[], int tam) {
    for (int i = 0; i < tam; i++) {
        printf("%d ", lista[i]);
    }
    printf("\n");
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

void mergeSort(int lista[], int Tam) {
    if (Tam <= 1) {
        return;
    }

    int meio = Tam / 2;
    int esquerda[meio];
    int direita[Tam - meio];

    for (int i = 0; i < meio; i++) {
        esquerda[i] = lista[i];
    }

    for (int i = meio; i < Tam; i++) {
        direita[i - meio] = lista[i];
    }

    mergeSort(esquerda, meio);
    mergeSort(direita, Tam - meio);

    merge(lista, esquerda, meio, direita, Tam - meio);
}

void merge(int lista[], int esquerda[], int esquedaTam, int direita[], int direitaTam) {
    int i = 0, j = 0, k = 0;

    while (i < esquedaTam && j < direitaTam) {
        if (esquerda[i] <= direita[j]) {
            lista[k] = esquerda[i];
            i++;
        }
        else {
            lista[k] = direita[j];
            j++;
        }
        k++;
    }

    while (i < esquedaTam) {
        lista[k] = esquerda[i];
        i++;
        k++;
    }

    while (j < direitaTam) {
        lista[k] = direita[j];
        j++;
        k++;
    }
}

void quickSort(int lista[], int esquerda, int direita) {
    if (esquerda < direita) {
        int p = particionar(lista, esquerda, direita);

        quickSort(lista, esquerda, p - 1);
        quickSort(lista, p + 1, direita);
    }
}

int particionar(int lista[], int esquerda, int direita) {
    int pivo = lista[direita];
    int i = (esquerda - 1);

    for (int j = esquerda; j <= direita - 1; j++) {
        if (lista[j] <= pivo) {
            i++;
            int temp = lista[i];
            lista[i] = lista[j];
            lista[j] = temp;
        }
    }

    int temp = lista[i + 1];
    lista[i + 1] = lista[direita];
    lista[direita] = temp;

    return (i + 1);
}

