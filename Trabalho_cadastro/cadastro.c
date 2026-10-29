#include <stdio.h>
#include <string.h>


// verificar de ha espaço
// Ler o codigo e o nome
// Atualizar o total de registros


void cadastrar (int codigo[], char nome[][15], int *total) {

    int novo_codigo;
    int repetido = 0;
    int i;

    // Verificar se ainda tem espaço para cadastrar
    if (*total > 5){
        printf("Limite de cadastro atingido!");
        return;
    } 

    // aqui passamos pela verificação e vamos começar o cadastro
    printf("Digite seu codigo: ");
    scanf("%d", &novo_codigo);

    // pegamos o codigo do usuario e vamos ver se tem algum codigo igual ja cadastrado e se tiver volta repetido = 1
    for (i = 0; i < *total; i++){
        codigo[i] == novo_codigo;
        repetido = 1;
    }

    // voltou repetido = 1 ent significa q tem um cadastrado 
    if (repetido == 1){
        printf("Ja existe um codigo!");
    } 
    // imagine 2 cadastros ja feito, o endereço ent fica total[1] pq lembra q total[0] é um espaço na memoria.
    // estamos ent no total[2], pois ja rodou o total ++ la em cima
    // 1 linha do else fala que o novo codigo vai passar para o local de memoria total[2]
    else {
        codigo[*total] = novo_codigo;
        printf("Digite seu nome: ");
        scanf("%s", nome[*total]);
        (*total)++;
        printf("Cadastrado com sucesso!");
    }

}