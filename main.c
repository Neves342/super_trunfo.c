#include <stdio.h>
#include <locale.h>
//Seja bem vindo(a) ao meu jogo de super trunfo em trabalho C
int main() {
    setlocale(LC_ALL, "Portuguese");

    //Entrada dos Dados da carta 1
    char Estado, Codigo[10], Nome_da_cidade[50];
    unsigned long int Populacao;
    float area;
    double PIB;
    int Numero_de_Pontos_Turisticos;

    printf("===== SUPER TRUNFO =====\n\n");
    printf("Primeira carta\n");

    printf("Digite o Estado da Carta: \n");
    scanf(" %c", &Estado);
    printf("Digite o Codigo da Carta: \n");
    scanf(" %s", &Codigo);
    getchar(); 
    printf("Digite o Nome da cidade da Carta: \n");
    scanf(" %[^\n]", &Nome_da_cidade);
    printf("Digite a Populacao da Carta: \n");
    scanf(" %lu", &Populacao);
    printf("Digite a Area da Carta: \n");
    scanf(" %f", &area);
    printf("Digite o PIB da Carta: \n");
    scanf(" %lf", &PIB);
    printf("Digite o Numero de Pontos Turisticos da Carta: \n");
    scanf(" %d", &Numero_de_Pontos_Turisticos);

    //Cálculos  da Carta 1
    float Densidade_Populacional = (float)Populacao / area;
    float PIB_per_Capita = (float)(PIB * 1000000000.0 / (float)Populacao);
      

    printf("\nCarta 1:\n");
    printf("Estado: %c\n", Estado);
    printf("Codigo: %s\n", Codigo);
    printf("Nome da Cidade: %s\n", Nome_da_cidade);
    printf("Populacao: %lu\n", Populacao);
    printf("Area: %.2f km²\n", area);
    printf("PIB: %.2f bilhões de reais\n", PIB);
    printf("Numero de Pontos Turisticos: %d\n", Numero_de_Pontos_Turisticos);
    printf("Densidade Populacional: %.2f hab/km²\n", Densidade_Populacional);
    printf("PIB per Capita: %.2f reais\n", PIB_per_Capita);


    //CARTA 2
    printf("Segunda carta\n");

    //Entrada dos Dados da carta 2
    char Estado2, Codigo2[10], Nome_da_cidade2[50];
    unsigned long int Populacao2;
    float area2;
    double PIB2;
    int Numero_de_Pontos_Turisticos2;
   
    printf("\nSegunda carta\n");

    printf("Digite o Estado da Carta: \n");
    scanf(" %c", &Estado2);
    printf("Digite o Codigo da Carta: \n");
    scanf("%s", Codigo2);
    getchar();
    printf("Digite o Nome da cidade da Carta: \n");
    scanf(" %[^\n]", Nome_da_cidade2);
    printf("Digite a Populacao da Carta: \n");
    scanf("%lu", &Populacao2);
    printf("Digite a Area da Carta: \n");
    scanf("%f", &area2);
    printf("Digite o PIB da Carta: \n");
    scanf("%lf", &PIB2);
    printf("Digite o Numero de Pontos Turisticos da Carta: \n");
    scanf("%d", &Numero_de_Pontos_Turisticos2);


    //Cálculos da Carta 2
    float Densidade_Populacional2 = (float)Populacao2 / area2;
    float PIB_per_Capita2 = (float)(PIB2 * 1000000000.0 / (float)Populacao2);
   
    printf("Estado: %c \n", Estado2);
    printf("Codigo: %s \n", Codigo2);
    printf("Nome da cidade: %s \n", Nome_da_cidade2);
    printf("Populacao: %lu \n", Populacao2);
    printf("Area: %.2f km \n", area2);
    printf("PIB: %.2lf bilhoes de reais \n", PIB2); 
    printf("Numero de Pontos Turisticos: %d \n", Numero_de_Pontos_Turisticos2);
    printf("Densidade Populacional: %.2f hab/km² \n", Densidade_Populacional2);
    printf("PIB per Capita: %.2f reais \n", PIB_per_Capita2);

    //Cálculo do Super Poder das Cartas 1 e cartas 2

    float Super_Poder = (float)Populacao + area + (float)PIB + (float)Numero_de_Pontos_Turisticos + PIB_per_Capita + (1.0f / Densidade_Populacional);
    float Super_Poder2 = (float)Populacao2 + area2 + (float)PIB2 + (float)Numero_de_Pontos_Turisticos2 + PIB_per_Capita2 + (1.0f / Densidade_Populacional2);

    printf("\nSuper Poder da Carta 1: %.2f\n", Super_Poder);
    printf("Super Poder da Carta 2: %.2f\n", Super_Poder2);

    //Comparação entre as duas cartas
   printf("\n--- Comparacao das Cartas ---\n");
    printf("Populacao: %s venceu\n", Populacao > Populacao2 ? Nome_da_cidade : Nome_da_cidade2);
    printf("Area: Carta %d venceu\n", area > area2 ? 1 : 2);
    printf("PIB: Carta %d venceu\n", PIB > PIB2 ? 1 : 2);
    printf("Pontos Turisticos: Carta %d venceu\n", Numero_de_Pontos_Turisticos > Numero_de_Pontos_Turisticos2 ? 1 : 2);
    printf("Densidade Populacional: Carta %d venceu\n", Densidade_Populacional < Densidade_Populacional2 ? 1 : 2);
    printf("PIB per Capita: Carta %d venceu\n", PIB_per_Capita > PIB_per_Capita2 ? 1 : 2);
    printf("Super Poder: Carta %d venceu\n", Super_Poder > Super_Poder2 ? 1 : 2);
    getchar(); // Aguarda a entrada do usuário 

    //Tive dúvidas neste pequeno trabalho, assisti alguns videos no youtube sobre a linguagem C.
    //Acresentei e retirem alagumas funções que achei interessantes para tentar melhorar, já que a maioria bugou no terminal.

        return 0;
}








