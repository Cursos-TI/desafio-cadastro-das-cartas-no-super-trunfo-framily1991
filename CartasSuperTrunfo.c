#include <stdio.h>
#include <string.h>

void main(){
    /*variaveis carta1*/
    char estado;
    char codCarta[4];
    char nome[50];
    unsigned long int populacao;
    int area;
    long long pib;
    int pTurist;
    float densidadePop;
    float pibPCapita;
    long long superPoder;

    /*variaveis carta2*/
    char estado2;
    char codCarta2[4];
    char nome2[50];
    unsigned long int populacao2;
    int area2;
    long long pib2;
    int pTurist2;
    float densidadePop2;
    float pibPCapita2;
    long long superPoder2;

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
    if(populacao > populacao2)
        printf("Populacao: Carta 1 venceu\n");
    else
        printf("Populacao: Carta 2 venceu\n");
    /*area*/
    if (area > area2)
        printf("Area: Carta 1 venceu\n");
    else
        printf("Area: Carta 2 venceu\n");
    /*pib*/
    if (pib > pib2)
        printf("PIB: Carta 1 venceu\n");
    else
        printf("PIB: Carta 2 venceu\n");
    /*pontos turisticos*/
    if (pTurist > pTurist2)
        printf("Nº de Pontos Turisticos: Carta 1 venceu\n");
    else
        printf("Nº de Pontos Turisticos: Carta 2 venceu\n");
    /*densidade populacional*/
    if (densidadePop < densidadePop2)
        printf("Densidade Populacional: Carta 1 venceu\n");
    else
        printf("Densidade Populacional: Carta 2 venceu\n");
    /*pib percapita*/
    if (pibPCapita > pibPCapita2)
        printf("PIB Per Capita: Carta 1 venceu\n");
    else
    printf("PIB Per Capita: Carta 2 venceu\n");
    /*super Poder*/
    if (superPoder > superPoder2)
        printf("Super Poder: Carta 1 venceu\n");
    else
    printf("Super Poder: Carta 2 venceu\n");
}
