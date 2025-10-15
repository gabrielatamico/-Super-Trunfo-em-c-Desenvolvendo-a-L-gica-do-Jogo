#include <stdio.h>

int main () {
    //carta 1
    char pais1[50] = "Brasil";
    int populacao1 = 213400000;
    float area1 = 8510000.0;
    float PIB1 = 2179000000.0;
    int pontos_turisticos1 = 50;
    float densidade1 = 25.07;

    //carta 2 
    char pais2[50] = "Japao";
    int populacao2 = 124000000;
    float area2 = 377974.0;
    float PIB2 = 4026000000.0;
    int pontos_turisticos2 = 40;
    float densidade2 = 328.06;

    //variaveis que serao usadas na soma
    float valor1_BR = 0, valor1_JP = 0;
    float valor2_BR = 0, valor2_JP = 0;
    float soma1 = 0, soma2 = 0;

    //variavel que permite selecionar a opcao
    int opcao1, opcao2;

    printf("\nESCOLHA DOS ATRIBUTOS\n");

    //opcoes do menu 1
    printf("\nEscolha o primeiro Atributo que sera usado para comparar as cartas\n");
    printf("1. \nPopulacao \n");
    printf("2. Area \n");
    printf("3. PIB \n");
    printf("4. Numero de pontos turisticos \n");
    printf(("5. Densidade demografica \n"));
    printf("Informe a opcao desejada: ");

    //permite que o usuario escolha o atributo de comparacao
    scanf("%d", &opcao1);

    //menu 2 
    printf("\nEscolha o segundo Atributo que sera usado para comparar as cartas.\n(o atributo escolhido deve ser diferente do primeiro)\n");
    printf("1. \nPopulacao \n");
    printf("2. Area \n");
    printf("3. PIB \n");
    printf("4. Numero de pontos turisticos \n");
    printf(("5. Densidade demografica \n"));
    printf("Informe a opcao desejada: ");

    //permite que o usuario escolha o segundo atributo de comparacao
    scanf("%d", &opcao2);

    //validacao das escolhas e mensagem de erro
    if (opcao1 == opcao2 || opcao1 < 1 || opcao1 > 5 || opcao2 < 1 || opcao2 > 5){
        printf("ERRO: opcoes invalidas. (as opcoes devem ser de um numero de 1 a 5 e devem ser diferentes!) \n");
        return 1;
    }

    printf("\nCOMPARACAO DOS ATRIBUTOS\n");

    switch (opcao1) {
        case 1:
            printf("\nPopulacao - %s: %d | %s: %d\n", pais1, populacao1, pais2, populacao2);
            valor1_BR = populacao1;
            valor1_JP = populacao2;
            break;
        case 2:
            printf("\nArea - %s: %.2f | %s: %.2f\n", pais1, area1, pais2, area2);
            valor1_BR = area1;
            valor1_JP = area2;
            break;
        case 3:
            printf("\nPIB - %s: %.2f | %s: %.2f\n", pais1, PIB1, pais2, PIB2);
            valor1_BR = PIB1;
            valor1_JP = PIB2;
            break;
        case 4:
            printf("\nPontos Turisticos - %s: %d | %s: %d\n", pais1, pontos_turisticos1, pais2, pontos_turisticos2);
            valor1_BR = pontos_turisticos1;
            valor1_JP = pontos_turisticos2;
            break;
        case 5:
            printf("\nDensidade Demografica - %s: %.2f | %s: %.2f\n", pais1, densidade1, pais2, densidade2);
            valor1_BR = densidade1;
            valor1_JP = densidade2;
            break;
        default:
            printf("Opcao invalida!\n");
            return 1;
    }

    //comparacao do segundo atributo
    switch (opcao2) {
        case 1:
            printf("\nPopulacao - %s: %d | %s: %d\n", pais1, populacao1, pais2, populacao2);
            valor2_BR = populacao1;
            valor2_JP = populacao2;
            break;
        case 2:
            printf("\nArea - %s: %.2f | %s: %.2f\n", pais1, area1, pais2, area2);
            valor2_BR = area1;
            valor2_JP = area2;
            break;
        case 3:
            printf("\nPIB - %s: %.2f | %s: %.2f\n", pais1, PIB1, pais2, PIB2);
            valor2_BR = PIB1;
            valor2_JP = PIB2;
            break;
        case 4:
            printf("\nPontos Turisticos - %s: %d | %s: %d\n", pais1, pontos_turisticos1, pais2, pontos_turisticos2);
            valor2_BR = pontos_turisticos1;
            valor2_JP = pontos_turisticos2;
            break;
        case 5:
            printf("\nDensidade Demografica - %s: %.2f | %s: %.2f\n", pais1, densidade1, pais2, densidade2);
            valor2_BR = densidade1;
            valor2_JP = densidade2;
            break;
        default:
            printf("Opcao invalida!\n");
            return 1;
    }

    //soma
    if (opcao1 == 5) {
        soma1 += (valor1_BR < valor1_JP) ? 1 : 0;
        soma2 += (valor1_JP < valor1_BR) ? 1 : 0;
    } else {
        soma1 += (valor1_BR > valor1_JP) ? 1 : 0;
        soma2 += (valor1_JP > valor1_BR) ? 1 : 0;
    }

    if (opcao2 == 5) {
        soma1 += (valor2_BR < valor2_JP) ? 1 : 0;
        soma2 += (valor2_JP < valor2_BR) ? 1 : 0;
    } else {
        soma1 += (valor2_BR > valor2_JP) ? 1 : 0;
        soma2 += (valor2_BR > valor2_JP) ? 1 : 0;
    }

    //imprimindo o resultado da sooma
    printf("\nSoma dos resultados individuais:\n");
    printf("%s: %.0f pontos\n", pais1, soma1);
    printf("%s: %.0f pontos\n", pais2, soma2);
    

    //informando o vencedor
    if (soma1 > soma2)
        printf("Resultado Final: %s venceu!\n", pais1);
    else if (soma2 > soma1)
        printf("Resultado Final: %s venceu!\n", pais2);
    else
        printf("Empate!\n");

    return 0;
}
