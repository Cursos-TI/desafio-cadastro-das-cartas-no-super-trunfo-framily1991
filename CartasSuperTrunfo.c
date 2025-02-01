#include <stdio.h>

int main() {

    //declarando variaveis
    int cidade, nPontosTurist;
    unsigned long int populacao, area;
    float pib;
    char nome[50];
    char estado;
    int denpopu;
    float pibpercapita;
    
    
    printf("SUPER TRUNFO - Paises!\n");
    //solicitando dados
    printf("Vamos comecar cadastrando as cartas. Forneça as informações solicitadas abaixo:\n");
    
    printf("Qual o nome da cidade?? \n");
    scanf("%s", &nome);
    
    printf("Informe um numero de 1 a 4 para identificar a cidade escolhida:\n");
    scanf("%d", &cidade);

    printf("Informe a letra correspondente ao estado da cidade que voce escolheu:\n");
    scanf(" %c", &estado);

    printf("Qual o numero de habitantes da cidade?(Somente numeros) \n");
    scanf("%lu", &populacao);

    printf("Qual o tamanho da area da cidade?(Somente numeros) \n");
    scanf("%lu", &area);
    
    printf("Qual o PIB da cidade? \n");
    scanf("%f", &pib);

    printf("Qual o numero de pontos turisticos da cidade? \n");
    scanf("%d", &nPontosTurist);

    //declarando e inicializando variaveis de densidade populacional e pib percapita
    denpopu = populacao /area;
    pibpercapita = pib / populacao;

    //imprimindo dados armazenados
    printf("Muito bem voce cadastrou uma nova carta!\n");
    printf("Codigo da carta: %c0%d\n", estado, cidade);
    printf("Nome: %s\n", nome);
    printf("Populacao: %lu\n", populacao);
    printf("Area: %lu\n", area);
    printf("PIB: %.2f\n", pib);
    printf("Numero de pontos turisticos: %d\n", nPontosTurist);
    printf("Densidade populacional: %d\n", denpopu);
    printf("PIB Percapita: %.2f\n", pibpercapita);

    return 0;
}