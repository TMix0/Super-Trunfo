#include <stdio.h>

int main() {

    char estado1[20];
    char codigo1[5];
    char nome1[20];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;
    float densidadePopulacional1;
    float pibPerCapita1;

    char estado2[20];
    char codigo2[5];
    char nome2[20];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    float densidadePopulacional2;
    float pibPerCapita2;

    // Entrada dos dados do primeiro estado
    printf("Digite o nome do primeiro estado: ");
    scanf("%s", estado1);
    printf("Digite o código do primeiro estado: ");
    scanf("%s", codigo1);
    printf("Digite o nome da primeira cidade: ");
    scanf("%s", nome1);
    printf("Digite a população do primeiro estado: ");
    scanf("%d", &populacao1);
    printf("Digite a área do primeiro estado (em km²): ");
    scanf("%f", &area1);
    printf("Digite o PIB do primeiro estado (em bilhões de R$): ");
    scanf("%f", &pib1);
    printf("Digite o número de pontos turísticos do primeiro estado: ");
    scanf("%d", &pontosTuristicos1);

    printf("\n");

    // Entrada dos dados do segundo estado
    printf("Digite o nome do segundo estado: ");
    scanf(" %s", estado2);
    printf("Digite o código do segundo estado: ");
    scanf("%s", codigo2);
    printf("Digite o nome da segunda cidade: ");
    scanf(" %s", nome2);
    printf("Digite a população do segundo estado: ");
    scanf("%d", &populacao2);
    printf("Digite a área do segundo estado (em km²): ");
    scanf("%f", &area2);
    printf("Digite o PIB do segundo estado (em bilhões de R$): ");
    scanf("%f", &pib2);
    printf("Digite o número de pontos turísticos do segundo estado: ");
    scanf("%d", &pontosTuristicos2);

    printf("\n======================");

    // Cálculo da densidade populacional e PIB per capita
    densidadePopulacional1 = populacao1 / area1;
    pibPerCapita1 = pib1 / populacao1; // Convertendo PIB

    densidadePopulacional2 = populacao2 / area2;
    pibPerCapita2 = pib2 / populacao2; // Convertendo PIB 

    // Exibição dos dados do primeiro estado
    printf("Dados da primeira carta:\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da cidade: %s\n", nome1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de R$\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("Densidade populacional do primeiro estado: %.2f hab/km²\n", densidadePopulacional1);
    printf("Pib per capita do primeiro estado: %.2f R$\n", pibPerCapita1);

    printf("\n=====================");

    // Exibição dos dados do segundo estado
    printf("Dados da segunda carta:\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da cidade: %s\n", nome2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de R$\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade populacional do segundo estado: %.2f hab/km²\n", densidadePopulacional2);
    printf("Pib per capita do segundo estado: %.2f R$\n", pibPerCapita2);

    return 0;
}
