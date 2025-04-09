#include <stdio.h>

int main() {
    char estado1[20], codigo1[10], cidade1[30];
    int populacao1,pontos1;
    float area1,pib1;

    // Entrada de dados da primeira carta
    printf("Digite o estado da primeira carta: ");
    scanf("%s", estado1);
    printf("Digite o código da primeira carta: ");
    scanf("%s", codigo1);
    printf("Digite a cidade da primeira carta: ");
    scanf("%s", cidade1);
    printf("Digite a população da primeira carta: ");
    scanf("%d", &populacao1);
    printf("Digite a área em km² da primeira carta: ");
    scanf("%f", &area1);
    printf("Digite o PIB da primeira carta: ");
    scanf("%f", &pib1);
    printf("Digite o número de pontos turísticos da primeira carta: ");
    scanf("%d", &pontos1);

     // Exibição dos dados
     printf("\nCartas cadastradas:\n");
     printf("1ª Carta - Estado: %s, Código: %s, Cidade: %s, População: %d, Área: %.2f km², PIB: %.2f, Pontos turísticos: %d\n", 
             estado1, codigo1, cidade1, populacao1, area1, pib1, pontos1);

 }

