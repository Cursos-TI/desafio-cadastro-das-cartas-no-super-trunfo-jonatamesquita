#include <stdio.h>

int main() {
    // Declaração de variáveis para armazenar os atributos das cidades
    char codigo1[5], codigo2[5];
    char nome1[50], nome2[50];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontos_turisticos1, pontos_turisticos2;

    // Entrada de dados para a primeira carta
    printf("Cadastro da primeira carta:\n");
    printf("Código da cidade: ");
    scanf("%s", codigo1);
    printf("Nome da cidade: ");
    scanf("%s", nome1);
    printf("População: ");
    scanf("%d", &populacao1);
    printf("Área (km²): ");
    scanf("%f", &area1);
    printf("PIB (em bilhões): ");
    scanf("%f", &pib1);
    printf("Número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos1);

    // Entrada de dados para a segunda carta
    printf("\nCadastro da segunda carta:\n");
    printf("Código da cidade: ");
    scanf("%s", codigo2);
    printf("Nome da cidade: ");
    scanf("%s", nome2);
    printf("População: ");
    scanf("%d", &populacao2);
    printf("Área (km²): ");
    scanf("%f", &area2);
    printf("PIB (em bilhões): ");
    scanf("%f", &pib2);
    printf("Número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos2);

    // Exibição dos dados cadastrados
    printf("\n====================================\n");
    printf("Dados cadastrados:\n");
    printf("\nCarta 1:\n");
    printf("Código: %s\nNome: %s\nPopulação: %d\nÁrea: %.2f km²\nPIB: %.2f bilhões\nPontos turísticos: %d\n", 
           codigo1, nome1, populacao1, area1, pib1, pontos_turisticos1);
    
    printf("\nCarta 2:\n");
    printf("Código: %s\nNome: %s\nPopulação: %d\nÁrea: %.2f km²\nPIB: %.2f bilhões\nPontos turísticos: %d\n", 
           codigo2, nome2, populacao2, area2, pib2, pontos_turisticos2);
    printf("====================================\n");

    return 0;
}
