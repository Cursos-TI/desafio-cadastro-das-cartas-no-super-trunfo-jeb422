#include <stdio.h>

// Funções de pontuação simples (1 a 5)
int pontos_populacao(unsigned long p) {
    if (p < 100000) return 1;
    else if (p < 300000) return 2;
    else if (p < 700000) return 3;
    else if (p < 1500000) return 4;
    else return 5;
}

int pontos_area(float a) {
    if (a < 100) return 1;
    else if (a < 300) return 2;
    else if (a < 1000) return 3;
    else if (a < 3000) return 4;
    else return 5;
}

int pontos_PIB(double pib) {
    if (pib < 500) return 1;
    else if (pib < 1000) return 2;
    else if (pib < 2000) return 3;
    else if (pib < 5000) return 4;
    else return 5;
}

int pontos_turisticos(unsigned int pt) {
    if (pt == 0) return 1;
    else if (pt <= 2) return 2;
    else if (pt <= 5) return 3;
    else if (pt <= 10) return 4;
    else return 5;
}

int pontos_densidade(double d) {
    if (d < 100) return 5;
    else if (d < 300) return 4;
    else if (d < 1000) return 3;
    else if (d < 3000) return 2;
    else return 1;
}

int pontos_PIB_per_capita(double ppc) {
    if (ppc < 10000) return 1;
    else if (ppc < 20000) return 2;
    else if (ppc < 40000) return 3;
    else if (ppc < 70000) return 4;
    else return 5;
}

void mostrar_atributos(const char* nome, int atk, int def, int eva) {
    printf("\n--- Atributos de Combate da Carta: %s ---\n", nome);
    printf("ATK: %d\n", atk);
    printf("DEF: %d\n", def);
    printf("EVA: %d\n", eva);
}

int main() {
    // Dados dos jogadores
    char estado, estado2;
    char codigo[10], codigo2[10];
    char nome_da_cidade[30], nome_da_cidade2[30];
    unsigned long populacao, populacao2;
    float area, area2;
    double PIB, PIB2;
    unsigned int numeros_de_pontos_turisticos, numeros_de_pontos_turisticos2;
    double densidade_populacional1, densidade_populacional2;
    double PIB_per_capita1, PIB_per_capita2;

    // Entrada dos dados
    printf("Informe os dados da Carta 1:\n");
    printf("Estado: ");
    scanf(" %c", &estado);
    printf("Código: ");
    scanf("%s", codigo);
    printf("Nome da cidade: ");
    scanf(" %[^\n]", nome_da_cidade);
    printf("População: ");
    scanf("%lu", &populacao);
    printf("Área (km²): ");
    scanf("%f", &area);
    printf("PIB (milhões): ");
    scanf("%lf", &PIB);
    printf("Nº de pontos turísticos: ");
    scanf("%u", &numeros_de_pontos_turisticos);

    densidade_populacional1 = populacao / area;
    PIB_per_capita1 = (PIB * 1000000) / populacao;

    printf("\nInforme os dados da Carta 2:\n");
    printf("Estado: ");
    scanf(" %c", &estado2);
    printf("Código: ");
    scanf("%s", codigo2);
    printf("Nome da cidade: ");
    scanf(" %[^\n]", nome_da_cidade2);
    printf("População: ");
    scanf("%lu", &populacao2);
    printf("Área (km²): ");
    scanf("%f", &area2);
    printf("PIB (milhões): ");
    scanf("%lf", &PIB2);
    printf("Nº de pontos turísticos: ");
    scanf("%u", &numeros_de_pontos_turisticos2);

    densidade_populacional2 = populacao2 / area2;
    PIB_per_capita2 = (PIB2 * 1000000) / populacao2;

    // Cálculo dos atributos
    int atk1 = pontos_populacao(populacao) + pontos_PIB(PIB) + pontos_PIB_per_capita(PIB_per_capita1);
    int def1 = pontos_area(area) + pontos_densidade(densidade_populacional1);
    int eva1 = pontos_turisticos(numeros_de_pontos_turisticos);

    int atk2 = pontos_populacao(populacao2) + pontos_PIB(PIB2) + pontos_PIB_per_capita(PIB_per_capita2);
    int def2 = pontos_area(area2) + pontos_densidade(densidade_populacional2);
    int eva2 = pontos_turisticos(numeros_de_pontos_turisticos2);

    // Mostrar os atributos
    mostrar_atributos(nome_da_cidade, atk1, def1, eva1);
    mostrar_atributos(nome_da_cidade2, atk2, def2, eva2);

    // Jogadores escolhem os atributos para batalha
    int escolha1, escolha2;
    printf("\nJogador 1, escolha seu atributo (1 = ATK, 2 = DEF, 3 = EVA): ");
    scanf("%d", &escolha1);
    printf("Jogador 2, escolha seu atributo (1 = ATK, 2 = DEF, 3 = EVA): ");
    scanf("%d", &escolha2);

    int valor1, valor2;

    switch (escolha1) {
        case 1: valor1 = atk1; break;
        case 2: valor1 = def1; break;
        case 3: valor1 = eva1; break;
        default: valor1 = 0;
    }

    switch (escolha2) {
        case 1: valor2 = atk2; break;
        case 2: valor2 = def2; break;
        case 3: valor2 = eva2; break;
        default: valor2 = 0;
    }

    printf("\nResultado do confronto:\n");
    printf("%s (%d) vs %s (%d)\n", nome_da_cidade, valor1, nome_da_cidade2, valor2);

    if (valor1 > valor2)
        printf("Vencedor: %s\n", nome_da_cidade);
    else if (valor2 > valor1)
        printf("Vencedor: %s\n", nome_da_cidade2);
    else
        printf("Empate!\n");

    return 0;
}
