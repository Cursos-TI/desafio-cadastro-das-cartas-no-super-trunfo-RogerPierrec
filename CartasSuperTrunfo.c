#include <stdio.h>

int main(){

    //Carta 1
    char codigo_da_carta1 [20];
    char estado1 [20];
    char cidade1 [20];
    int populacao1;
    float area1;
    float pib1;
    int pturistico1;

    //Carta 2
    char codigo_da_carta2 [20];
    char estado2 [20];
    char cidade2 [20];
    int populacao2;
    float area2;
    float pib2;
    int pturistico2;

    //Cadastro da carta 01

    printf("Digite os dados da carta 01\n");
    printf("Codigo da carta: ");
    scanf("%3s", codigo_da_carta1);

    printf("Estado: ");
    scanf("%20s", estado1);

    printf("Nome da Cidade: ");
    scanf("%20s", cidade1);

    printf("População: ");
    scanf("%d", &populacao1);

    printf("Área: ");
    scanf("%f", &area1);

    printf("PIB: ");
    scanf("%f", &pib1);

    printf("Números de Pontos Turísticos:");
    scanf("%d", &pturistico1);

    printf("\nOs dados da carta 01 %s é: \n Estado: %s \n Cidade: %s \n População: %d \n Área: %f \n PIB: %f \n Pontos Turísticos: %d\n", codigo_da_carta1, estado1, cidade1, populacao1, area1, pib1, pturistico1);

    //Cadastro da carta 02

    printf("\nDigite os dados da carta 02\n");
    printf("Codigo da carta: ");
    scanf("%3s", codigo_da_carta2);

    printf("Estado: ");
    scanf("%20s", estado2);

    printf("Nome da Cidade: ");
    scanf("%20s", cidade2);

    printf("População: ");
    scanf("%d", &populacao2);

    printf("Área: ");
    scanf("%f", &area2);

    printf("PIB: ");
    scanf("%f", &pib2);

    printf("Números de Pontos Turísticos:");
    scanf("%d", &pturistico2);

    printf("\nOs dados da carta 02 %s é: \n Estado: %s \n Cidade: %s \n População: %d \n Área: %f \n PIB: %f \n Pontos Turísticos: %d", codigo_da_carta2, estado2, cidade2, populacao2, area2, pib2, pturistico2);


return 0;
}