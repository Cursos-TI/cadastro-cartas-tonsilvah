#include <stdio.h> 

int main() {

    // Variáveis para a Carta 1
    char estado1;
    char codigoCarta1[5];
    char nomeCidade1[50];
    unsigned long int populacao1; // Modificador de tipo aplicado
    float area1;
    float pib1;
    int pontosTuristicos1;
    float densidadePopulacional1;
    float pibPerCapita1;
    float superPoder1; // Novo atributo

    // Variáveis para a Carta 2
    char estado2;
    char codigoCarta2[5];
    char nomeCidade2[50];
    unsigned long int populacao2; // Modificador de tipo aplicado
    float area2;
    float pib2;
    int pontosTuristicos2;
    float densidadePopulacional2;
    float pibPerCapita2;
    float superPoder2; // Novo atributo

    //ENTRADA DE DADOS DA CARTA 1
    printf("--- Cadastro da Carta 1 ---\n");
    printf("Digite o Estado (A-H): ");
    scanf(" %c", &estado1);
    printf("Digite o Codigo da Carta (ex: A01): ");
    scanf("%s", codigoCarta1);
    printf("Digite o Nome da Cidade (use '_' para espacos): ");
    scanf("%s", nomeCidade1);
    printf("Digite a Populacao: ");
    // Usamos "%lu" para ler um 'unsigned long int'
    scanf("%lu", &populacao1);
    printf("Digite a Area (em km2): ");
    scanf("%f", &area1);
    printf("Digite o PIB (em bilhoes de reais): ");
    scanf("%f", &pib1);
    printf("Digite o Numero de Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos1);
    printf("\n");

    //ENTRADA DE DADOS DA CARTA 2
    printf("--- Cadastro da Carta 2 ---\n");
    printf("Digite o Estado (A-H): ");
    scanf(" %c", &estado2);
    printf("Digite o Codigo da Carta (ex: B02): ");
    scanf("%s", codigoCarta2);
    printf("Digite o Nome da Cidade (use '_' para espacos): ");
    scanf("%s", nomeCidade2);
    printf("Digite a Populacao: ");
    scanf("%lu", &populacao2);
    printf("Digite a Area (em km2): ");
    scanf("%f", &area2);
    printf("Digite o PIB (em bilhoes de reais): ");
    scanf("%f", &pib2);
    printf("Digite o Numero de Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos2);
    printf("\n");

    // Densidade e PIB per Capita
    densidadePopulacional1 = (float)populacao1 / area1;
    pibPerCapita1 = (pib1 * 1000000000) / (float)populacao1;
    densidadePopulacional2 = (float)populacao2 / area2;
    pibPerCapita2 = (pib2 * 1000000000) / (float)populacao2;

    // Cálculo do Super Poder para a Carta 1
    superPoder1 = (float)populacao1 + area1 + (pib1 * 1000000000) +
                  (float)pontosTuristicos1 + pibPerCapita1 + (1.0 / densidadePopulacional1);

    // Cálculo do Super Poder para a Carta 2
    superPoder2 = (float)populacao2 + area2 + (pib2 * 1000000000) +
                  (float)pontosTuristicos2 + pibPerCapita2 + (1.0 / densidadePopulacional2);


    printf("COMPARACAO DE CARTAS\n");

    // Comparação de População
    printf("Populacao: ");
    if (populacao1 > populacao2) {
        printf("Carta 1 venceu (1)\n");
    } else {
        printf("Carta 2 venceu (0)\n");
    }

    // Comparação de Área
    printf("Area: ");
    if (area1 > area2) {
        printf("Carta 1 venceu (1)\n");
    } else {
        printf("Carta 2 venceu (0)\n");
    }

    // Comparação de PIB
    printf("PIB: ");
    if (pib1 > pib2) {
        printf("Carta 1 venceu (1)\n");
    } else {
        printf("Carta 2 venceu (0)\n");
    }

    // Comparação de Pontos Turísticos
    printf("Pontos Turisticos: ");
    if (pontosTuristicos1 > pontosTuristicos2) {
        printf("Carta 1 venceu (1)\n");
    } else {
        printf("Carta 2 venceu (0)\n");
    }
    
    // Comparação de Densidade Populacional (menor vence)
    printf("Densidade Populacional: ");
    if (densidadePopulacional1 < densidadePopulacional2) {
        printf("Carta 1 venceu (1)\n");
    } else {
        printf("Carta 2 venceu (0)\n");
    }
    
    // Comparação de PIB per Capita
    printf("PIB per Capita: ");
    if (pibPerCapita1 > pibPerCapita2) {
        printf("Carta 1 venceu (1)\n");
    } else {
        printf("Carta 2 venceu (0)\n");
    }

    // Comparação de Super Poder
    printf("Super Poder: ");
    if (superPoder1 > superPoder2) {
        printf("Carta 1 venceu (1)\n");
    } else {
        printf("Carta 2 venceu (0)\n");
    }

    return 0;
}