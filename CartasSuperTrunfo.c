#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
    
  char estado[30], estado2[30];
  char carta[10], carta2[10];
  char cidade[30], cidade2[30];
  int populacao, populacao2;
  float area, area2;
  float pib, pib2;
  int pTuristicos, pTuristicos2;

  // Área para entrada de dados

      //entrada primeira carta
    printf("Digite o numero da primeira carta: \n");
    scanf("%s", &carta);

    printf("Digite o estado da carta %s: \n", carta);
    scanf(" %29[^\n]", estado);

    printf("Digite a cidade da carta %s: \n", carta);
    scanf(" %29[^\n]", cidade);

    printf("Digite a populacao da carta %s: \n", carta);
    scanf("%d", &populacao);

    printf("Digite a area em quilometros quadrados da carta %s: \n", carta);
    scanf("%f", &area);

    printf("Digite o pib da carta %s: \n", carta);
    scanf("%f", &pib);

    printf("Digite a quantidade de pontos turisticos da carta %s: \n", carta);
    scanf("%d", &pTuristicos);

    //entrada segunda carta
    printf("Digite o numero da segunda carta: \n");
    scanf("%s", &carta2);

    printf("Digite o estado da carta %s: \n", carta2);
    scanf(" %29[^\n]", estado2);

    printf("Digite a cidade da carta %s: \n", carta2);
    scanf(" %29[^\n]", cidade2);

    printf("Digite a populacao da carta %s: \n", carta2);
    scanf("%d", &populacao2);

    printf("Digite a area em quilometros quadrados da carta %s: \n", carta2);
    scanf("%f", &area2);

    printf("Digite o pib da carta %s: \n", carta2);
    scanf("%f", &pib2);

    printf("Digite a quantidade de pontos turisticos da carta %s: \n", carta2);
    scanf("%d", &pTuristicos2);

  // Área para exibição dos dados da cidade

    printf("\n----- Carta(s) Cadastrada(s) -----\n");

    //saida primeira carta
    printf("Numero da carta: %s\n", carta); 
    printf("Estado: %s\n", estado);
    printf("Cidade: %s\n", cidade);
    printf("Populacao: %d\n", populacao);
    printf("Area: %.2f quilometros quadrados\n", area);
    printf("PIB: R$ %.2f\n", pib);
    printf("Pontos Turisticos: %d\n", pTuristicos);
    
    //saida segunda carta
    printf("\nNumero da carta: %s\n", carta2);
    printf("Estado: %s\n", estado2);
    printf("Cidade: %s\n", cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f quilometros quadrados\n", area2);
    printf("PIB: R$ %.2f\n", pib2);
    printf("Pontos Turisticos: %d\n", pTuristicos2);


return 0;
} 
