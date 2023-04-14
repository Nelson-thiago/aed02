#include <stdio.h>
#include <stdlib.h>
#define PI 3.14
#include "questao07.h"

void entrada07(float *ra){
    printf("Insira o valor do raio: ");
    scanf("%f", ra);
}

void processamento07(float *ra, float *per, float *ar, float *di, float *vol){
   *di = 2 * (*ra);
   *per = 2 * PI * (*ra);
   *ar = PI * ((*ra) * (*ra));
   *vol = ((4 * PI) / 3.0) * ((*ra) * (*ra) * (*ra));
}

void saida07(float d, float p, float a, float v){
    printf("\nDiametro eh: %g", d);
    printf("\nPerimetro eh: %g", p);
    printf("\nArea eh: %g", a);
    printf("\nVolume: %g", v);
}

void questao07(){
    float raio, perimetro, area, diametro, volume;

    entrada07(&raio);
    processamento07(&raio, &perimetro, &area, &diametro, &volume);
    saida07(diametro, perimetro, area, volume);
}
