#include <stdio.h>

void main()
{
    /*carta1*/
    char estado = 'a';
    char codCarta[4] = "a01";
    char nome[50] = "Rio de janeiro";
    unsigned long int populacao = 6200000;
    int area = 1200;
    long long pib = 1150000000000;
    int pTurist = 10;
    float densidadePop = populacao / area;
    float pibPCapita = pib / populacao;
    long long superPoder = populacao + area + pib + pTurist + (densidadePop * (-1)) + pibPCapita;

    /*carta2*/
    char estado2 = 'b';
    char codCarta2[4] = "b04";
    char nome2[50] = "Sao Paulo";
    unsigned long populacao2 = 11450000;
    int area2 = 1521;
    long long int pib2 = 748000000000;
    int pTurist2 = 5;
    float densidadePop2 = populacao2 / area2;
    float pibPCapita2 = pib2 / populacao2;
    long long superPoder2 = populacao2 + area2 + pib2 + pTurist2 + (densidadePop2 * (-1)) + pibPCapita2;

    char choice1, choice2;
    int resultado1, resultado2;

    printf("***************************************************************************\n");
    printf("\t\t\tSuper Trunfo - Países\n");
    printf("***************************************************************************\n");
    /*Menu de Selecao*/
    printf("Vamos começar o jogo informando dois atributos para comparar.\n");
    printf("Escolha o primeiro atributo:\n");
    printf("A. Populacao;\n");
    printf("B. Área;\n");
    printf("C. PIB;\n");
    printf("D. Pontos Turisticos;\n");
    printf("E. Densidade Demografica;\n");
    printf("-->");
    scanf(" %c", &choice1);

    printf("Ótimo! Agora escolha o segundo atributo:\n");
    printf("A. Populacao;\n");
    printf("B. Área;\n");
    printf("C. PIB;\n");
    printf("D. Pontos Turisticos;\n");
    printf("E. Densidade Demografica;\n");
    printf("-->");
    scanf(" %c", &choice2);
    printf("***************************************************************************\n");

    /*Veirificacao se atributos*/
    if (choice1 == choice2)
        printf("Não é possivel escolher o mesmo atributo duas vezes");
    else
    {
        /*Comparacao 1 e apresentacao de resultado*/
        
        switch (choice1)
        {
        case 'A':
        case 'a':
            printf("Primeiro Atributo: Populacao:\n\n");
            printf("Carta 1, %s: %lu\n", nome, populacao);
            printf("Carta 2, %s: %lu\n", nome2, populacao2);
            
            resultado1 = populacao > populacao2;
            break;
        case 'B':
        case 'b':
            printf("Primeiro Atributo: Área:\n\n");
            printf("Carta 1, %s: %d\n", nome, area);
            printf("Carta 2, %s: %d\n", nome2, area2);
            
            resultado1 = area > area2;
            break;
        case 'C':
        case 'c':
            printf("Primeiro Atributo: PIB:\n\n");
            printf("Carta 1, %s: %lld\n", nome, pib);
            printf("Carta 2, %s: %lld\n", nome2, pib2);
            
            resultado1 = pib > pib2;
            break;
        case 'D':
        case 'd':
            printf("Primeiro Atributo: Pontos Turísticos:\n\n");
            printf("Carta 1, %s: %d\n", nome, pTurist);
            printf("Carta 2, %s: %d\n", nome2, pTurist2);

            resultado1 = pTurist > pTurist2;
            break;
        case 'E':
        case 'e':
            printf("Primeiro Atributo: Densidade Demográfica:\n\n");
            printf("Carta 1, %s: %.1f\n", nome, densidadePop);
            printf("Carta 2, %s: %.1f\n", nome2, densidadePop2);
            
            resultado1 = densidadePop < densidadePop2;
            break;
        default:
            printf("Opção inválida!!");
            break;
        }

        printf("\n");
        /*Comparacao 2*/
        switch (choice2)
        {
        case 'A':
        case 'a':
            printf("Segundo Atributo: Populacao:\n\n");
            printf("Carta 1, %s: %lu\n", nome, populacao);
            printf("Carta 2, %s: %lu\n", nome2, populacao2);
            
            resultado2 = populacao > populacao2;
            break;
        case 'B':
        case 'b':
            printf("Segundo Atributo: Área:\n\n");
            printf("Carta 1, %s: %d\n", nome, area);
            printf("Carta 2, %s: %d\n", nome2, area2);
            
            resultado2 = area > area2;
            break;
        case 'C':
        case 'c':
            printf("Segundo Atributo: PIB:\n\n");
            printf("Carta 1, %s: %lld\n", nome, pib);
            printf("Carta 2, %s: %lld\n", nome2, pib2);
            
            resultado2 = pib > pib2;
            break;
        case 'D':
        case 'd':
            printf("Segundo Atributo: Pontos Turísticos:\n\n");
            printf("Carta 1, %s: %d\n", nome, pTurist);
            printf("Carta 2, %s: %d\n", nome2, pTurist2);
            
            resultado2 = pTurist > pTurist2;
            break;
        case 'E':
        case 'e':
            printf("Segundo Atributo: Densidade Demográfica:\n\n");
            printf("Carta 1, %s: %.1f\n", nome, densidadePop);
            printf("Carta 2, %s: %.1f\n", nome2, densidadePop2);
            
            resultado2 = densidadePop < densidadePop2;
            break;
        default:
            printf("Opção inválida!!");
            break;
        }

        /*Gera o resultado final*/
        printf("\n---------------------------------\n");
        if (resultado1 && resultado2)
            printf("|\tVoce Venceu! ;)\t\t|\n");
        else
            resultado1 || resultado2 ? printf("|\tVoce Empatou! ;/\t|\n") : printf("|\tVoce Perdeu! ;(\t\t|\n");
        printf("---------------------------------\n");
    }
}