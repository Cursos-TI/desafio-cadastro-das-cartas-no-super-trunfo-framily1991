#include <stdio.h>

int main(){
    /*carta1*/
    char estado;
    int codCarta;
    char nCidade[30];
    long int populacao;
    int area;
    float pib;
    int pTurist;

    /*carta2*/
    char estado2;
    int codCarta2;
    char nCidade2[30];
    long int populacao2;
    int area2;
    float pib2;
    int pTurist2;

    /*solicitando informacoes carta 1*/
    printf("Bem Vindo ao jogo Super Trunfo!\nVamos comecar cadastrando duas cartas.\n\n");
    printf("Primeira carta\n\n");
    printf("Escolha uma letra de A a H para representar o estado: "); scanf(" %c", &estado);
    printf("Escolha um codigo de 01 a 09 para a carta: "); scanf(" %d", &codCarta);
    printf("Qual o nome da cidade: "); scanf(" %[^\n]", &nCidade);
    printf("Qual o numero de habitantes: "); scanf(" %ld", &populacao);
    printf("Qual a area da cidade em km²: "); scanf(" %d", &area);
    printf("Qual o PIB da cidade: "); scanf(" %f", &pib);
    printf("Quantos pontos turisticos na cidade: ");scanf(" %d", &pTurist);

    /*solicitando informacoes carta 2*/
    printf("Bem Vindo ao jogo Super Trunfo!\nVamos comecar cadastrando duas cartas.\n\n");
    printf("Primeira carta\n\n");
    printf("Escolha uma letra de A a H para representar o estado: "); scanf(" %c", &estado2);
    printf("Escolha um codigo de 01 a 09 para a carta: "); scanf(" %d", &codCarta2);
    printf("Qual o nome da cidade: "); scanf(" %[^\n]", &nCidade2);
    printf("Qual o numero de habitantes: "); scanf(" %ld", &populacao2);
    printf("Qual a area da cidade em km²: "); scanf(" %d", &area2);
    printf("Qual o PIB da cidade: "); scanf(" %f", &pib2);
    printf("Quantos pontos turisticos na cidade: ");scanf(" %d", &pTurist2);

    printf("\nCartas cadastradas!\n\n");
    
    /*exibindo carta1*/
    printf("Carta 1\n\n");
    printf("Codigo: %c0%d\n", estado, codCarta);
    printf("Nome: %s\n", nCidade);
    printf("Nº Habitantes: %ld\n", populacao);
    printf("Area: %d km²\n", area);
    printf("PIB: R$ %.2f\n",pib);
    printf("Nº Pontos Turisticos: %d\n", pTurist);

    /*exibindo carta2*/
    printf("Carta 1\n\n");
    printf("Codigo: %c0%d\n", estado2, codCarta2);
    printf("Nome: %s\n", nCidade2);
    printf("Nº Habitantes: %ld\n", populacao2);
    printf("Area: %d km²\n", area2);
    printf("PIB: R$ %.2f\n",pib2);
    printf("Nº Pontos Turisticos: %d\n", pTurist2);


    return 0;
}
