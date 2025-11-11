#include <stdio.h>
#include <string.h>



// Definição da struct Territorio
// Representa as informações básicas de cada território no jogo.
struct Territorio {
    char nome[30]; 
    char cor[10];    
    int tropas;      
};

int main() {
    struct Territorio territorios[5];
    int i;

    printf("===========================================\n");
    printf("      CADASTRO DE TERRITORIOS - WAR        \n");
    printf("===========================================\n\n");

    // Cadastro dos 5 territórios
    for (i = 0; i < 5; i++) {
        printf("Cadastro do territorio %d:\n", i + 1);

        // Entrada do nome
        printf("Digite o nome do territorio: ");
        scanf(" %[^\n]", territorios[i].nome);  // Lê até o Enter (permite espaços)

        // Entrada da cor do exército
        printf("Digite a cor do exercito: ");
        scanf(" %[^\n]", territorios[i].cor);

        // Entrada da quantidade de tropas
        printf("Digite a quantidade de tropas: ");
        scanf("%d", &territorios[i].tropas);

        printf("-------------------------------------------\n");
    }

    // Exibição dos dados cadastrados
    printf("\n===========================================\n");
    printf("      LISTA DE TERRITORIOS CADASTRADOS     \n");
    printf("===========================================\n\n");

    for (i = 0; i < 5; i++) {
        printf("Territorio %d:\n", i + 1);
        printf("Nome: %s\n", territorios[i].nome);
        printf("Cor do exercito: %s\n", territorios[i].cor);
        printf("Quantidade de tropas: %d\n", territorios[i].tropas);
        printf("-------------------------------------------\n");
    }

    printf("Cadastro concluido com sucesso!\n");

    return 0;
}
