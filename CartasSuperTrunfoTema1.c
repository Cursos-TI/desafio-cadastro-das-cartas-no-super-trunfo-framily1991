#include <stdio.h>
#include <string.h>

void main(){
    char estado, estado2;
    char codCarta[4], codCarta2[4];
    char nome[50], nome2[50];
    unsigned long int populacao, populacao2;
    int area, area2;
    long long pib, pib2;
    int pTurist, pTurist2;
    float densidadePop, densidadePop2;
    float pibPCapita, pibPCapita2;
    long long superPoder, superPoder2;

    /*solicitando informacoes carta 1*/
    printf("Bem Vindo ao jogo Super Trunfo!\nVamos comecar cadastrando duas cartas.\n\n");

    printf("Primeira carta\n\n");
    printf("Escolha uma letra de A a H para representar o estado: "); scanf(" %c", &estado);
    printf("Defina um codigo que comece com a letra do estado mais um numero entre 01 e 04: "); scanf(" %s", &codCarta);
    getchar();
    printf("Qual o nome da cidade: "); fgets(nome, 50, stdin); nome[strcspn(nome, "\n")] = 0;
    printf("Qual o numero de habitantes: "); scanf(" %lu", &populacao);
    printf("Qual a area da cidade em km²: "); scanf(" %d", &area);
    printf("Qual o PIB da cidade: "); scanf(" %lld", &pib);
    printf("Quantos pontos turisticos na cidade: ");scanf(" %d", &pTurist);

    /*atribuindo os valores compostos*/
    densidadePop = populacao / area;
    pibPCapita = pib / populacao;
    superPoder = populacao + area + pib + pTurist + (densidadePop*(-1)) + pibPCapita;

    printf("\n");

    /*solicitando informacoes da carta 2*/
    printf("Segunda carta\n\n");
    printf("Escolha uma letra de A a H para representar o estado: "); scanf(" %c", &estado2);
    printf("Defina um codigo que comece com a letra do estado mais um numero entre 01 e 04: "); scanf(" %s", &codCarta2);
    getchar();
    printf("Qual o nome da cidade: "); fgets(nome2, 50, stdin); nome2[strcspn(nome2, "\n")] = 0;
    printf("Qual o numero de habitantes: "); scanf(" %lu", &populacao2);
    printf("Qual a area da cidade em km²: "); scanf(" %d", &area2);
    printf("Qual o PIB da cidade: "); scanf(" %lld", &pib2);
    printf("Quantos pontos turisticos na cidade: ");scanf(" %d", &pTurist2);

    /*atribuindo os valores compostos*/
    densidadePop2 = populacao2 / area2;
    pibPCapita2 = pib2 / populacao2;
    superPoder2 = populacao2 + area2 + pib2 + pTurist2 + (densidadePop2*(-1)) + pibPCapita2;
    
    printf("\nCartas cadastradas!\n\n");
    
    /*exibindo carta1*/
    printf("Carta 1\n\n");
    printf("Estado: %c\n", estado);
    printf("Codigo: %s\n", codCarta);
    printf("Nome: %s\n", nome);
    printf("Nº Habitantes: %lu\n", populacao);
    printf("Area: %d km²\n", area);
    printf("PIB: R$ %lld.00\n",pib);
    printf("Nº Pontos Turisticos: %d\n", pTurist);
    printf("Densidade populacional: %.1f hab/km²\n", densidadePop);
    printf("PIB Per Capita: R$ %.2f\n", pibPCapita);
    printf("Super Poder: %lld\n", superPoder);

    /*exibindo carta2*/
    printf("Carta 2\n\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codCarta2);
    printf("Nome: %s\n", nome2);
    printf("Nº Habitantes: %lu\n", populacao2);
    printf("Area: %d km²\n", area2);
    printf("PIB: R$ %lld.00\n",pib2);
    printf("Nº Pontos Turisticos: %d\n", pTurist2);
    printf("Densidade populacional: %.1f hab/km²\n", densidadePop2);
    printf("PIB Per Capita: R$ %.2f\n", pibPCapita2);
    printf("Super Poder: %lld\n", superPoder2);

    printf("\n");

    /*comparacao de cartas*/
    printf("Comparacao de Cartas!\n");
    
    /*populacao*/
    printf("Populacao: Carta %d venceu\n", (populacao < populacao2) + 1);
    /*area*/
    printf("Area: Carta %d venceu\n", (area < area2) + 1);
    /*pib*/
    printf("PIB: Carta %d venceu\n", (pib < pib2) + 1);
    /*pontos turisticos*/
    printf("Nº de Pontos Turisticos: Carta %d venceu\n", (pTurist < pTurist2) + 1);
    /*densidade populacional*/
    printf("Densidade Populacional: Carta %d venceu\n", (densidadePop > densidadePop2) + 1);
    /*pib percapita*/
    printf("PIB Per Capita: Carta %d venceu\n", (pibPCapita < pibPCapita2) + 1); 
    /*super Poder*/
    printf("Super Poder: Carta %d venceu\n", (superPoder < superPoder2) + 1);

    
}