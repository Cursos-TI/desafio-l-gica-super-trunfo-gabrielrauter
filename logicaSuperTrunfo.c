#include <stdio.h>

int main() {
    
    //variaveis das cartas 1 e 2
    char nomepais1[10] = "Brasil", nomepais2[10] = "Argentina";
    int populacao1 = 250000000, populacao2 = 45000000, pontos1 = 100, pontos2 = 110, opcao;
    float area1 = 8510000, area2 = 2780000, pib1 = 2174000000, pib2 = 640100, densidadepop1, densidadepop2;
 
    //calculo da densidade populacional e pib per capita da carta 1
    densidadepop1 = populacao1 / area1;
  
    //calculo da densidade populacional e pib per capita da carta 1
    densidadepop2 = populacao2 / area2;

    printf ("escolha qual atributo você deseja comparar:\n");
    printf ("1. Comparar população.\n");
    printf ("2. Comparar área.\n");
    printf ("3. Comparar PIB.\n");
    printf ("4. Comparar pontos turísticos.\n");
    printf ("5. Comparar densidade demográfica.\n");
    scanf ("%d", &opcao);

    
    //criando a estruta switch para captar a opção escolhida pelo usuário e fazer as comparações entre os atributos das cartas
    switch (opcao) {

        case 1:
        if (populacao1 > populacao2){
            printf ("\nCarta 01: %s * VS * Carta 02: %s.\n", nomepais1, nomepais2);
            printf ("Comparando o atributo: População.\n");
            printf ("população carta 01:%d - porpulação carta 02:%d.\n", populacao1, populacao2); 
            printf ("Carta 1 venceu!\n");
        } else if (populacao1 < populacao2){
            printf ("\nCarta 01: %s VS Carta 02: %s.\n", nomepais1, nomepais2);
            printf ("Comparando o atributo: População.\n");
            printf ("população carta 01: %d - porpulação carta 02: %d.\n", populacao1, populacao2);
            printf ("carta 2 venceu!\n");
        }
        else {
            printf ("\nCarta 01: %s VS Carta 02: %s.\n", nomepais1, nomepais2);
            printf ("Comparando o atributo: População.\n");
            printf ("população carta 01:%d - porpulação carta 02:%d.\n", populacao1, populacao2); 
            printf ("empate!\n");}
           
            break;

        case 2:
        if (area1 > area2){
            printf ("\nCarta 01: %s * VS * Carta 02: %s.\n", nomepais1, nomepais2);
            printf ("Comparando o atributo: Área.\n");
            printf ("área carta 01:%.2f - área carta 02:%.2f.\n", area1, area2); 
            printf ("Carta 1 venceu!\n");
        } else if (area1 < area2){
            printf ("\nCarta 01: %s VS Carta 02: %s.\n", nomepais1, nomepais2);
            printf ("Comparando o atributo: Área.\n");
            printf ("área carta 01: %.2f - área carta 02: %.2f.\n", area1, area2);
            printf ("carta 2 venceu!\n");
        }
        else {
            printf ("\nCarta 01: %s VS Carta 02: %s.\n", nomepais1, nomepais2);
            printf ("Comparando o atributo: Área.\n");
            printf ("área carta 01:%.2f - área carta 02:%.2f.\n", area1, area2); 
            printf ("empate!\n");}
           
            break;
            
        case 3:
        if (pib1 > pib2){
            printf ("\nCarta 01: %s * VS * Carta 02: %s.\n", nomepais1, nomepais2);
            printf ("Comparando o atributo: PIB.\n");
            printf ("PIB carta 01:%.2f - PIB carta 02:%.2f.\n", pib1, pib2); 
            printf ("Carta 1 venceu!\n");
        } else if (pib1 < pib2){
            printf ("\nCarta 01: %s VS Carta 02: %s.\n", nomepais1, nomepais2);
            printf ("Comparando o atributo: PIB.\n");
            printf ("PIB carta 01: %.2f - PIB carta 02: %.2f.\n", pib1, pib2);
            printf ("carta 2 venceu!\n");
        }
        else {
            printf ("\nCarta 01: %s VS Carta 02: %s.\n", nomepais1, nomepais2);
            printf ("Comparando o atributo: PIB.\n");
            printf ("PIB carta 01:%.2f - PIB carta 02:%.2f.\n", pib1, pib2); 
            printf ("empate!\n");}

            break;
        
        case 4:
        if (pontos1 > pontos2){
            printf ("\nCarta 01: %s * VS * Carta 02: %s.\n", nomepais1, nomepais2);
            printf ("Comparando o atributo: Pontos Turistícos.\n");
            printf ("Pontos Turistícos carta 01:%d - Pontos Turistícos carta 02:%d.\n", pontos1, pontos2); 
            printf ("Carta 1 venceu!\n");
        } else if (pontos1 < pontos2){
            printf ("\nCarta 01: %s VS Carta 02: %s.\n", nomepais1, nomepais2);
            printf ("Comparando o atributo: Pontos Turistícos.\n");
            printf ("Pontos Turistícos carta 01: %d - Pontos Turistícos carta 02: %d.\n", pontos1, pontos2);
            printf ("carta 2 venceu!\n");
        }
        else {
            printf ("\nCarta 01: %s VS Carta 02: %s.\n", nomepais1, nomepais2);
            printf ("Comparando o atributo: Pontos Turistícos.\n");
            printf ("Pontos Turistícos carta 01:%d - Pontos Turistícos carta 02:%d.\n", pontos1, pontos2); 
            printf ("empate!\n");}

            break;
            
        case 5:
        if ((1.0 / densidadepop1) > (1.0 / densidadepop2)){
            printf ("\nCarta 01: %s * VS * Carta 02: %s.\n", nomepais1, nomepais2);
            printf ("Comparando o atributo: Densidade Populacional.\n");
            printf ("PIB carta 01:%.2f - PIB carta 02:%.2f.\n", densidadepop1, densidadepop2); 
            printf ("Carta 1 venceu!\n");
        } else if ((1.0 / densidadepop1) < (1.0 / densidadepop2)){
            printf ("\nCarta 01: %s VS Carta 02: %s.\n", nomepais1, nomepais2);
            printf ("Comparando o atributo: Densidade Populacional.\n");
            printf ("Densidade Populacional carta 01: %.2f - Densidade Populacional carta 02: %.2f.\n", densidadepop1, densidadepop2);
            printf ("carta 2 venceu!\n");
        }
        else {
            printf ("\nCarta 01: %s VS Carta 02: %s.\n", nomepais1, nomepais2);
            printf ("Comparando o atributo: Densidade Populacional.\n");
            printf ("Densidade Populacional carta 01:%.2f - Densidade Populacional carta 02:%.2f.\n", densidadepop1, densidadepop2); 
            printf ("empate!\n");}

            break;

        default:
        printf ("\nopção inválida.\n");
        }

     return 0;
}