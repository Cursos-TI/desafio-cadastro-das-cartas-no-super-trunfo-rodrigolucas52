#include <stdio.h>

int main()
{
   
    char estado1, estado2; // Variáveis para armazenas os dados das cartas (A-H)
    char codigo1[4], codigo2[4];  // Armazena o código da cidade (ex: A01, B02)
    char cidade1[20], cidade2[20]; // Armazena o nome da cidade correspondetes
    unsigned long int populacao1, populacao2; // Armazena a população das cidades correspondentes
    float areaKm1, areaKm2; // Armazena a área em Km² das cidades correspondentes
    float pib1, pib2; // Armazena o PIB das cidades correspondentes
    int pontosTuristicos1, pontosTuristicos2; // Armazena a quantidade de pontos turísticos de cada cidade
    float densidadePopulacional1, densidadePopulacional2; // Variáveis para armazenar a Densidade populacional em hab/km²
    float perCapita1, perCapita2; // Variáveis para armazenar o PIB per Capita em reais
    float somaPoder1, somaPoder2; // Variaveis para calcular os "poderes" das carta 1 e 2
  
    // informaçoes da Carta 1
    printf("Carta 1\n"); // Título da carta do qual os dados serão soletados (Carta 1)
    printf("Digite a letra do estado ex: A até H \n"); // Solicita ao usuário que digite uma letra de A até H
    scanf("%c", &estado1); // Armazena a letra digitada ( A até H)

    printf("Digite o código da cidade ex: A01, B02: \n"); // Solicita ao usuário o código da cidade (ex: A01, B02)
    scanf("%s", codigo1); // Armazena a letra o código da cidade digitado

    printf("Digite o nome da cidade: \n"); // Solicita ao usuário o nome da cidade a escolha
    scanf("%s", cidade1); // Armazena o nome da cidade digitado pelo usuário

    printf("Digite a população: \n"); // Solicita ao usuário a população da cidade escolhida
    scanf("%d", &populacao1); // Armazena o valor da população digitado

    printf("Digite a área da cidade: \n"); // Solicita ao usuário a área da cidade 
    scanf("%f", &areaKm1); // Armazena o valor da área digitada

    printf("Digite o PIB: \n"); // Solitica ao usuário o PIB da cidade
    scanf("%f", &pib1); // Armazena o valor do PIB digitado

    printf("Digite a quantidade de pontos turísticos: \n"); // Solicita ao usuário a quantidade de pontos turísticos da cidade
    scanf("%d", &pontosTuristicos1); // Armazena a quantidade de pontos turísticos que foi digitada pelo usuário

    // Informaçoes da Carta 2
    printf("Carta 2\n"); // Título da carta do qual os dados serão soletados (Carta 2)
    printf("Digite uma letra do estado ex: de A até H:\n"); // Solicita ao usuário que digite uma letra de A até H
    scanf("%c", &estado2); // Armazena a letra digitada ( A até H)

    printf("Digite o código da cidade ex: A01, B02:\n");
    scanf("%s", codigo2); // Armazena a letra o código da cidade digitado

    printf("Digite o nome da cidade:\n");
    scanf("%s", cidade2);// Armazena o nome da cidade digitado pelo usuário

    printf("Digite a população:\n"); // Solicita ao usuário a população da cidade escolhida
    scanf("%d", &populacao2); // Armazena o valor da população digitado

    printf("Digite a área da cidade:\n"); // Solicita ao usuário a área da cidade
    scanf("%f", &areaKm2); // Armazena o valor da área digitada

    printf("Digite o PIB:\n"); // Solicita ao usuário o PIB da cidade
    scanf("%f", &pib2);// Armazena o valor do PIB digitado

    printf("Digite a quantidade de pontos turísticos:\n");// Solicita ao usuário a quantidade de pontos turísticos da cidade
    scanf("%d", &pontosTuristicos2);// Armazena a quantidade de pontos turísticos que foi digitada pelo usuário

    // Cálculos
    densidadePopulacional1 = populacao1 / areaKm1; 
    perCapita1 = (pib1 * 1000000000) / (float)populacao1; 


    densidadePopulacional2 = populacao2 / areaKm2;
    perCapita2 = (pib2 * 1000000000) / (float)populacao2;

    somaPoder1 = ((float)populacao1 + areaKm1 + pib1 + pontosTuristicos1 + perCapita1) + (1 / densidadePopulacional1);
    somaPoder2 = ((float)populacao2 + areaKm2 + pib2 + pontosTuristicos2 + perCapita2) + (1 / densidadePopulacional2);

    // Exibir comparações
    printf("Comparação de Cartas:\n");

    // População (maior vence)
    printf("População: Carta %d venceu (%d)\n",
           (populacao1 > populacao2) * 1 + (populacao2 >= populacao1) * 2, 
           populacao1 > populacao2);

    // Área (maior vence)
    printf("Área: Carta %d venceu (%d)\n",
           (areaKm1 > areaKm2) * 1 + (areaKm2 >= areaKm1) * 2,
           areaKm1 > areaKm2);

    // PIB (maior vence)
    printf("PIB: Carta %d venceu (%d)\n",
           (pib1 > pib2) * 1 + (pib2 >= pib1) * 2,
           pib1 > pib2);

    // Pontos Turísticos (maior vence) 
    printf("Pontos Turísticos: Carta %d venceu (%d)\n",
           (pontosTuristicos1 > pontosTuristicos2) * 1 + (pontosTuristicos2 >= pontosTuristicos1) * 2,
           pontosTuristicos1 > pontosTuristicos2);

    // Densidade Populacional (menor vence)
    printf("Densidade Populacional: Carta %d venceu (%d)\n",
           (densidadePopulacional1 < densidadePopulacional2) * 1 + (densidadePopulacional1 > densidadePopulacional2) * 2,
           densidadePopulacional1 < densidadePopulacional2);

    // PIB per Capita (maior vence)
    printf("PIB per Capita: Carta %d venceu (%d)\n",
           (perCapita1 > perCapita2) * 1 + (perCapita2 >= perCapita1) * 2,
           perCapita1 > perCapita2);

    // Super Poder (maior vence)
    printf("Super Poder: Carta %d venceu (%d)\n",
           (somaPoder1 > somaPoder2) * 1 + (somaPoder2 >= somaPoder1) * 2,
           somaPoder1 > somaPoder2);

    return 0; 

        /*
    // ref curitiba - PR, 
    PIB 98.000.000,00
    POPULACAO 1774.000
    AREA em km 435.036
    pontos turisticos 30

    Maringá PR
    PIB 22.656.732,55
    POPULACAO 409.657
    AREA em km 487.93
    pontos turisticos 20
    DENSIDADE POPULACIONAL 841,16
    */

}
