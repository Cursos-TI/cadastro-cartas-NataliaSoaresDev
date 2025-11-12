#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
    char estado;
    int numeroCidade;
    char nomeCidade[50];
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;

    // Entrada de dados
    printf("=== Cadastro de Carta - Super Trunfo Paises ===\n");

    printf("Informe a letra do Estado (A-H): ");
    scanf(" %c", &estado);

    printf("Informe o numero da cidade (1-4): ");
    scanf("%d", &numeroCidade);

    printf("Informe o nome da cidade: ");
    scanf(" %[^\n]", nomeCidade);

    printf("Populacao: ");
    scanf("%d", &populacao);

    printf("Area (em km²): ");
    scanf("%f", &area);

    printf("PIB (em bilhões): ");
    scanf("%f", &pib);

    printf("Número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos);

    // Exibição dos dados
    printf("\n=== Dados da Carta ===\n");
    printf("Codigo da carta: %c%02d\n", estado, numeroCidade);
    printf("Cidade: %s\n", nomeCidade);
    printf("Populacao: %d\n", populacao);
    printf("Area: %.2f km²\n", area);
    printf("PIB: %.2f bilhões\n", pib);
    printf("Pontos Turisticos: %d\n", pontosTuristicos);

    return 0;
}
