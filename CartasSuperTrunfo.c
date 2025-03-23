#include <stdio.h>

int main() {
    // Dados da Carta 1
    char estado1;
    char codigo1[4];
    char cidade1[100];
    unsigned long int populacao1; // Mudança para unsigned long int
    float area1;
    float pib1;
    int pontos_turisticos1;
    float densidade_pop1;
    float pib_per_capita1;
    float super_poder1;

    // Dados da Carta 2
    char estado2;
    char codigo2[4];
    char cidade2[100];
    unsigned long int populacao2; // Mudança para unsigned long int
    float area2;
    float pib2;
    int pontos_turisticos2;
    float densidade_pop2;
    float pib_per_capita2;
    float super_poder2;

    // Leitura dos dados da Carta 1
    printf("Digite os dados da Carta 1:\n");

    printf("Estado (A-H): ");
    scanf(" %c", &estado1);

    printf("Codigo (ex: A01): ");
    scanf("%s", codigo1);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", cidade1);

    printf("Populacao: ");
    scanf("%lu", &populacao1); // %lu para unsigned long int

    printf("Area (km2): ");
    scanf("%f", &area1);

    printf("PIB (bilhoes de reais): ");
    scanf("%f", &pib1);

    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pontos_turisticos1);

    // Cálculos para a Carta 1
    densidade_pop1 = (float)populacao1 / area1;
    pib_per_capita1 = (pib1 * 1000000000.0f) / populacao1; // PIB em reais, converte pib1 para float
    super_poder1 = populacao1 + area1 + (pib1 * 1000000000.0f) + pontos_turisticos1 + pib_per_capita1 + (1.0f / densidade_pop1);

    // Leitura dos dados da Carta 2
    printf("\nDigite os dados da Carta 2:\n");

    printf("Estado (A-H): ");
    scanf(" %c", &estado2);

    printf("Codigo (ex: B02): ");
    scanf("%s", codigo2);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", cidade2);

    printf("Populacao: ");
    scanf("%lu", &populacao2); // %lu para unsigned long int

    printf("Area (km2): ");
    scanf("%f", &area2);

    printf("PIB (bilhoes de reais): ");
    scanf("%f", &pib2);

    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pontos_turisticos2);

    // Cálculos para a Carta 2
    densidade_pop2 = (float)populacao2 / area2;
    pib_per_capita2 = (pib2 * 1000000000.0f) / populacao2; // PIB em reais, converte pib2 para float
    super_poder2 = populacao2 + area2 + (pib2 * 1000000000.0f) + pontos_turisticos2 + pib_per_capita2 + (1.0f / densidade_pop2);

    // Exibição dos resultados das comparações
    printf("\nComparacao de Cartas:\n");
    printf("Populacao: Carta %d venceu (%d)\n", (populacao1 > populacao2) ? 1 : 2, (populacao1 > populacao2) ? 1 : 0);
    printf("Area: Carta %d venceu (%d)\n", (area1 > area2) ? 1 : 2, (area1 > area2) ? 1 : 0);
    printf("PIB: Carta %d venceu (%d)\n", (pib1 > pib2) ? 1 : 2, (pib1 > pib2) ? 1 : 0);
    printf("Pontos Turisticos: Carta %d venceu (%d)\n", (pontos_turisticos1 > pontos_turisticos2) ? 1 : 2, (pontos_turisticos1 > pontos_turisticos2) ? 1 : 0);
    printf("Densidade Populacional: Carta %d venceu (%d)\n", (densidade_pop1 < densidade_pop2) ? 1 : 2, (densidade_pop1 < densidade_pop2) ? 1 : 0);
    printf("PIB per Capita: Carta %d venceu (%d)\n", (pib_per_capita1 > pib_per_capita2) ? 1 : 2, (pib_per_capita1 > pib_per_capita2) ? 1 : 0);
    printf("Super Poder: Carta %d venceu (%d)\n", (super_poder1 > super_poder2) ? 1 : 2, (super_poder1 > super_poder2) ? 1 : 0);

    return 0;
}
