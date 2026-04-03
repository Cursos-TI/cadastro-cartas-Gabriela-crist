#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  char Estado[30], estado2[20], nomecit[20], nomecit2[20];
  double codigo1, codigo2, area1, area2, pib1, pib2, pop1, pop2;
  int npont1, npont2;

  // Área para entrada de dados
  printf("Digite o nome do estado da primeira carta:"); 
  scanf("%s", Estado);
  
  printf("Digite o nome da cidade da primeira carta:");
  scanf("%s", nomecit);

  printf("Digite o codigo da carta:");
  scanf("%lf", codigo1);

  printf("Digite a populaçao da cidade dessa carta: ");
  scanf("%lf", pop1);
  // Área para exibição dos dados da cidade
  printf("Estado: %s \n, Cidade: %s \n, Populaçao: %lf \n, Codigo da carta: %lf \n, ", Estado,nomecit,pop1,codigo1);


return 0;
}
