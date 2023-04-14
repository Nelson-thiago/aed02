#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "questao10.h"

void entrada10(char *senha){;
	printf("Insira a senha: ");
    scanf("%s", senha);
}

void processamento10(char *senha, int *res){
    char *senha_sistema = "LINGUAGEMC";
    *res = strcmpi(senha, senha_sistema);
}

void saida10(int res){
    if(res == 0){
		printf("\nA senha esta correta.\n");
	}else{
		printf("\nA senha esta incorreta.\n");
	}
}

void questao10(void){
    char senha;
    int resultado;

    entrada10(&senha);
    processamento10(&senha, &resultado);
    saida10(resultado);
}
