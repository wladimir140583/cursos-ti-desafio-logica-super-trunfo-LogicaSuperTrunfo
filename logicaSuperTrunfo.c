#include <stdio.h>

// Desafio Super Trunfo - Paises
// Tema 1 - Cadastro das cartas
// Objetivo: No nivel novato voce deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informacoes.

int main() {
// Area para definicoes das variaveis para armazenar as propriedades das cidades
   
    char nCarta1;
    char nCarta2;
    float populacao;
    int pontos_turisticos;
    float areaEmkm2;
    float pib1;
    float pib2;
    char estado;
    char codigo_Da_carta[5];
    char nome_da_cidade1[10];
    char nome_da_cidade2[10];
    float densidade_Populacional;
    float PIB_per_Capita;

// Area para entrada de dados Carta 1
  
    printf("\nCarta 1:\n\n");
    printf("Digite a letra do Estado:\n");
    scanf(" %c", &estado);

    printf("Digite o codigo da carta: \n");
    scanf(" %s", &codigo_Da_carta);

    printf("Digite o nome da cidade: \n");
    scanf(" %s", &nome_da_cidade1);

    printf("Digite a quantidade da Populacao: \n");
    scanf(" %f", &populacao);

    printf("Digite a Area: \n");
    scanf(" %f", &areaEmkm2);

    printf("Digite o Pib: \n");
    scanf(" %f", &pib1);

    printf("Digite o Numero de Pontos Turisticos: \n");
    scanf(" %d", &pontos_turisticos);

    densidade_Populacional = populacao / areaEmkm2;
    PIB_per_Capita = pib1 / populacao;

// Area para exibicao dos dados da cidade

    // Carta 1.0.0

    printf("\nCarta1:\n");
    printf("Estado: %c\nCodigo: %s\n", estado, codigo_Da_carta);
    printf("Nome da Cidade: %s", nome_da_cidade1);
    printf("\nPopulacao: %.2f\nArea: %.2f km2\nPib %.2f bilhoes de reais\n", populacao, areaEmkm2, pib1);
    printf("Numero de Pontos Turisticos: %d\n\n", pontos_turisticos);

    printf("Densidade Populacional: %.2f hab/km2\n", densidade_Populacional);
    printf("Pib per Capita: %.2f reais\n", PIB_per_Capita);

// Area para entrada de dados Carta 2

    printf("\nCarta 2:\n");
    printf("\nDigite a letra do Estado: \n");
    scanf(" %s", &estado);

    printf("Digite o codigo da carta: \n");
    scanf(" %s", &codigo_Da_carta);

    printf("Digite o nome da cidade: \n");
    scanf(" %s", &nome_da_cidade2);

    printf("Digite a quantidade da Populacao: \n");
    scanf(" %f", &populacao);

    printf("Digite a Area: \n");
    scanf(" %f", &areaEmkm2);

    printf("Digite o Pib: \n");
    scanf(" %f", &pib2);

    printf("Digite o Numero de Pontos Turisticos: \n");
    scanf(" %d", &pontos_turisticos);

    densidade_Populacional = populacao / areaEmkm2;
    PIB_per_Capita = pib2 / populacao;

// Area para exibicao dos dados da cidade

    // Carta 2

    printf("\nCarta2:\n");
    printf("Estado: %c\nCodigo: %s\n", estado, codigo_Da_carta);
    printf("Nome da Cidade: %s", nome_da_cidade2);
    printf("\nPopulacao: %.2f\nArea: %.2f km2\nPib: %.2f bilhoes de reais\n", populacao, areaEmkm2, pib2);
    printf("Numero de Pontos Turisticos: %d\n\n", pontos_turisticos);

    printf("Densidade Populacional: %.2f hab/km2\n", densidade_Populacional);
    printf("Pib per Capita: %.2f reais\n\n", PIB_per_Capita);

    if (pib1 > pib2){
        printf("Carta 1 - Cidade: %s \n", nome_da_cidade1);
        printf("Venceu o jogo devido seu Pib ser maior \n ");
    }
    else if (pib1 == pib2) {
         printf(" ## O Jogo Empatou devido o Pib de ambas as cartas serem iguais. ##\n ");
    } else {
        printf("Carta 2 - Cidade: %s \n", nome_da_cidade2);
        printf("Venceu o jogo devido seu Pib ser maior \n ");
    }
    
    return 0;

}
