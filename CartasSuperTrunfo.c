#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades

      // Declaração de Variáveis para a Carta 1
    char estado1;
    char codigo1[4]; // Espaço para a letra, dois números e o caractere nulo '\0'
    char cidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;
    float densidade1, pibPerCapita1;

    // Declaração de Variáveis para a Carta 2
    char estado2;
    char codigo2[4];
    char cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    float densidade2, pibPerCapita2;


  // Área para entrada de dados

      // Cadastro da Carta 1
    printf("--- Cadastro da Carta 1 ---\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado1); // O espaço antes de %c limpa o buffer do teclado

    printf("Código da Carta (ex: A01): ");
    scanf("%s", codigo1);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]s", cidade1); // Lê a string incluindo espaços até a nova linha

    printf("População: ");
    scanf("%d", &populacao1);

    printf("Área (km²): ");
    scanf("%f", &area1);

    printf("PIB (em bilhões): ");
    scanf("%f", &pib1);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos1);

    printf("\n"); // Pula uma linha para organizar a entrada da próxima carta

    // Cadastro da Carta 2
    printf("--- Cadastro da Carta 2 ---\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado2);

    printf("Código da Carta: ");
    scanf("%s", codigo2);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]s", cidade2);

    printf("População: ");
    scanf("%d", &populacao2);

    printf("Área (km²): ");
    scanf("%f", &area2);

    printf("PIB (em bilhões): ");
    scanf("%f", &pib2);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos2);

  // Área para cálculos (densidade populacional e PIB per capita)

  // Cálculos para a Carta 1
  densidade1 = (float)populacao1 / area1;
  pibPerCapita1 = (pib1 * 1000000000.0) / (float)populacao1; // Multiplicado por 1 bi para converter o PIB

  // Cálculos para a Carta 2
  densidade2 = (float)populacao2 / area2;
  pibPerCapita2 = (pib2 * 1000000000.0) / (float)populacao2;

  // Área para exibição dos dados da cidade

    printf("\n-------------------------------\n");
    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1); // %.2f limita a duas casas decimais
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);


return 0;
} 
