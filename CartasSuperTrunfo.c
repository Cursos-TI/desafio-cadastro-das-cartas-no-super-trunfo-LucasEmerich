#include <stdio.h>

int main() {

    char estado, codigo[2], cidade[20], estado2, codigo2[2], cidade2[20];
    int populacao, pontosturisticos, populacao2, pontosturisticos2;
    float area, pib, area2, pib2;

    printf("Bem vindo ao jogo supertrunfo cidades\n\ninsira os dados da primeira carta que deseja cadastrar a seguir. \n\n");
    printf("Insira a letra que represente o estado da cidade: ");
    scanf(" %c", &estado);
    printf("Insira o numero da cidade em questao, de 01 a 04: ");
    scanf("%s", &codigo);
    printf("Insira o nome da cidade: ");
    scanf("%s", &cidade);
    printf("Insira o numero de habitantes da cidade: ");
    scanf("%i", &populacao);
    printf("Insira a area da cidade em quilometros quadrados: ");
    scanf(" %f", &area);
    printf("Insira o produto interno bruto da cidade: ");
    scanf(" %f", &pib);
    printf("Insira a quantidade de pontos turisticos na cidade: ");
    scanf("%i", &pontosturisticos);

    printf("\nInsira os dados da segunda carta que deseja cadastrar a seguir. \n\n");
    printf("Insira a letra que represente o estado da cidade: ");
    scanf(" %c", &estado2);
    printf("Insira o numero da cidade em questao, de 01 a 04: ");
    scanf("%s", codigo2);
    printf("Insira o nome da cidade: ");
    scanf("%s", cidade2);
    printf("Insira o numero de habitantes da cidade: ");
    scanf("%i", &populacao2);
    printf("Insira a area da cidade em quilometros quadrados: ");
    scanf(" %f", &area2);
    printf("Insira o produto interno bruto da cidade: ");
    scanf(" %f", &pib2);
    printf("Insira a quantidade de pontos turisticos na cidade: ");
    scanf("%i", &pontosturisticos2);

    printf("\n\nCartas cadastradas com sucesso!\nconfira a seguir as cartas cadastradas:\n\n");
    printf("Carta 1:\n");
    printf("Estado: %c\n", estado);
    printf("Codigo: %c%s\n", estado, codigo);
    printf("Nome da cidade: %s\n", cidade);
    printf("Populacao: %i\n", populacao);
    printf("Area: %.2f\n", area);
    printf("PIB: %.2f\n", pib);
    printf("Numero de pontos turisticos: %i\n\n",pontosturisticos);

    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %c%s\n", estado2, codigo2);
    printf("Nome da cidade: %s\n", cidade2);
    printf("Populacao: %i\n", populacao2);
    printf("Area: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Numero de pontos turisticos: %i\n\n",pontosturisticos2);

    return 0;
}
