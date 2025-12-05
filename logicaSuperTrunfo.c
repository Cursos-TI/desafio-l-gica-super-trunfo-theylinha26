#include <stdio.h>

/* Objetivos Nível Aventureiro: 
implementar um menu interativo usando switch para que o jogador possa escolher o atributo de comparação entre duas cartas de países. Além disso,
usar estruturas de decisão aninhadas (if-else dentro de if-else) para criar uma lógica de comparação mais complexa, considerando regras 
específicas para cada atributo. */

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio
    char estado1 = 'A', estado2 = 'B';
    char codigoCarta1[4] = "A01", codigoCarta2[4] = "B02", cidade1[30] = "SaoPaulo", cidade2[30] = "RioDeJaneiro";
    unsigned long int populacao1 = 12325000, populacao2 = 6748000;
    int opcaojogo, opcaoatributo, opcaojogar, opcaojogarnovamente, pontosturisticos1 = 50, pontosturisticos2 = 30;
    float area1 = 1521.11, area2 = 1200.25, pib1 = 699.28, pib2 = 300.50, densidade1 = 8102.64, densidade2 = 5622.16, pibpercapta1 = 56736.71, pibpercapta2 = 44531.71;

  // Área para a criação do Menu Interativo do Jogo
    printf("*********************************************\n");
    printf("*        SUPER TRUNFO DAS CIDADES           *\n");
    printf("*********************************************\n");
    printf("* Escolha o que deseja fazer:               *\n");
    printf("* 1 - Cadastrar cartas                      *\n");
    printf("* 2 - Jogar Super Trunfo                    *\n");
    printf("* 3 - Sair                                  *\n");
    printf("*********************************************\n");  

  // Área para a escolha da opção do Menu Interativo
    printf("Digite a opção desejada: ");
    scanf(" %d", &opcaojogo);

    switch (opcaojogo) {
        case 1:
            printf("\nVocê escolheu cadastrar cartas!\n");
    
    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio

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
    printf("Densidade Demográfica: %.2f habitantes por km\u00B2\n", densidade1);
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
    printf("Densidade Demográfica: %.2f habitantes por km\u00B2\n", densidade2);
    printf("PIB per Capta: %.2f reais por pessoa\n", pibpercapta2);
 
    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

            printf("Cadastro das cartas concluído com sucesso!\n\n");
            printf("Deseja iniciar o jogo? (1 - Sim / 2 - Não):");
            scanf(" %d", &opcaojogar);
            switch(opcaojogar) {
                case 1:
                    //Iniciar o jogo
                    printf("\nIniciando o jogo...\n\n");
                    break;
                case 2:
                    printf("\nVocê escolheu não jogar. Até mais!\n");
                    return 0;
                    break;
                default:
                    printf("\nOpção inválida! Tente novamente.\n");
                    break;
            }
            break;
 
        case 2: 
            printf("\nVocê escolheu jogar!\n\n");

            // Área para a criação do Menu Interativo
            printf("*********************************************\n");
            printf("*        SUPER TRUNFO DAS CIDADES           *\n");
            printf("*********************************************\n");
            printf("* Escolha o atributo para comparar as cartas*\n");
            printf("* 1 - População                             *\n");
            printf("* 2 - Área                                  *\n");
            printf("* 3 - PIB                                   *\n");
            printf("* 4 - Pontos Turísticos                     *\n");
            printf("* 5 - Densidade Demográfica                 *\n");
            printf("* 6 - PIB per Capta                         *\n");
            printf("* 7 - Voltar ao menu anterior               *\n");
            printf("*********************************************\n");  

            printf("Digite a opção desejada: ");
            scanf(" %d", &opcaoatributo);

            switch (opcaoatributo) {
                case 1:
                    //População
                    printf("\n*** Comparação de Cartas (Atributo: População): ***\n");
        
                    if (populacao1 > populacao2){
                        printf("\nResultado: %s (%lu) tem população maior que %s (%lu)! %s venceu!!\n\n", cidade1, populacao1, cidade2, populacao2, cidade1);
                    } else if (populacao1 < populacao2){
                        printf("\nResultado: %s (%lu) tem população maior que %s *%lu)! %s venceu!!\n\n", cidade2, populacao2, cidade1, populacao1, cidade2);
                    } else {
                        printf("\nResultado: %s (%lu) e %s (%lu) tem populações iguais! Deu empate!\n\n", cidade1, populacao1, cidade2, populacao2);
                    }

                    printf("Deseja jogar novamente? (1 - Sim / 2 - Não): ");
                    scanf(" %d", &opcaojogarnovamente);
                    switch(opcaojogarnovamente) {
                        case 1:
                            //Reiniciar o jogo
                            printf("\nReiniciando o jogo...\n\n");
                            main();
                            break;
                        case 2:
                            printf("\nVocê escolheu sair. Até mais!\n");
                            return 0;
                            break;
                        default:
                            printf("\nOpção inválida! Tente novamente.\n");
                            break;
                    }
                    break;
                case 2:
                    //Área
                    printf("\n*** Comparação de Cartas (Atributo: Área): ***\n");
        
                    if (area1 > area2){
                        printf("\nResultado: %s (%.2f km\u00B2) tem área maior que %s (%.2f km\u00B2)! %s venceu!!\n\n", cidade1, area1, cidade2, area2, cidade1);
                    } else if (area1 < area2){
                        printf("\nResultado: %s (%.2f km\u00B2) tem área maior que %s (%.2f km\u00B2)! %s venceu!!\n\n", cidade2, area2, cidade1, area1, cidade2);
                    } else {
                        printf("\nResultado: %s (%.2f km\u00B2) e %s (%.2f km\u00B2) tem áreas iguais! Deu empate!\n\n", cidade1, area1, cidade2, area2);
                    }

                    printf("Deseja jogar novamente? (1 - Sim / 2 - Não): ");
                    scanf(" %d", &opcaojogarnovamente);
                    switch(opcaojogarnovamente) {
                        case 1:
                            //Reiniciar o jogo
                            printf("\nReiniciando o jogo...\n\n");
                            main();
                            break;
                        case 2:
                            printf("\nVocê escolheu sair. Até mais!\n");
                            return 0;
                            break;
                        default:
                            printf("\nOpção inválida! Tente novamente.\n");
                            break;
                    }
                    break;
                case 3:
                    //PIB
                    printf("\n*** Comparação de Cartas (Atributo: PIB): ***\n");

                    if (pib1 > pib2){
                        printf("\nResultado: %s (%.2f bilhões) tem PIB maior que %s (%.2f bilhões)! %s venceu!!\n\n", cidade1, pib1, cidade2, pib2, cidade1);
                    } else if (pib1 < pib2){
                        printf("\nResultado: %s (%.2f bilhões) tem PIB maior que %s (%.2f bilhões)! %s venceu!!\n\n", cidade2, pib2, cidade1, pib1, cidade2);
                    } else {
                        printf("\nResultado: %s (%.2f bilhões) e %s (%.2f bilhões) tem PIBs iguais! Deu empate!\n\n", cidade1, pib1, cidade2, pib2);
                    }

                    printf("Deseja jogar novamente? (1 - Sim / 2 - Não): ");
                    scanf(" %d", &opcaojogarnovamente);
                    switch(opcaojogarnovamente) {
                        case 1:
                            //Reiniciar o jogo
                            printf("\nReiniciando o jogo...\n\n");
                            main();
                            break;
                        case 2:
                            printf("\nVocê escolheu sair. Até mais!\n");
                            return 0;
                            break;
                        default:
                            printf("\nOpção inválida! Tente novamente.\n");
                            break;
                    }
                    break;
                case 4:
                    //Pontos Turísticos
                    printf("\n*** Comparação de Cartas (Atributo: Pontos Turísticos): ***\n"); 

                    if (pontosturisticos1 > pontosturisticos2){
                        printf("\nResultado: %s (%d) tem mais pontos turísticos que %s (%d)! %s venceu!!\n\n", cidade1, pontosturisticos1, cidade2, pontosturisticos2, cidade1);
                    } else if (pontosturisticos1 < pontosturisticos2){
                        printf("\nResultado: %s (%d) tem mais pontos turísticos que %s (%d)! %s venceu!!\n\n", cidade2, pontosturisticos2, cidade1, pontosturisticos1, cidade2);
                    } else {
                        printf("\nResultado: %s (%d) e %s (%d) tem igual número de pontos turísticos! Deu empate!\n\n", cidade1, pontosturisticos1, cidade2, pontosturisticos2);
                    }

                    printf("Deseja jogar novamente? (1 - Sim / 2 - Não): ");
                    scanf(" %d", &opcaojogarnovamente);
                    switch(opcaojogarnovamente) {
                        case 1:
                            //Reiniciar o jogo
                            printf("\nReiniciando o jogo...\n\n");
                            main();
                            break;
                        case 2:
                            printf("\nVocê escolheu sair. Até mais!\n");
                            return 0;
                            break;
                        default:
                            printf("\nOpção inválida! Tente novamente.\n");
                            break;
                    }
                    break;                    
                case 5:
                    //Densidade Demográfica
                    printf("\n*** Comparação de Cartas (Atributo: Densidade Demográfica): ***\n");

                    if (densidade1 < densidade2){
                        printf("\nResultado: %s (%.2f hab/km\u00B2) tem densidade demográfica menor que %s (%.2f hab/km\u00B2)! %s venceu!!\n\n", cidade1, densidade1, cidade2, densidade2, cidade1);
                    } else if (densidade1 > densidade2){
                        printf("\nResultado: %s (%.2f hab/km\u00B2) tem densidade demográfica menor que %s (%.2f hab/km\u00B2)! %s venceu!!\n\n", cidade2, densidade2, cidade1, densidade1, cidade2);
                    } else {
                        printf("\nResultado: %s (%.2f hab/km\u00B2) e %s (%.2f hab/km\u00B2) tem igual densidade demográfica! Deu empate!\n\n", cidade1, densidade1, cidade2, densidade2);
                    }

                    printf("Deseja jogar novamente? (1 - Sim / 2 - Não): ");
                    scanf(" %d", &opcaojogarnovamente);
                    switch(opcaojogarnovamente) {
                        case 1:
                            //Reiniciar o jogo
                            printf("\nReiniciando o jogo...\n\n");
                            main();
                            break;
                        case 2:
                            printf("\nVocê escolheu sair. Até mais!\n");
                            return 0;
                            break;
                        default:
                            printf("\nOpção inválida! Tente novamente.\n");
                            break;
                    }
                    break;
                case 6:
                    //PIB per Capta
                    printf("\n*** Comparação de Cartas (Atributo: PIB per Capta): ***\n");

                    if (pibpercapta1 > pibpercapta2){
                        printf("\nResultado: %s (%.2f reais) tem PIB per Capta maior que %s (%.2f reais)! %s venceu!!\n\n", cidade1, pibpercapta1, cidade2, pibpercapta2, cidade1);
                    } else if (pibpercapta1 < pibpercapta2){
                        printf("\nResultado: %s (%.2f reais) tem PIB per Capta maior que %s (%.2f reais)! %s venceu!!\n\n", cidade2, pibpercapta2, cidade1, pibpercapta1, cidade2);
                    } else {
                        printf("\nResultado: %s (%.2f reais) e %s (%.2f reais) tem igual PIB per Capta! Deu empate!\n\n", cidade1, pibpercapta1, cidade2, pibpercapta2);
                    }

                    printf("Deseja jogar novamente? (1 - Sim / 2 - Não): ");
                    scanf(" %d", &opcaojogarnovamente);
                    switch(opcaojogarnovamente) {
                        case 1:
                            //Reiniciar o jogo
                            printf("\nReiniciando o jogo...\n\n");
                            main();
                            break;
                        case 2:
                            printf("\nVocê escolheu sair. Até mais!\n");
                            return 0;
                            break;
                        default:
                            printf("\nOpção inválida! Tente novamente.\n");
                            break;
                    }
                    break;
                case 7:
                    //Voltar ao menu anterior
                    main(); 
                    break;
                default:
                    printf("\nOpção inválida! Tente novamente.\n");
                    printf("Deseja jogar novamente? (1 - Sim / 2 - Não): ");
                    scanf(" %d", &opcaojogarnovamente);
                    switch(opcaojogarnovamente) {
                        case 1:
                            //Reiniciar o jogo
                            printf("\nReiniciando o jogo...\n\n");
                            main();
                            break;
                        case 2:
                            printf("\nVocê escolheu sair. Até mais!\n");
                            return 0;
                            break;
                        default:
                            printf("\nOpção inválida! Tente novamente.\n");
                            break;
                    }
                    break;
                }
                break;
            case 3:
                printf("\nVocê escolheu sair. Até mais!\n");
                break;
            default:
                printf("\nOpção inválida! Tente novamente.\n");
                break;
    }
return 0;  
    }