#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Nível Aventureiro concluído
// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio

    char estado1[3];
    char codigodacarta1[6];
    char nomedacidade1[40];
    int populacao1;
    float area1;
    float pib1;
    int numeroDePontosturismo1;

    char estado2[3];
    char codigodacarta2[6];
    char nomedacidade2[40];
    int populacao2;
    float area2;
    float pib2;
    int numeroDePontosturismo2;

    //Menu interativo utilizando switch case
    // Implemente a lógica do menu interativo aqui.
    // Utilize a estrutura switch case para permitir que o usuário escolha entre diferentes opções, como cadastrar cartas, comparar cartas, exibir resultados, etc.
    int opcao;
    do {
    printf("----------------------------\n");
    printf("Menu Super Trunfo - Cidades\n");
    
    printf("Escolha uma opcao:\n");

    printf("1. Cadastrar cartas\n");

    printf("2. Comparar cartas\n");

    printf("3. Dados Cadastrados\n");

    printf("4. Sair\n");
    printf("----------------------------\n");
    printf("\n");

    printf("Opcao: ");
    scanf("%d", &opcao);

    switch (opcao) {
         case 1:

    //Lógica para cadastrar cartas

    printf("Insira os dados da primeira cidade:\n");
    printf("Estado: ");
    scanf(" %s", &estado1);

    printf("Codigo da carta Ex:(BA01): ");
    scanf(" %s", &codigodacarta1);
    getchar();

    printf("Nome da cidade: ");
    fgets(nomedacidade1, sizeof(nomedacidade1), stdin);
    nomedacidade1[strcspn(nomedacidade1, "\n")] = 0;

    printf("Populacao: ");
    scanf("%d", &populacao1);

    printf("Area (km2): ");
    scanf("%f", &area1);

    printf("PIB (bilhoes): ");
    scanf("%f", &pib1);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &numeroDePontosturismo1);

    printf("\n");

    printf("----------------------------\n");

    printf("Insira os dados da segunda cidade:\n");
    printf("Estado: ");
    scanf(" %s", &estado2);

    printf("Codigo da carta: ");
    scanf(" %s", &codigodacarta2);
    getchar();

    printf("Nome da cidade: ");
    fgets(nomedacidade2, sizeof(nomedacidade2), stdin);
    nomedacidade2[strcspn(nomedacidade2, "\n")] = 0;

    printf("Populacao: ");
    scanf("%d", &populacao2);

    printf("Area (km2): ");
    scanf("%f", &area2);
    
    printf("PIB (bilhoes): ");
    scanf("%f", &pib2);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &numeroDePontosturismo2);

    printf("\n");

             break;
         case 2:
            // Lógica para comparar cartas
    
    // Implementando a lógica de comparação entre as cartas aqui.
    // Compare os atributos relevantes e determine qual carta é a vencedora.    
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.
    // Exemplo de comparação:
    float densidade_populacional1 = populacao1 / area1; // Calculando densidade populacional
    float densidade_populacional2 = populacao2 / area2; // Calculando densidade populacional

    float pib_per_capita1 = (pib1 * 1000000000.0) / populacao1; // Calculando PIB per capita da cidade 1
    float pib_per_capita2 = (pib2 * 1000000000.0) / populacao2; // Calculando PIB per capita da cidade 2

    float super_poder1 = (1/densidade_populacional1) + pib_per_capita1 + numeroDePontosturismo1;
    float super_poder2 = (1/densidade_populacional2) + pib_per_capita2 + numeroDePontosturismo2;

    printf("-------------------------------\n");
    printf("Comparacao entre as cartas:\n");
    printf("-------------------------------\n");
    
    printf("\n");

    if (populacao1 > populacao2) {
        printf("Jogador 1 tem a cidade com maior populacao.\n");
    } else if (populacao1 < populacao2) {
        printf("Jogador 2 tem a cidade com maior populacao.\n");
    } else {
        printf("As cidades tem a mesma populacao.\n");
    }

    if (area1 > area2) {
        printf("Jogador 1 tem a cidade com maior area.\n");
    } else if (area1 < area2) {
        printf("Jogador 2 tem a cidade com maior area.\n");
    } else {
        printf("As cidades tem a mesma area.\n");
    }

    if (pib1 > pib2) {
        printf("Jogador 1 tem a cidade com maior PIB.\n");
    } else if (pib1 < pib2) {
        printf("Jogador 2 tem a cidade com maior PIB.\n");
    } else {
        printf("As cidades tem o mesmo PIB.\n");
    }

    if (numeroDePontosturismo1 > numeroDePontosturismo2) {
        printf("Jogador 1 tem a cidade com maior numero de pontos turisticos.\n");
    } else if (numeroDePontosturismo1 < numeroDePontosturismo2) {
        printf("Jogador 2 tem a cidade com maior numero de pontos turisticos.\n");
    } else {
        printf("As cidades tem o mesmo numero de pontos turisticos.\n");
    }

    if (densidade_populacional1 > densidade_populacional2) {
        printf("Jogador 2 tem a cidade com maior densidade populacional.\n");
    } else if (densidade_populacional1 < densidade_populacional2) {
        printf("Jogador 1 tem a cidade com maior densidade populacional.\n");
    } else {
        printf("As cidades tem a mesma densidade populacional.\n");
    }

    if (pib_per_capita1 > pib_per_capita2) {
        printf("Jogador 1 tem a cidade com maior PIB per capita.\n");
    } else if (pib_per_capita1 < pib_per_capita2) {
        printf("Jogador 2 tem a cidade com maior PIB per capita.\n");
    } else {
        printf("As cidades tem o mesmo PIB per capita.\n");
    }

    if (super_poder1 > super_poder2) {
        printf("Jogador 1 tem a cidade com maior super poder.\n");
    } else if (super_poder1 < super_poder2) {
        printf("Jogador 2 tem a cidade com maior super poder.\n");
    } else {
        printf("As cidades tem o mesmo super poder.\n");
    }


    printf("\n");

             break;

         case 3:
             // Lógica para exibir resultados

    printf("-------------------------------\n");
    printf("Dados das cidades cadastradas:\n");
    printf("-------------------------------\n");

    // Exibição dos dados do jogador 1
    printf("Dados da cidade do Jogador 1:\n");
    printf("Estado: %s\n", estado1);

    printf("Codigo da cidade: %s\n", codigodacarta1);

    printf("Nome da cidade: %s\n", nomedacidade1);

    printf("Populacao: %d\n", populacao1);

    printf("Area (km2): %.2f\n", area1);

    printf("PIB (bilhoes): %.2f\n", pib1);

    printf("Numero de pontos turisticos: %d\n", numeroDePontosturismo1);

    printf("Densidade populacional (hab/km2): %.2f\n", densidade_populacional1);

    printf("PIB per capita (bilhoes/hab): %.6f\n", pib_per_capita1);

    printf("\n");

    // Exibição dos dados do jogador 2
    printf("----------------------------------\n");

    printf("Dados da cidade do Jogador 2:\n");
    printf("Estado: %s\n", estado2);

    printf("Codigo da cidade: %s\n", codigodacarta2);

    printf("Nome da cidade: %s\n", nomedacidade2);
    
    printf("Populacao: %d\n", populacao2);

    printf("Area (km2): %.2f\n", area2);

    printf("PIB (bilhoes): %.2f\n", pib2);

    printf("Numero de pontos turisticos: %d\n", numeroDePontosturismo2);

    printf("Densidade populacional (hab/km2): %.0f\n", densidade_populacional2);

    printf("PIB per capita (bilhoes/hab): %.0f\n", pib_per_capita2);

    printf("\n");


                break;

             case 4:
             printf("Saindo do programa.\n");
                exit(0);
                break;
         default:
             printf("Opcao invalida. Tente novamente.\n");
             break;
    }   
} while (opcao != 4);

    return 0;
}

// Nível Aventureiro concluído