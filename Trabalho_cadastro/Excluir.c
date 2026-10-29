#include <stdio.h>
#include <string.h>


void excluir(int codigo[], char nome[][15], int *total) {

    int buscar;
    int i, j;
    int achou = 0;

    printf("Qual codigo deseja excluir: ");
    scanf("%d", &buscar);

    for(i = 0; i < *total && achou == 0; i++){
        if(codigo[i] == buscar){    
            for(j = i; j < *total - 1; j++){    
                codigo[j] = codigo[j + 1];
                strcpy(nome[j], nome[j + 1]);
            }
            (*total)--;
            achou = 1;
            printf("\nRegistro excluido!");
        }
    }
    if (achou == 0){
        printf("\nCodigo nao encontrado!");
    }
}


    // Solicitar o codigo que sera excluido

    // Procurar o registro no vetor

    // Deslocar os registros seguintes
    // uma posicao para a esquerda

    // Dica para copiar nomes:
    // strcpy(nome[j], nome[j + 1]);

    // Diminuir o total de registros