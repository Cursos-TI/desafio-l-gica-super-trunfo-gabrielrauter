#include <stdio.h>

int main() {
    
    //variaveis das cartas 1 e 2
    char estado1[5], estado2[5], codigo1[10], codigo2[10], cidade1[10], cidade2[10];
    int populacao1, populacao2, pontos1, pontos2;
    float area1, area2, pib1, pib2, densidadepop1, densidadepop2, pibpercapita1, pibpercapita2;

    //captando dados da carta01
    printf("\nDigite as informações da Carta 1:\n");
    
    printf("Digite o Estado (2 dígitos): ");
    scanf("%s", estado1);

    printf("Digite o Código da Carta (ex: SP01): ");
    scanf("%s", codigo1);

    printf("Digite o nome da Cidade:");
    scanf(" %s", cidade1);

    printf("Digite a População: ");
    scanf("%d", &populacao1);

    printf("Digite a Área (em km²): ");
    scanf("%f", &area1);

    printf("Digite o PIB: ");
    scanf("%f", &pib1);

    printf("Digite o Número de Pontos Turísticos: ");
    scanf("%d", &pontos1);
 
    //calculo da densidade populacional e pib per capita da carta 1
    densidadepop1 = populacao1 / area1;
    pibpercapita1 = pib1 / populacao1;

    //captando dados da carta02
    printf("\nDigite as informações da Carta 2:\n");

    printf("Digite o Estado (2 dígitos): ");
    scanf(" %s", estado2);

    printf("Digite o Código da Carta (ex: SP02): ");
    scanf("%s", codigo2);

    printf("Digite o Nome da Cidade:");
    scanf(" %s", cidade2);
    
    printf("Digite a População: ");
    scanf("%d", &populacao2);

    printf("Digite a Área (em km²): ");
    scanf("%f", &area2);

    printf("Digite o PIB: ");
    scanf("%f", &pib2);

    printf("Digite o Número de Pontos Turísticos: ");
    scanf("%d", &pontos2);

    //calculo da densidade populacional e pib per capita da carta 1
    densidadepop2 = populacao2 / area2;
    pibpercapita2 = pib2 / populacao2;
        
    //mostrando os dados da carta 1 e resuldados dos calculos
    printf("\nCarta 1:\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontos1);
    printf("Densidade populacional: %.2f\n", densidadepop1);
    printf("PIB per capita: %.2f\n", pibpercapita1);
   
     //mostrando os dados da carta 2 e resuldados dos calculos
    printf("\nCarta 2:\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos2);
    printf("Densidade populacional: %.2f\n", densidadepop2);
    printf("PIB per capita: %.2f\n", pibpercapita2);
  

    //mostrando o resultados da carta que venceu comparando neste caso os pontos turisticos
    printf("\nComparação das Cartas - Pontos Turisticos:\n");
    printf("Carta 1 - %s  (%s): %d\n", cidade1,estado1,pontos1);
    printf("Carta 2 - %s  (%s): %d\n", cidade2,estado2,pontos2);
    if(pontos1 > pontos2){
        printf("carta 1 (%s) venceu!\n", cidade1);
    }else{
        printf("carta 2 (%s) venceu!\n", cidade2);
    }

    return 0;
}