#include <stdio.h>

int main(){

    //Carta 1
    char codigo_da_carta1 [20];
    char estado1 [20];
    char cidade1 [20];
    unsigned long int populacao1;
    float area1;
    float pib1;
    int pturistico1;
    float denspopulacional1;
    float pibpercap1;
    float superpoder1;

    //Carta 2
    char codigo_da_carta2 [20];
    char estado2 [20];
    char cidade2 [20];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int pturistico2;
    float denspopulacional2;
    float pibpercap2;
    float superpoder2;

    //Cadastro da carta 01

    printf("Digite os dados da carta 01\n");
    printf("Codigo da carta: ");
    scanf("%3s", codigo_da_carta1);

    printf("Estado: ");
    scanf("%20s", estado1);

    printf("Nome da Cidade: ");
    scanf("%20s", cidade1);

    printf("População: ");
    scanf("%lu", &populacao1);

    printf("Área: ");
    scanf("%f", &area1);

    printf("PIB: ");
    scanf("%f", &pib1);

    printf("Números de Pontos Turísticos:");
    scanf("%d", &pturistico1);

    denspopulacional1 = populacao1 / area1;
    pibpercap1 = pib1 / populacao1;
    superpoder1 = populacao1 + area1 + pib1 + pturistico1 + pibpercap1 + (1.0f / denspopulacional1);

    printf("\nOs dados da carta 01 %s é: \n Estado: %s \n Cidade: %s \n População: %lu \n Área: %.2f \n PIB: %.2f \n Pontos Turísticos: %d\n Densidade Populacional: %.2f \n PIB per Capita: %.2f \n Super poder: %.2f\n",
         codigo_da_carta1, estado1, cidade1, populacao1, area1, pib1, pturistico1, denspopulacional1, pibpercap1, superpoder1);

    //Cadastro da carta 02

    printf("\nDigite os dados da carta 02\n");
    printf("Codigo da carta: ");
    scanf("%3s", codigo_da_carta2);

    printf("Estado: ");
    scanf("%20s", estado2);

    printf("Nome da Cidade: ");
    scanf("%20s", cidade2);

    printf("População: ");
    scanf("%lu", &populacao2);

    printf("Área: ");
    scanf("%f", &area2);

    printf("PIB: ");
    scanf("%f", &pib2);

    printf("Números de Pontos Turísticos:");
    scanf("%d", &pturistico2);

    denspopulacional2 = populacao2 / area2;
    pibpercap2 = pib2 / populacao2;
    superpoder2 = populacao2 + area2 + pib2 + pturistico2 + pibpercap2 + (1.0f / denspopulacional2);

    printf("\nOs dados da carta 02 %s é: \n Estado: %s \n Cidade: %s \n População: %lu \n Área: %.2f \n PIB: %.2f \n Pontos Turísticos: %d \n Densidade Populacional: %.2f \n PIB per Capita: %.2f\n Super poder: %.2f\n", 
        codigo_da_carta2, estado2, cidade2, populacao2, area2, pib2, pturistico2, denspopulacional2, pibpercap2, superpoder2);



// Comparando cartas

 printf("População: %s venceu\n", (populacao1 > populacao2) ? "Carta 1" : "Carta 2");
    printf("Área: %s venceu\n", (area1 > area2) ? "Carta 1" : "Carta 2");
    printf("PIB: %s venceu\n", (pib1 > pib2) ? "Carta 1" : "Carta 2");
    printf("Pontos Turísticos: %s venceu\n", (pturistico1 > pturistico2) ? "Carta 1" : "Carta 2");
    printf("PIB per Capita: %s venceu\n", (pibpercap1 > pibpercap2) ? "Carta 1" : "Carta 2");
    printf("Densidade Populacional (menor vence): %s venceu\n", (denspopulacional1 < denspopulacional2) ? "Carta 1" : "Carta 2");
    printf("Super Poder: %s venceu\n", (superpoder1 > superpoder2) ? "Carta 1" : "Carta 2");



return 0;
}