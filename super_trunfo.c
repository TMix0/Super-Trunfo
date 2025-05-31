#include <stdio.h>

int main() {

    char estado1[20];
    char codigo1[3];
    char nome1[20];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;

    char estado2[20];
    char codigo2[3];
    char nome2[20];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;

    // Entrada dos dados do primeiro estado
    printf("Digite o nome do primeiro estado: ");
    scanf(" %[^\n]", estado1);
    printf("Digite o código do primeiro estado: ");
    scanf("%s", codigo1);
    printf("Digite o nome da primeira cidade: ");
    scanf(" %[^\n]", nome1);
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
    scanf(" %[^\n]", estado2);
    printf("Digite o código do segundo estado: ");
    scanf("%s", codigo2);
    printf("Digite o nome da segunda cidade: ");
    scanf(" %[^\n]", nome2);
    printf("Digite a população do segundo estado: ");
    scanf("%d", &populacao2);
    printf("Digite a área do segundo estado (em km²): ");
    scanf("%f", &area2);
    printf("Digite o PIB do segundo estado (em bilhões de R$): ");
    scanf("%f", &pib2);
    printf("Digite o número de pontos turísticos do segundo estado: ");
    scanf("%d", &pontosTuristicos2);

    printf("\n==============");

    // Exibição dos dados do primeiro estado
    printf("Dados do primeiro estado:\n");
    printf("Nome: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s\n", nome1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de R$\n", pib1);
    printf("Pontos turísticos: %d\n", pontosTuristicos1);

    printf("\n==============");

    // Exibição dos dados do segundo estado
    printf("Dados do segundo estado:\n");
    printf("Nome: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", nome2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de R$\n", pib2);
    printf("Pontos turísticos: %d\n", pontosTuristicos2);

    return 0;
}
