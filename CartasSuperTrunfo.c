#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
    
  char estado[30], estado2[30];
  char carta[10], carta2[10];
  char cidade[30], cidade2[30];
  unsigned long int populacao, populacao2;
  float area, area2;
  float pib, pib2;
  int pTuristicos, pTuristicos2;
  float densidade, densidade2;
  float pibperc, pibperc2;
  float super, super2;
  float resultado;

  // Área para entrada de dados

      //entrada primeira carta
    printf("Digite o numero da primeira carta: \n");
    scanf("%s", &carta);

    printf("Digite o estado da carta %s: \n", carta);
    scanf(" %29[^\n]", estado);

    printf("Digite a cidade da carta %s: \n", carta);
    scanf(" %29[^\n]", cidade);

    printf("Digite a populacao da carta %s: \n", carta);
    scanf("%lu", &populacao);

    printf("Digite a area em quilometros quadrados da carta %s: \n", carta);
    scanf("%f", &area);

    printf("Digite o pib da carta %s: \n", carta);
    scanf("%f", &pib);

    printf("Digite a quantidade de pontos turisticos da carta %s: \n", carta);
    scanf("%d", &pTuristicos);

    densidade= populacao/area;
    pibperc=pib/populacao;
    super = (float)populacao + area + pib + pTuristicos + pibperc + (1.0f / densidade);


    //entrada segunda carta
    printf("Digite o numero da segunda carta: \n");
    scanf("%s", &carta2);

    printf("Digite o estado da carta %s: \n", carta2);
    scanf(" %29[^\n]", estado2);

    printf("Digite a cidade da carta %s: \n", carta2);
    scanf(" %29[^\n]", cidade2);

    printf("Digite a populacao da carta %s: \n", carta2);
    scanf("%lu", &populacao2);

    printf("Digite a area em quilometros quadrados da carta %s: \n", carta2);
    scanf("%f", &area2);

    printf("Digite o pib da carta %s: \n", carta2);
    scanf("%f", &pib2);

    printf("Digite a quantidade de pontos turisticos da carta %s: \n", carta2);
    scanf("%d", &pTuristicos2);

    densidade2= populacao2/area2;
    pibperc2=pib2/populacao2;
    super2=(float)populacao2+area2+pib2+pTuristicos2+pibperc2+(1.0f/densidade2);

  // Área para exibição dos dados da cidade

    printf("\n----- Carta(s) Cadastrada(s) -----\n");

    //saida primeira carta
    printf("Numero da carta: %s\n", carta); 
    printf("Estado: %s\n", estado);
    printf("Cidade: %s\n", cidade);
    printf("Populacao: %lu\n", populacao);
    printf("Area: %.2f quilometros quadrados\n", area);
    printf("PIB: R$ %.2f\n", pib);
    printf("Pontos Turisticos: %d\n", pTuristicos);
    printf("Densidade populacional: %.2f habitantes por quilometros quadrados \n",densidade);
    printf("Pib percapta R$: %.2f\n", pibperc);
    
    //saida segunda carta
    printf("\nNumero da carta: %s\n", carta2);
    printf("Estado: %s\n", estado2);
    printf("Cidade: %s\n", cidade2);
    printf("Populacao: %lu\n", populacao2);
    printf("Area: %.2f quilometros quadrados\n", area2);
    printf("PIB: R$ %.2f\n", pib2);
    printf("Pontos Turisticos: %d\n", pTuristicos2);
    printf("Densidade populacional: %.2f habitantes por quilometros quadrados \n",densidade2);
    printf("Pib percapta R$: %.2f\n", pibperc2);

  //Comparação das cartas

    printf("\n----- Super Trunfo! -----\n");
    printf("Comparando a primeira com a segunda carta: 1 significa que a primeira carta venceu, 0 significa que a segunda carta  venceu\n");
    resultado=populacao>populacao2;
    printf("Populacao: %.0f\n", resultado);
    resultado=area>area2;
    printf("Area: %.0f\n", resultado);
    resultado=pib>pib2;
    printf("PIB: %.0f\n", resultado);
    resultado=pTuristicos>pTuristicos2;
    printf("Pontos Turisticos: %.0f\n", resultado);
    resultado=densidade<densidade2;
    printf("Densidade populacional: %.0f\n", resultado); 
    resultado=pibperc>pibperc2;
    printf("Pib percapta: %.0f\n", resultado); 
    resultado=super>super2;
    printf("Super Trunfo: %.0f\n", resultado);  

return 0;
} 