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
  int opcao=0 ;

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


    //entrada segunda carta

    strcpy(estado2, "Rio de Janeiro");
    strcpy(carta2, "RJ02");
    strcpy(cidade2, "Nova Iguacu");
    populacao2 = 830000;
    area2 = 520.80;
    pib2 = 14500000000.0;
    pTuristicos2 = 6;

    densidade2= (float)populacao2/area2;
    pibperc2=pib2/populacao2;

  //Menu de navegação

  printf("\n-------- Super Trunfo --------\n");
  printf("Selecione o campo de deseja comparar:\n");
  printf("1 - Populacao\n");
  printf("2 - Area\n");
  printf("3 - PIB\n");
  printf("4 - Pontos Turisticos\n");
  printf("5 - Densidade Demografica\n");
  scanf("%d", &opcao);

  switch (opcao)
  {
  case 1:

    printf("\nVoce escolheu comparar a Populacao!\n");
    printf("Os valores sao:\n");
    printf("%s: %lu habitantes\n", cidade, populacao);
    printf("%s: %lu habitantes\n", cidade2, populacao2);

    if (populacao>populacao2){
      printf("A cidade %s tem mais habitantes que a cidade %s.\n", cidade, cidade2);
      printf("A cidade %s venceu!\n", cidade);
    } else if (populacao2>populacao){
      printf("A cidade %s tem mais habitantes que a cidade %s.\n", cidade2, cidade);
      printf("A cidade %s venceu!\n", cidade2);  
    } else {
      printf("As cidades %s e %s tem a mesma populacao.\n", cidade, cidade2);
      printf("Empate!\n");
    }

    break;

  case 2:

    printf("\nVoce escolheu comparar a Area!\n");
    printf("Os valores sao:\n");
    printf("%s: %.2f km2\n", cidade, area);
    printf("%s: %.2f km2\n", cidade2, area2);

    if (area>area2) {
      printf("A cidade %s e maior que a cidade %s.\n", cidade, cidade2);
      printf("A cidade %s venceu!\n", cidade);
    } else if (area2>area) {
      printf("A cidade %s e maior que a cidade %s.\n", cidade2, cidade);
      printf("A cidade %s venceu!\n", cidade2);  
    } else {
      printf("As cidades %s e %s tem a mesma area.\n", cidade, cidade2);
      printf("Empate!\n");
    }
    break;

  case 3:

    printf("\nVoce escolheu comparar o PIB!\n");  
    printf("Os valores sao:\n");
    printf("%s: R$ %.2f\n", cidade, pib);
    printf("%s: R$ %.2f\n", cidade2, pib2);

    if (pib>pib2) {
      printf("A cidade %s tem um PIB maior que a cidade %s.\n", cidade, cidade2);
      printf("A cidade %s venceu!\n", cidade);
    } else if (pib2>pib) {
      printf("A cidade %s tem um PIB maior que a cidade %s.\n", cidade2, cidade);
      printf("A cidade %s venceu!\n", cidade2); 
    } else {
      printf("As cidades %s e %s tem o mesmo PIB.\n", cidade, cidade2);
      printf("Empate!\n");
    }
    break;

  case 4:

    printf("\nVoce escolheu comparar os Pontos Turisticos!\n"); 
    printf("Os valores sao:\n");
    printf("%s: %d pontos turisticos\n", cidade, pTuristicos);
    printf("%s: %d pontos turisticos\n", cidade2, pTuristicos2);

    if (pTuristicos>pTuristicos2) {
      printf("A cidade %s tem mais pontos turisticos que a cidade %s.\n", cidade, cidade2);
      printf("A cidade %s venceu!\n", cidade);
    } else if (pTuristicos2>pTuristicos) {
      printf("A cidade %s tem mais pontos turisticos que a cidade %s.\n", cidade2, cidade);
      printf("A cidade %s venceu!\n", cidade2);  
    } else {
      printf("As cidades %s e %s tem o mesmo numero de pontos turisticos.\n", cidade, cidade2);
      printf("Empate!\n");
    }
     break;
     
  case 5:

    printf("\nVoce escolheu comparar a Densidade Demografica!\n");  
    printf("Os valores sao:\n");
    printf("%s: %.2f habitantes/km2\n", cidade, densidade);
    printf("%s: %.2f habitantes/km2\n", cidade2, densidade2);

    if (densidade<densidade2) {
      printf("A cidade %s e menos densamente povoada que a cidade %s.\n", cidade, cidade2);
      printf("A cidade %s venceu!\n", cidade);
    } else if (densidade2<densidade) {
      printf("A cidade %s e menos densamente povoada que a cidade %s.\n", cidade2, cidade);
      printf("A cidade %s venceu!\n", cidade2);  
    } else {
      printf("As cidades %s e %s tem a mesma densidade demografica.\n", cidade, cidade2);
      printf("Empate!\n");
    }
    break;

  default:
    printf("Opcao invalida!\n");
    break;
  }

return 0;
} 