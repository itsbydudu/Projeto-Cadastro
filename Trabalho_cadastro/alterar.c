#include <stdio.h>
#include <string.h>

void alterar(int codigo[], char nome[][15], int total) {

    int buscar;
    int i;
    int novo_codigo;
    int encontrou= 0;

    printf("Qual codigo deseja alterar: ");
    scanf("%d", &buscar);

    for (i = 0; i < total; i++){
        if (codigo[i] == buscar){
            printf("Novo codigo:");
            scanf("%d", &codigo[i]);
            printf("Novo nome: ");
            scanf("%s", nome[i]);
            printf("\nNovo nome: %s | Novo codigo: %d", nome[i], codigo[i]);
            printf("\nRegistro alterado com sucesso!");
            encontrou = 1;
        }
    }
    
    if (encontrou == 0){
        printf("Codigo nao foi encontrado!");
    }
}


// Solicitar o codigo que sera alterado

    // Procurar o codigo no vetor

    // Ler o novo codigo e o novo nome

    // Informar se nao foi encontrado