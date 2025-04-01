#include <stdio.h>
    int main() {

// Identação de variáveis
        char estado[20], estado2[20], carta[20], carta2[20], cidade[20], cidade2[20];
        float populacao, populacao2, area, area2, pib, pib2;
        int pturisticos, pturisticos2;

// inserção de dados de propriedade

        printf("Carta 1 \n");
        printf("Digite o estado de sua carta: ");
        scanf("%s", &estado);

        printf("Digite o código de sua carta: ");
        scanf("%s", &carta);

        printf("Digite o nome da cidade de sua carta: ");
        scanf(" %[^\n]%*c", &cidade);

        printf("Digite a população da cidade: ");
        scanf("%f", &populacao);

        printf("Digite a área da cidade: ");
        scanf("%f", &area);

        printf("Digite o PIB da cidade: ");
        scanf("%f", &pib);

        printf("Digite o número de pontos turísticos da cidade: ");
        scanf("%i", &pturisticos);

// inserção de dados de propriedade da segunda carta

        printf("Carta 2 \n");
        printf("Digite o Estado de sua carta: ");
        scanf("%s", &estado2);

        printf("Digite o código de sua carta: ");
        scanf("%s", &carta2);

        printf("Digite o nome da cidade de sua carta: ");
        scanf(" %[^\n]%*c", &cidade2);

        printf("Digite a população da cidade: ");
        scanf("%f", &populacao2);

        printf("Digite a área da cidade: ");
        scanf("%f", &area2);

        printf("Digite o PIB da cidade: ");
        scanf("%f", &pib2);

        printf("Digite o número de pontos turísticos da cidade: ");
        scanf("%i", &pturisticos2);

// Exibição de dados das cartas
        printf("\n");
        printf("Carta 1 \n");
        printf("Estado: %s\n", estado);
        printf("Código: %s\n", carta);
        printf("Nome da Cidade: %s\n", cidade);
        printf("População: %6.3fkm²\n", populacao);
        printf("Área: %5.1f\n", area);
        printf("PIB: %6.3f\n", pib);
        printf("Pontos turísticos: %i\n", pturisticos);
        printf("\n");

        printf("\n");
        printf("Carta 2 \n");
        printf("Estado: %s\n", estado2);
        printf("Código: %s\n", carta2);
        printf("Nome da Cidade: %s\n", cidade2);
        printf("População: %6.3fkm²\n", populacao2);
        printf("Área: %5.1f\n", area2);
        printf("PIB: %6.3f\n", pib2);
        printf("Pontos turísticos: %i\n", pturisticos2);




        return 0;




    }