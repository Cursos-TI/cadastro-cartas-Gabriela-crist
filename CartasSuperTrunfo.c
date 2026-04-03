#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  char Estado[30], estado2[20], nomecit[20], nomecit2[20];
  float  area1, area2, pib1, pib2, pop1, pop2;
  int npont1, npont2, codigo1, codigo2;

  // Área para entrada de dados
  // codigo para cadastro de dados da primeira carta
  printf(" CADASTRO CARTA 1 \n");

  printf("Digite o estado desta carta: "); 
  scanf("%s", Estado);

  printf("Digite o codigo da carta: ");
  scanf("%d", &codigo1);
  
  printf("Digite a cidade dessa carta: ");
  scanf("%s", nomecit);

  printf("Digite a populaçao da cidade da carta: ");
  scanf("%f", &pop1);

  printf("Digite a area desta carta: ");
  scanf("%f", &area1);

  printf("Digite o Pib dessa carta: ");
  scanf("%f", &pib1);

  printf("Digite quantos pontos turisticos tem essa carta: ");
  scanf("%d", &npont1);

  printf(".........................\n");

  //exibir os dados da primeira carta
  printf("     CARTA 1 \n");
  printf(" Estado: %s \n Codigo da carta: %d \n Cidade: %s \n ", Estado,codigo1 ,nomecit);
  printf("Populaçao: %.2f \n Area: %.2f \n Pib: %2.f \n Pontos turisticos: %d \n", pop1, area1, pib1, npont1);

  printf(".........................\n");

  //codigo para cadastro de dados da segunda carta
   printf(" CADASTRO CARTA 2 \n");

  printf("Digite o estado desta carta: "); 
  scanf("%s", estado2);

  printf("Digite o codigo da carta: ");
  scanf("%d", &codigo2);
  
  printf("Digite a cidade dessa carta: ");
  scanf("%s", nomecit2);

  printf("Digite a populaçao da cidade da carta: ");
  scanf("%f", &pop2);

  printf("Digite a area desta carta: ");
  scanf("%f", &area2);

  printf("Digite o Pib dessa carta: ");
  scanf("%f", &pib2);

  printf("Digite quantos pontos turisticos tem essa carta: ");
  scanf("%d", &npont2);

  printf(".........................\n");
  
  //exibir dados da segunda carta 
    printf("     CARTA 2 \n");
  printf(" Estado: %s \n Codigo da carta: %d \n Cidade: %s \n ", estado2,codigo2 ,nomecit2);
  printf("Populaçao: %.2f \n Area: %.2f \n Pib: %2.f \n Pontos turisticos: %d \n", pop2, area2, pib2, npont2);

  printf(".........................\n");

  // Área para exibição dos dados das duas cidades
  printf("     AS CARTAS DO JOGO SAO :  \n");

  printf(".........................\n");

  printf("     CARTA 1 \n");
  printf(" Estado: %s \n Codigo da carta: %d \n Cidade: %s \n ", Estado,codigo1 ,nomecit);
  printf("Populaçao: %.2f \n Area: %.2f \n Pib: %2.f \n Pontos turisticos: %d \n", pop1, area1, pib1, npont1);

  printf(".........................\n");

      printf("     CARTA 2 \n");
  printf(" Estado: %s \n Codigo da carta: %d \n Cidade: %s \n ", estado2,codigo2 ,nomecit2);
  printf("Populaçao: %.2f \n Area: %.2f \n Pib: %2.f \n Pontos turisticos: %d \n", pop2, area2, pib2, npont2);
return 0;
}