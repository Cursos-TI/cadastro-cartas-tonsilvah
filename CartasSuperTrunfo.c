#include <stdio.h>

int main() {

    // VARIAVEIS CARTA 1
    char estado1;
    char codigoCarta1[5];   // Array para armazenar strings como "A01" + caractere nulo
    char nomeCidade1[50];   // Array com espaço para nomes de cidades
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;

    // VARIAVEIS CARTA 2
    char estado2;
    char codigoCarta2[5];
    char nomeCidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;

    //ENTRADA DE DADOS DA CARTA 1
    printf("Cadastro da Carta 1\n");

    printf("Digite o Estado (uma letra de A a H): ");
    scanf(" %c", &estado1);

    printf("Digite o Codigo da Carta (ex: A01): ");
    scanf("%s", codigoCarta1); // Para strings, não usamos o '&'

    printf("Digite o Nome da Cidade (use '_' para espacos, ex: Rio_de_Janeiro): ");
    scanf("%s", nomeCidade1);

    printf("Digite a Populacao: ");
    scanf("%d", &populacao1);

    printf("Digite a Area (em km2): ");
    scanf("%f", &area1);

    printf("Digite o PIB (em bilhoes de reais): ");
    scanf("%f", &pib1);

    printf("Digite o Numero de Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos1);

    printf("\nCarta 1 cadastrada com sucesso!\n\n");

    //ENTRADA DE DADOS DA CARTA 2
    printf("Cadastro da Carta 2 \n");

    printf("Digite o Estado (uma letra de A a H): ");
    scanf(" %c", &estado2);

    printf("Digite o Codigo da Carta (ex: B02): ");
    scanf("%s", codigoCarta2);

    printf("Digite o Nome da Cidade (use '_' para espacos): ");
    scanf("%s", nomeCidade2);

    printf("Digite a Populacao: ");
    scanf("%d", &populacao2);

    printf("Digite a Area (em km2): ");
    scanf("%f", &area2);

    printf("Digite o PIB (em bilhoes de reais): ");
    scanf("%f", &pib2);

    printf("Digite o Numero de Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos2);

    printf("\nCarta 2 cadastrada com sucesso!\n\n");

    //EXIBIÇÃO DOS DADOS CADASTRADOS
    printf("CARTAS CADASTRADAS\n");

    // EXIBE CARTA 1
    printf("--- Carta 1 ---\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigoCarta1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km^2\n", area1); // "%.2f" formata para exibir 2 casas decimais
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos1);

    printf("\n");

    //EXIBE CARTA 2
    printf("--- Carta 2 ---\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigoCarta2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km^2\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos2);

    return 0;
}