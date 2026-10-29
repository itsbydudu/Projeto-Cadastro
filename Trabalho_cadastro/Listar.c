#include <stdio.h>
#include <string.h>




void listar(int codigo[], char nome[][15], int total) {

    int i;


    if (total == 0){
        printf("Nenhum registro cadastrado!");
    } 

    for(i = 0; i < total; i++){
        printf("\nNome: %s | Codigo: %d", nome[i], codigo[i]);
    }

}