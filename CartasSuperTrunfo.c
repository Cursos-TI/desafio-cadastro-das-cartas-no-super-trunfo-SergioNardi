#include<stdio.h>
int main()
{
  
    printf("Desafio Cadastro de cartas no super trunfo!\n");
  
    //Carta 1

    char estado_1;
    char cod_carta_1[4];
    char nome_cidade1[25];
    int populacao_1;
    float area_1;
    float pib_1;
    int ponto_t1;

    //Carta 2

    char estado_2;
    char cod_carta_2[4];
    char nome_cidade_2[25];
    int populacao_2;
    float area_2;
    float pib_2;
    int ponto_t2;


    //Entrada de dados carta 1
  printf("***** Cadastro da carta 1 *****\n");
  
  printf("Estado (um letra de 'A' a 'H'): ");
  scanf(" %c", &estado_1);

  printf("Código (ex: A01): ");
  scanf("%s", cod_carta_1);

  printf("Nome da cidade: ");
  scanf(" %[^\n]", nome_cidade1);

  printf("População: ");
  scanf("%d", &populacao_1);

  printf("Área em km²: ");
  scanf("%f", &area_1);

  printf("PIB (em bilhões): ");
  scanf("%f", &pib_1);

  printf("Número de pontos turísticos: ");
  scanf("%d", &ponto_t1);


    //Entrada de dados carta 2
  printf("***** Cadastro da carta 2 *****\n");
  printf("Estado (um letra de 'A' a 'H'): ");
  scanf(" %c", &estado_2);

  printf("Código (ex: B02): ");
  scanf("%s", cod_carta_2);

  printf("Nome da cidade: ");
  scanf(" %[^\n]", nome_cidade_2);

  printf("População: ");
  scanf("%d", &populacao_2);

  printf("Área em km²: ");
  scanf("%f", &area_2);

  printf("PIB (em bilhões): ");
  scanf("%f", &pib_2);

  printf("Número de pontos turísticos: ");
  scanf("%d",&ponto_t2);
  printf("\n");

    return 0;

}