
// Solicitar o codigo para consulta

    // Percorrer o vetor procurando o codigo

    // Mostrar o codigo e o nome, se encontrado

    // Informar se nao foi encontrado
#include <stdio.h>
#include <string.h>

void consultar(int codigo[], char nome[][15], int total) {

    int buscar;
    int i;
    int encontrar = 0;


    // vamos começar a buscar primeiro preciamos saber qual codigo

    printf("Qual codigo deseja buscar: ");
    scanf("%d", &buscar);

    // utlilizamos for para fazerum loop na *total para saber se tem o codigo 
    for (i = 0; i < total; i++){
        if (codigo[i] == buscar){
            printf("\n Nome: %s | Codigo: %d", nome[i], codigo[i]);
            encontrar = 1; // se caso o sistema encontrar o codigo cadastrado o valor de encontrar retorna 1
        }
    }

    if (encontrar == 0){
        printf("Codigo nao encontrado!");
    }
}