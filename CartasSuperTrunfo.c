#include <stdio.h>

int main () {
    
    char estado, estado2; //só uma letra
    char codigo[10], codigo2[10];
    char nome_da_cidade[20], nome_da_cidade2[20];
    int populacao, populacao2;
    float area, area2;
    double PIB, PIB2;
    int numeros_de_pontos_turisticos, numeros_de_pontos_turisticos2;

    printf("Olá, \nPreciso de sua ajuda para coletar informaçoes para duas cartas. \nPodemos começar com a primeira Carta. \n\n");

    printf("Informe uma letra para reprensentar seu estado: \n");
    scanf(" %c", &estado);

    printf("Defina um codigo para a carta com a letra informada e um numero de 01 a 04: \n");
    scanf("%s", codigo);

    printf("Informe o Nome da Cidade: \n");
    scanf(" %[^\n]", nome_da_cidade); // %[^\n] para pegar nomes com espaços, só avança quando apertar enter

    printf("Informe o número de habitandes da cidade: \n");
    scanf("%i", &populacao);

    printf("Informe a área desta cidade: \n");
    scanf("%f", &area);

    printf("Informe o PIB desta cidade: \n");
    scanf("%lf", &PIB);

    printf("Informe a quantidade de pontos Turísticos: \n");
    scanf("%i", &numeros_de_pontos_turisticos);
// Infomações para nova carta.
    printf("\n \nAgora as informações para a segunda Carta. \n\n");

    printf("Informe uma letra para reprensentar seu estado: \n");
    scanf(" %c", &estado2);

    printf("Defina um codigo para a carta com a letra informada e um numero de 01 a 04: \n");
    scanf("%s", codigo2);

    printf("Informe o Nome da Cidade: \n");
    scanf(" %[^\n]", nome_da_cidade2);

    printf("Informe o número de habitandes da cidade: \n");
    scanf("%i", &populacao2);

    printf("Informe a área desta cidade: \n");
    scanf("%f", &area2);

    printf("Informe o PIB desta cidade: \n");
    scanf("%lf", &PIB2);

    printf("Informe a quantidade de pontos Turísticos: \n");
    scanf("%i", &numeros_de_pontos_turisticos2);

    printf("\n\n--- CARTA 01 ---\n");
    printf("Estado: %c \n", estado);
    printf("Código: %s \n", codigo);
    printf("Nome da Cidade: %s \n", nome_da_cidade);
    printf("População: %i \n", populacao);
    printf("Área: %.2f Km² \n", area);
    printf("PIB: %.2lf Milhões de reais \n", PIB);
    printf("Número de Pontos Turísticos: %i \n", numeros_de_pontos_turisticos);

    printf("\n\n--- CARTA 02 ---\n");
    printf("Estado: %c \n", estado2);
    printf("Código: %s \n", codigo2);
    printf("Nome da Cidade: %s \n", nome_da_cidade2);
    printf("População: %i \n", populacao2);
    printf("Área: %.2f Km² \n", area2);
    printf("PIB: %.2lf Milhões de reais \n", PIB2);
    printf("Número de Pontos Turísticos: %i \n", numeros_de_pontos_turisticos2);


    return 0;


}