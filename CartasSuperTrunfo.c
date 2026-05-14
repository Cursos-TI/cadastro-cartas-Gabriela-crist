#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  int populaçao ,area ,pib ,pontos ,densidade, capita, super;
  char Estado[30], estado2[20], nomecit[20], nomecit2[20];
  float area1, area2, pib1, pib2, pop1, pop2;
  int npont1, npont2, codigo1, codigo2;
  float densidade1, pibpc1, densidade2, pibpc2;
  float power1, power2;

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

  // calculo do pib,  densidade e super poder 
  densidade1 = pop1/area1;
  pibpc1 = pib1/pop1;
  power1  = pop1 + pib1 + pibpc1 + area1 + npont1; 


  //exibir os dados da primeira carta
  printf("     CARTA 1 \n");
  printf(" Estado: %s \n Codigo da carta: %d \n Cidade: %s \n ", Estado,codigo1 ,nomecit);
  printf("Populaçao: %f \n Area: %f \n Pib: %f \n Pontos turisticos: %d \n", pop1, area1, pib1, npont1);
  printf(" O pib per capita dessa carta é de: %f \n A densidade populacional dessa carta é: %f \n ", pibpc1, densidade1);
  printf("o poder da carta é de: %f \n", power1);
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
  
    // cauculo do pib, densidade e super poder 
  densidade2 = pop2/area2;
  pibpc2 = pib2/pop2;
  power2  = pop2 + pib2 + pibpc2 + area2 + npont2;

  //exibir dados da segunda carta 
    printf("     CARTA 2 \n");
  printf(" Estado: %s \n Codigo da carta: %d \n Cidade: %s \n ", estado2,codigo2 ,nomecit2);
  printf("Populaçao: %f \n Area: %f \n Pib: %f \n Pontos turisticos: %d \n", pop2, area2, pib2, npont2);
  printf("O pib per capita dessa carta é de: %f \n A densidade populacional dessa carta é: %f \n ", pibpc2, densidade2);
  printf("o poder da carta é de: %f \n", power2);
  printf(".........................\n");

  //area de comparaçao de cartas
  populaçao = pop1 > pop2;
  area = area1 > area2;
  pib = pib1 > pib2;
  pontos = npont1 > npont2;
  densidade = densidade1 > densidade2;
  capita = pibpc1 > pibpc2;
  super = power1 > power2;

  // exibir resultado da comparaçao 
  printf("resultado (1-carta1, 0- carta2) \n");
  printf("populaçao: %d \n Area: %d \n",populaçao, area);
  printf("Pib: %d \n Pontos turisticos: %d \n", pib,pontos);
  printf("Densidade populacional: %d \n Pib per capita: %d \n",densidade, capita);
  printf("Super poder: %d \n",super);
  printf("fIM DO JOGO ");
  

return 0;
}