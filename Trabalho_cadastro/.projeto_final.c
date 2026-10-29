#include <stdio.h>
#include <string.h>


void cadastrar (int codigo[], char nome[][15], int *total) {

    int novo_codigo;
    int repetido = 0;
    int i;

    if (*total >= 5){
        printf("\nLimite de cadastro atingido!");
        return;
    } 

    printf("\nDigite seu codigo: ");
    scanf("%d", &novo_codigo);

    for (i = 0; i < *total; i++){
        if (codigo[i] == novo_codigo){
            repetido = 1;   
        }
    }

    if (repetido == 1){
        printf("\nJa existe um codigo!");
    } else {
        codigo[*total] = novo_codigo;
        printf("\nDigite seu nome: ");
        scanf("%s", nome[*total]);
        (*total)++;
        printf("\nCadastrado com sucesso!");
    }

}

void consultar(int codigo[], char nome[][15], int total) {

    int buscar;
    int i;
    int encontrado= 0;

    printf("\nQual codigo deseja consultar: ");
    scanf("%d", &buscar);

    for (i = 0; i < total; i++){
        if (codigo[i] == buscar){
            printf("\nNome: %s | Codigo: %d", nome[i], codigo[i]);
            encontrado = 1;    
        }   
    }

    if (encontrado == 0){
        printf("\nCodigo nao foi encontrado!");
    }
}

void listar(int codigo[], char nome[][15], int total) {

    int i;


    if (total == 0){
        printf("\nNenhum registro cadastrado!");
    } 

    for(i = 0; i < total; i++){
        printf("\nNome: %s | Codigo: %d", nome[i], codigo[i]);
    }

}

void alterar(int codigo[], char nome[][15], int total) {

    int buscar;
    int i;
    int encontrou= 0;

    printf("\nQual codigo deseja alterar: ");
    scanf("%d", &buscar);

    for (i = 0; i < total; i++){
        if (codigo[i] == buscar){
            printf("\nNovo codigo:");
            scanf("%d", &codigo[i]);
            printf("\nNovo nome: ");
            scanf("%s", nome[i]);
            printf("\nNovo nome: %s | Novo codigo: %d", nome[i], codigo[i]);
            printf("\nRegistro alterado com sucesso!");
            encontrou = 1;
        }
    }
    
    if (encontrou == 0){
        printf("\nCodigo nao foi encontrado!");
    }
}

void excluir(int codigo[], char nome[][15], int *total) {

    int buscar;
    int i, j;
    int achou = 0;

    printf("\nQual codigo deseja excluir: ");
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

int main(void) {

    int codigo[5];
    char nome[5][15];

    int total = 0;
    int opcao;

    do {
        printf("\n\n===== MENU =====");
        printf("\n1 - Cadastrar");
        printf("\n2 - Consultar");
        printf("\n3 - Listar");
        printf("\n4 - Alterar");
        printf("\n5 - Excluir");
        printf("\n0 - Sair");

        printf("\nEscolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {

            case 1:
                cadastrar(codigo, nome, &total);
                break;

            case 2:
                consultar(codigo, nome, total);
                break;

            case 3:
                listar(codigo, nome, total);
                break;

            case 4:
                alterar(codigo, nome, total);
                break;

            case 5:
                excluir(codigo, nome, &total);
                break;

            case 0:
                printf("\nEncerrando...\n");
                break;

            default:
                printf("\nOpcao invalida!\n");
        }

    } while (opcao != 0);

    return 0;
}