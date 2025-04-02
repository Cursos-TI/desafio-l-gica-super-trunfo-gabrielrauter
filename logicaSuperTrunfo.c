#include <stdio.h>

int main() {
    // Variáveis das cartas 1 e 2
    char nomepais1[10] = "Brasil", nomepais2[10] = "Argentina";
    int populacao1 = 25000, populacao2 = 4500, pontos1 = 10, pontos2 = 11, opcao1, opcao2;
    float area1 = 851000, area2 = 27800, pib1 = 2174000, pib2 = 640100, densidadepop1, densidadepop2;
    
    // Cálculo da densidade populacional das cartas
    densidadepop1 = populacao1 / area1;
    densidadepop2 = populacao2 / area2;

    // menu para escolha do primeiro atributo
    printf("Escolha o primeiro atributo para comparar:\n");
    printf("1. Comparar População\n");
    printf("2. Comparar Área\n");
    printf("3. Comparar PIB\n");
    printf("4. Comparar Pontos Turísticos\n");
    printf("5. Comparar Densidade Demográfica\n");
    scanf("%d", &opcao1);

    // para escolha do segundo atributo, garantindo que não seja o mesmo utilizando o do while
    printf("Escolha o segundo atributo para comparar (não pode ser o mesmo que o primeiro):\n");
    do {
        printf("1. Comparar População\n");
        printf("2. Comparar Área\n");
        printf("3. Comparar PIB\n");
        printf("4. Comparar Pontos Turísticos\n");
        printf("5. Comparar Densidade Demográfica\n");
        scanf("%d", &opcao2);
        if (opcao1 == opcao2) {
            printf("Você não pode escolher o mesmo atributo! Escolha outro.\n");
        }
    } while (opcao1 == opcao2);

    // Comparação dos dois atributos escolhidos
    int soma1 = 0, soma2 = 0; // Somas para determinar a carta vencedora

    // Comparação para o primeiro atributo
    switch (opcao1) {
        case 1: 
            printf("Comparando o atributo: População\n");
            printf("População Carta 1: %d - População Carta 2: %d\n", populacao1, populacao2);
            soma1 += populacao1;
            soma2 += populacao2;
            break;
        case 2: 
            printf("Comparando o atributo: Área\n");
            printf("Área Carta 1: %.2f - Área Carta 2: %.2f\n", area1, area2);
            soma1 += area1;
            soma2 += area2;
            break;
        case 3:
            printf("Comparando o atributo: PIB\n");
            printf("PIB Carta 1: %.2f - PIB Carta 2: %.2f\n", pib1, pib2);
            soma1 += pib1;
            soma2 += pib2;
            break;
        case 4: 
            printf("Comparando o atributo: Pontos Turísticos\n");
            printf("Pontos Turísticos Carta 1: %d - Pontos Turísticos Carta 2: %d\n", pontos1, pontos2);
            soma1 += pontos1;
            soma2 += pontos2;
            break;
        case 5:
            printf("Comparando o atributo: Densidade Demográfica\n");
            printf("Densidade Populacional Carta 1: %.2f - Densidade Populacional Carta 2: %.2f\n", densidadepop1, densidadepop2);
            soma1 += 1.0 / densidadepop1;
            soma2 += 1.0 / densidadepop2;
            break;
        default:
            printf("Opção inválida\n");
            return 1;
    }

    // Comparação para o segundo atributo
    switch (opcao2) {
        case 1: 
            printf("Comparando o atributo: População\n");
            printf("População Carta 1: %d - População Carta 2: %d\n", populacao1, populacao2);
            soma1 += populacao1;
            soma2 += populacao2;
            break;
        case 2: 
            printf("Comparando o atributo: Área\n");
            printf("Área Carta 1: %.2f - Área Carta 2: %.2f\n", area1, area2);
            soma1 += area1;
            soma2 += area2;
            break;
        case 3: 
            printf("Comparando o atributo: PIB\n");
            printf("PIB Carta 1: %.2f - PIB Carta 2: %.2f\n", pib1, pib2);
            soma1 += pib1;
            soma2 += pib2;
            break;
        case 4: 
            printf("Comparando o atributo: Pontos Turísticos\n");
            printf("Pontos Turísticos Carta 1: %d - Pontos Turísticos Carta 2: %d\n", pontos1, pontos2);
            soma1 += pontos1;
            soma2 += pontos2;
            break;
        case 5: 
            printf("Comparando o atributo: Densidade Demográfica\n");
            printf("Densidade Populacional Carta 1: %.2f - Densidade Populacional Carta 2: %.2f\n", densidadepop1, densidadepop2);
            soma1 += 1.0 / densidadepop1;
            soma2 += 1.0 / densidadepop2;
            break;
        default:
            printf("Opção inválida\n");
            return 1;
    }

    // Exibir o resultado da comparação
    printf("\nResultado da comparação:\n");
    printf("Soma dos atributos Carta 1: %d\n", soma1);
    printf("Soma dos atributos Carta 2: %d\n", soma2);

    if (soma1 > soma2) {
        printf("Carta 1 venceu!\n");
    } else if (soma1 < soma2) {
        printf("Carta 2 venceu!\n");
    } else {
        printf("Empate!\n");
    }

    return 0;
}