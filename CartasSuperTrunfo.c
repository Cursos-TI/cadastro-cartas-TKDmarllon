#include <stdio.h>
#include <string.h>

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

  // Área para entrada de dados

      //entrada primeira carta
      
    strcpy(estado, "Rio de Janeiro");
    strcpy(carta, "RJ01");
    strcpy(cidade, "Rio de Janeiro");
    populacao = 6320000;
    area = 1200.33;
    pib = 400000000000.0;
    pTuristicos = 22;

    densidade= populacao/area;
    pibperc=pib/populacao;
    super = (float)populacao + area + pib + pTuristicos + pibperc + (1.0f / densidade);


    //entrada segunda carta

    strcpy(estado2, "Rio de Janeiro");
    strcpy(carta2, "RJ02");
    strcpy(cidade2, "Nova Iguacu");
    populacao2 = 830000;
    area2 = 520.80;
    pib2 = 14500000000.0;
    pTuristicos2 = 6;

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
    printf("%s tem uma populacao de %lu habitantes.\n", cidade, populacao);
    printf("%s tem uma populacao de %lu habitantes.\n", cidade2, populacao2);
    if (populacao>populacao2){
      printf("Carta %s da cidade %s vence!\n", carta,cidade);
    } else {
      printf("Carta %s da cidade %s vence!\n", carta2,cidade2); 
    }
    

return 0;
} 