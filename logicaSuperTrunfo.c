#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio
    char estado1, estado2;
    char codigoCarta1[4], codigoCarta2[4], cidade1[30], cidade2[30];
    unsigned long int populacao1, populacao2;
    int pontosturisticos1, pontosturisticos2;
    float area1, area2, pib1, pib2, densidade1, densidade2, pibpercapta1, pibpercapta2;
    
    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio

    // Exemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);
    // (Repita para cada propriedade)

    // Área para entrada de dados da cidade 1
    printf("\nVamos digitar os dados da Carta 1!\n\n");
    printf("Digite o nome da cidade: ");
    scanf("%s", cidade1);

    printf("Digite o estado (letras de A a H): ");
    scanf(" %c", &estado1);

    printf("Digite o código da carta (letra do estado + Número de 01 a 04): ");
    scanf(" %s", &codigoCarta1);

    printf("Digite a população: ");
    scanf(" %lu", &populacao1);

    printf("Digite a area em km\u00B2: ");
    scanf(" %f", &area1);

    printf("Digite o o PIB em bilhões de reais: ");
    scanf(" %f", &pib1);

    printf("Digite o número de pontos turísticos: ");
    scanf(" %d", &pontosturisticos1);

    //Fórmulas para os cálculos a serem realizados da cidade 1    
    densidade1 = (float)populacao1 / area1;
    pibpercapta1 = (pib1 * 1000000000) / (float)populacao1;    

    // Área para exibição dos dados da cidade 1
    printf("\n*** Carta 1: ***\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigoCarta1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km\u00B2\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosturisticos1);
    printf("Densidade Populacional: %.2f habitantes por km\u00B2\n", densidade1);
    printf("PIB per Capta: %.2f reais por pessoa\n", pibpercapta1);
   
    // Área para entrada de dados da cidade 2
  
    printf("\nVamos digitar os dados da Carta 2!\n\n");

    printf("Digite o nome da cidade: ");
    scanf("%s", cidade2);

    printf("Digite o estado (letras de A a H): ");
    scanf(" %c", &estado2);

    printf("Digite o código da carta (letra do estado + Número de 01 a 04): ");
    scanf(" %s", &codigoCarta2);

    printf("Digite a população: ");
    scanf(" %lu", &populacao2);

    printf("Digite a area em km\u00B2: ");
    scanf(" %f", &area2);

    printf("Digite o o PIB em bilhões de reais: ");
    scanf(" %f", &pib2);

    printf("Digite o número de pontos turísticos: ");
    scanf(" %d", &pontosturisticos2);

    //Fórmulas para os cálculos a serem realizados da cidade 2
    densidade2 = (float)populacao2 / area2;
    pibpercapta2 = (pib2 * 1000000000) / (float)populacao2;
 
    // Área para exibição dos dados da cidade 2

    printf("\n*** Carta 2: ***\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigoCarta2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km\u00B2\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosturisticos2);
    printf("Densidade Populacional: %.2f habitantes por km\u00B2\n", densidade2);
    printf("PIB per Capta: %.2f reais por pessoa\n", pibpercapta2);
 
    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);

  //Populacao
    printf("\n*** Comparação de Cartas (Atributo: População): ***\n");
    printf("\nCarta 1 - %s (%c): %lu\n", cidade1, estado1, populacao1);
    printf("Carta 2 - %s (%c): %lu\n", cidade2, estado2, populacao2);
    
        if (populacao1 > populacao2){
            printf("\nResultado: Carta 1 (%s) venceu!\n\n", cidade1);
        } else {
            printf("\nResultado: Carta 2 (%s) venceu!\n\n", cidade2);
        }

  //Area
    printf("\n*** Comparação de Cartas (Atributo: Área): ***\n");
    printf("\nCarta 1 - %s (%c): %.2f\n", cidade1, estado1, area1);
    printf("Carta 2 - %s (%c): %.2f\n", cidade2, estado2, area2);
    
        if (area1 > area2){
            printf("\nResultado: Carta 1 (%s) venceu!\n\n", cidade1);
        } else {
            printf("\nResultado: Carta 2 (%s) venceu!\n\n", cidade2);
        }

   //PIB
    printf("\n*** Comparação de Cartas (Atributo: PIB): ***\n");   
    printf("\nCarta 1 - %s (%c): %.2f\n", cidade1, estado1, pib1);
    printf("Carta 2 - %s (%c): %.2f\n", cidade2, estado2, pib2);

        if (pib1 > pib2){
            printf("\nResultado: Carta 1 (%s) venceu!\n\n", cidade1);
        } else {
            printf("\nResultado: Carta 2 (%s) venceu!\n\n", cidade2);
        }

   //Pontos Turísticos
    printf("\n*** Comparação de Cartas (Atributo: Pontos Turísticos): ***\n");
    printf("\nCarta 1 - %s (%c): %d\n", cidade1, estado1, pontosturisticos1);
    printf("Carta 2 - %s (%c): %d\n", cidade2, estado2, pontosturisticos2);
    
        if (pontosturisticos1 > pontosturisticos2){
            printf("\nResultado: Carta 1 (%s) venceu!\n\n", cidade1);
        } else {
            printf("\nResultado: Carta 2 (%s) venceu!\n\n", cidade2);
        }
    
   //Densidade Populacional
    printf("\n*** Comparação de Cartas (Atributo: Densidade Populacional): ***\n");        
    printf("\nCarta 1 - %s (%c): %.2f\n", cidade1, estado1, densidade1);
    printf("Carta 2 - %s (%c): %.2f\n", cidade2, estado2, densidade2);
    
    if (densidade1 < densidade2){
            printf("\nResultado: Carta 1 (%s) venceu!\n\n", cidade1);
        } else {
            printf("\nResultado: Carta 2 (%s) venceu!\n\n", cidade2);
        }

   //PIB per Capta 
    printf("\n*** Comparação de Cartas (Atributo: PIB Per Capta): ***\n");                
    printf("\nCarta 1 - %s (%c): %.2f\n", cidade1, estado1, pibpercapta1);
    printf("Carta 2 - %s (%c): %.2f\n", cidade2, estado2, pibpercapta2);
    
        if (pibpercapta1 > pibpercapta2){
            printf("\nResultado: Carta 1 (%s) venceu!\n\n", cidade1);
        } else {
            printf("\nResultado: Carta 2 (%s) venceu!\n\n", cidade2);
        }

    return 0;
}
