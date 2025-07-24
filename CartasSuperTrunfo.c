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
    int escolha;

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

    /*
    // Comparações
    int resultado_populacao = populacao > populacao2;
    int resultado_area = area > area2;
    int resultado_PIB = PIB > PIB2;
    int resultado_turisticos = numeros_de_pontos_turisticos > numeros_de_pontos_turisticos2;
    int resultado_densidade = densidade_populacional1 < densidade_populacional2; // menor vence
    int resultado_PIB_per_capita = PIB_per_capita1 > PIB_per_capita2;
    int resultado_super_poder = super_poder1 > super_poder2;
    */

    printf("\n\n--- Comparação das Cartas ---\n");

    int vitorias_carta1 = 0, vitorias_carta2 = 0, empates =0;
    
    // População
    if (populacao == populacao2) {
        printf("População: Empate!\n");
        empates++;
    } else if (populacao > populacao2) {
        printf("População: Carta 1 venceu!\n");
        vitorias_carta1++;
    } else {
        printf("População: Carta 2 venceu!\n");
        vitorias_carta2++;
    }

    // Área
    if (area == area2) {
        printf("Área: Empate!\n");
        empates++;
    } else if (area > area2) {
        printf("Área: Carta 1 venceu!\n");
        vitorias_carta1++;
    } else {
        printf("Área: Carta 2 venceu!\n");
        vitorias_carta2++;
    }

    // PIB
    if (PIB == PIB2) {
        printf("PIB: Empate!\n");
        empates++;
    } else if (PIB > PIB2) {
        printf("PIB: Carta 1 venceu!\n");
        vitorias_carta1++;
    } else {
        printf("PIB: Carta 2 venceu!\n");
        vitorias_carta2++;
    }

    // Pontos Turísticos
    if (numeros_de_pontos_turisticos == numeros_de_pontos_turisticos2) {
        printf("Pontos Turísticos: Empate!\n");
        empates++;
    } else if (numeros_de_pontos_turisticos > numeros_de_pontos_turisticos2) {
        printf("Pontos Turísticos: Carta 1 venceu!\n");
        vitorias_carta1++;
    } else {
        printf("Pontos Turísticos: Carta 2 venceu!\n");
        vitorias_carta2++;
    }

    // Densidade Populacional (menor vence!)
    if (densidade_populacional1 == densidade_populacional2) {
        printf("Densidade Populacional: Empate!\n");
        empates++;
    } else if (densidade_populacional1 < densidade_populacional2) {
        printf("Densidade Populacional: Carta 1 venceu!\n");
        vitorias_carta1++;
    } else {
        printf("Densidade Populacional: Carta 2 venceu!\n");
        vitorias_carta2++;
    }

    // PIB per Capita
    if (PIB_per_capita1 == PIB_per_capita2) {
        printf("PIB per Capita: Empate!\n");
        empates++;
    } else if (PIB_per_capita1 > PIB_per_capita2) {
        printf("PIB per Capita: Carta 1 venceu!\n");
        vitorias_carta1++;
    } else {
        printf("PIB per Capita: Carta 2 venceu!\n");
        vitorias_carta2++;
    }

    // Super Poder
    if (super_poder1 == super_poder2) {
        printf("Super Poder: Empate!\n");
        empates++;
    } else if (super_poder1 > super_poder2) {
        printf("Super Poder: Carta 1 venceu!\n");
        vitorias_carta1++;
    } else {
        printf("Super Poder: Carta 2 venceu!\n");
        vitorias_carta2++;
    }

    // Resultado final
    printf("\n--- Resultado Final ---\n");
    printf("Carta 1: %d Vitórias\n", vitorias_carta1);
    printf("Carta 2: %d Vitórias\n", vitorias_carta2);
    printf("Empates: %d\n", empates);

    if (vitorias_carta1 > vitorias_carta2) {
        printf("A Carta 1 é a campeã!\n");
    } else if (vitorias_carta2 > vitorias_carta1) {
        printf("A Carta 2 é a campeã!\n");
    } else {
        printf("Empate geral!\n");
    }
       

    printf("\n\n--- MENU INTERATIVO ---\n");
    printf("Escolha seu atributo para comparar as cartas:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Populacional (menor valor vence)\n");
    printf("6 - PIB per Capita\n");
    printf("7 - Super Poder\n");
    printf("Digite sua opção: ");   
    scanf("%d", &escolha);

    printf("\n--- Comparação Escolhida ---\n");

    switch (escolha) {
    case 1:
        printf("População:\n");
        printf("%s: %lu\n", nome_da_cidade, populacao);
        printf("%s: %lu\n", nome_da_cidade2, populacao2);
        if (populacao > populacao2)
            printf("Vencedor é: %s\n", nome_da_cidade);
        else if (populacao2 > populacao)
            printf("Vencedor é: %s\n", nome_da_cidade2);
        else
            printf("Empate!\n");
        break;

    case 2:
        printf("Área:\n");
        printf("%s: %.2f km²\n", nome_da_cidade, area);
        printf("%s: %.2f km²\n", nome_da_cidade2, area2);
        if (area > area2)
            printf("Vencedor é: %s\n", nome_da_cidade);
        else if (area2 > area)
            printf("Vencedor é: %s\n", nome_da_cidade2);
        else
            printf("Empate!\n");
        break;

    case 3:
        printf("PIB:\n");
        printf("%s: %.2lf milhões\n", nome_da_cidade, PIB);
        printf("%s: %.2lf milhões\n", nome_da_cidade2, PIB2);
        if (PIB > PIB2)
            printf("Vencedor é: %s\n", nome_da_cidade);
        else if (PIB2 > PIB)
            printf("Vencedor é: %s\n", nome_da_cidade2);
        else
            printf("Empate!\n");
        break;

    case 4:
        printf("Pontos Turísticos:\n");
        printf("%s: %u\n", nome_da_cidade, numeros_de_pontos_turisticos);
        printf("%s: %u\n", nome_da_cidade2, numeros_de_pontos_turisticos2);
        if (numeros_de_pontos_turisticos > numeros_de_pontos_turisticos2)
            printf("Vencedor é: %s\n", nome_da_cidade);
        else if (numeros_de_pontos_turisticos2 > numeros_de_pontos_turisticos)
            printf("Vencedor é: %s\n", nome_da_cidade2);
        else
            printf("Empate!\n");
        break;

    case 5:
        printf("Densidade Populacional (menor valor vence):\n");
        printf("%s: %.2lf hab/km²\n", nome_da_cidade, densidade_populacional1);
        printf("%s: %.2lf hab/km²\n", nome_da_cidade2, densidade_populacional2);
        if (densidade_populacional1 < densidade_populacional2)
            printf("Vencedor é: %s\n", nome_da_cidade);
        else if (densidade_populacional2 < densidade_populacional1)
            printf("Vencedor é: %s\n", nome_da_cidade2);
        else
            printf("Empate!\n");
        break;

    case 6:
        printf("PIB per Capita:\n");
        printf("%s: %.2lf R$/hab\n", nome_da_cidade, PIB_per_capita1);
        printf("%s: %.2lf R$/hab\n", nome_da_cidade2, PIB_per_capita2);
        if (PIB_per_capita1 > PIB_per_capita2)
            printf("Vencedor é: %s\n", nome_da_cidade);
        else if (PIB_per_capita2 > PIB_per_capita1)
            printf("Vencedor é: %s\n", nome_da_cidade2);
        else
            printf("Empate!\n");
        break;

    case 7:
        printf("Super Poder:\n");
        printf("%s: %.2f\n", nome_da_cidade, super_poder1);
        printf("%s: %.2f\n", nome_da_cidade2, super_poder2);
        if (super_poder1 > super_poder2)
            printf("Vencedor é: %s\n", nome_da_cidade);
        else if (super_poder2 > super_poder1)
            printf("Vencedor é: %s\n", nome_da_cidade2);
        else
            printf("Empate!\n");
        break;

    default:
        printf("Opção inválida!\n");
    }
/*
    // Resultados
    printf("\n\nComparação de Cartas:\n\n");
    printf("População: Carta 1 venceu (%d)\n", resultado_populacao);
    printf("Área: Carta 1 venceu (%d)\n", resultado_area);
    printf("PIB: Carta 1 venceu (%d)\n", resultado_PIB);
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", resultado_turisticos);
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", resultado_densidade);
    printf("PIB per Capita: Carta 1 venceu (%d)\n", resultado_PIB_per_capita);
    printf("Super Poder: Carta 1 venceu (%d)\n", resultado_super_poder);
*/
    return 0;
}