#include <stdio.h>

int main() {
    
    char estado, estado2; // apenas uma letra
    char codigo[10], codigo2[10];
    char nome_da_cidade[20], nome_da_cidade2[20];
    unsigned long populacao, populacao2;
    float area, area2;
    double PIB, PIB2;
    unsigned int numeros_de_pontos_turisticos, numeros_de_pontos_turisticos2;
    double densidade_populacional1, densidade_populacional2;
    double PIB_per_capita1, PIB_per_capita2;
    float super_poder1, super_poder2;

    printf("Olá, \nVamos coletar informaçoes para a criação de duas cartas. \nPodemos começar com a primeira Carta. \n\n");

    printf("Informe uma letra para reprensentar seu estado: \n");
    scanf(" %c", &estado);

    printf("Defina um código (ex: A01): \n");
    scanf("%3s", codigo);

    printf("Informe o Nome da Cidade: \n");
    scanf(" %[^\n]", nome_da_cidade);

    printf("Informe o número de habitantes da cidade: \n");
    scanf("%lu", &populacao);

    printf("Informe a área desta cidade (em Km²): \n");
    scanf("%f", &area);

    printf("Informe o PIB desta cidade (em milhões): \n");
    scanf("%lf", &PIB);

    printf("Informe a quantidade de pontos Turísticos: \n");
    scanf("%u", &numeros_de_pontos_turisticos);

    densidade_populacional1 = populacao / area;
    PIB_per_capita1 = (PIB * 1000000) / populacao;

    // Super Poder 1
    super_poder1 = (float)(populacao + area + PIB + PIB_per_capita1 + numeros_de_pontos_turisticos + (1.0 / densidade_populacional1));

    // Segunda carta
    printf("\nAgora as informações para a segunda Carta. \n\n");

    printf("Informe uma letra para reprensentar seu estado: \n");
    scanf(" %c", &estado2);

    printf("Defina um código (ex: B03): \n");
    scanf("%3s", codigo2);

    printf("Informe o Nome da Cidade: \n");
    scanf(" %[^\n]", nome_da_cidade2);

    printf("Informe o número de habitantes da cidade: \n");
    scanf("%lu", &populacao2);

    printf("Informe a área desta cidade (em Km²): \n");
    scanf("%f", &area2);

    printf("Informe o PIB desta cidade (em milhões): \n");
    scanf("%lf", &PIB2);

    printf("Informe a quantidade de pontos Turísticos: \n");
    scanf("%u", &numeros_de_pontos_turisticos2);

    densidade_populacional2 = populacao2 / area2;
    PIB_per_capita2 = (PIB2 * 1000000) / populacao2;

    // Super Poder 2
    super_poder2 = (float)(populacao2 + area2 + PIB2 + PIB_per_capita2 + numeros_de_pontos_turisticos2 + (1.0 / densidade_populacional2));

    // Exibição
    printf("\n\n--- CARTA 01 ---\n");
    printf("Estado: %c\n", estado);
    printf("Código: %s\n", codigo);
    printf("Nome da Cidade: %s\n", nome_da_cidade);
    printf("População: %lu\n", populacao);
    printf("Área: %.2f Km²\n", area);
    printf("PIB: %.2lf de reais\n", PIB);
    printf("Número de Pontos Turísticos: %u\n", numeros_de_pontos_turisticos);
    printf("Densidade populacional: %.2lf hab/km²\n", densidade_populacional1);
    printf("PIB per capita: %.2lf R$/hab\n", PIB_per_capita1);
    printf("Super Poder: %.2f\n", super_poder1);

    printf("\n\n--- CARTA 02 ---\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nome_da_cidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f Km²\n", area2);
    printf("PIB: %.2lf de reais\n", PIB2);
    printf("Número de Pontos Turísticos: %u\n", numeros_de_pontos_turisticos2);
    printf("Densidade populacional: %.2lf hab/km²\n", densidade_populacional2);
    printf("PIB per capita: %.2lf R$/hab\n", PIB_per_capita2);
    printf("Super Poder: %.2f\n", super_poder2);

    // Comparações
    int resultado_populacao = populacao > populacao2;
    int resultado_area = area > area2;
    int resultado_PIB = PIB > PIB2;
    int resultado_turisticos = numeros_de_pontos_turisticos > numeros_de_pontos_turisticos2;
    int resultado_densidade = densidade_populacional1 < densidade_populacional2; // menor vence
    int resultado_PIB_per_capita = PIB_per_capita1 > PIB_per_capita2;
    int resultado_super_poder = super_poder1 > super_poder2;

    // Resultados
    printf("\n\nComparação de Cartas:\n\n");
    printf("População: Carta 1 venceu (%d)\n", resultado_populacao);
    printf("Área: Carta 1 venceu (%d)\n", resultado_area);
    printf("PIB: Carta 1 venceu (%d)\n", resultado_PIB);
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", resultado_turisticos);
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", resultado_densidade);
    printf("PIB per Capita: Carta 1 venceu (%d)\n", resultado_PIB_per_capita);
    printf("Super Poder: Carta 1 venceu (%d)\n", resultado_super_poder);

    return 0;
}
