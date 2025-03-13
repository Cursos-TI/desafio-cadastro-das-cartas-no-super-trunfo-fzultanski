#include <stdio.h>

int main() {
    // Variaveis da carta 1
    char cd_estado_1, cd_carta_1[3], nm_cidade_1[25];
    int nr_populacao_1, nr_ponto_turistico_1;
    float nr_area_1, vl_pib_1, nr_densidade_1, vl_pib_per_capita_1;

    // Variaveis da carta 2
    char cd_estado_2, cd_carta_2[3], nm_cidade_2[25];
    int nr_populacao_2, nr_ponto_turistico_2;
    float nr_area_2, vl_pib_2, nr_densidade_2, vl_pib_per_capita_2;

    printf("BEM VINDO AO SUPER TRUNFO!\n\n");
    printf("Digite as Informações da CARTA 1:\n\n");

    // Leitura das informacoes da carta 1 do teclado
    printf("Código do Estado:\n");
    scanf(" %c", &cd_estado_1);

    printf("Código da Carta:\n");
    scanf("%s", cd_carta_1);

    printf("Nome da Cidade:\n");
    scanf("%s", nm_cidade_1);

    printf("População:\n");
    scanf("%d", &nr_populacao_1);

    printf("Área:\n");
    scanf("%f", &nr_area_1);

    printf("Valor do PIB:\n");
    scanf("%f", &vl_pib_1);

    printf("Número do Pontos Turísticos:\n");
    scanf("%d", &nr_ponto_turistico_1);

    printf("Digite as Informações da CARTA 2:\n\n");

    // Leitura das informacoes da carta 2 do teclado
    printf("Código do Estado:\n");
    scanf(" %c", &cd_estado_2);

    printf("Código da Carta:\n");
    scanf("%s", cd_carta_2);

    printf("Nome da Cidade:\n");
    scanf("%s", nm_cidade_2);

    printf("População:\n");
    scanf("%d", &nr_populacao_2);

    printf("Área:\n");
    scanf("%f", &nr_area_2);

    printf("Valor do PIB:\n");
    scanf("%f", &vl_pib_2);

    printf("Número do Pontos Turísticos:\n");
    scanf("%d", &nr_ponto_turistico_2);

    // Calcula densidade populacional das cartas
    nr_densidade_1 = (float) nr_area_1 / nr_populacao_1;
    nr_densidade_2 = (float) nr_area_2 / nr_populacao_2;

    // Calcula PIB per capita das cartas
    vl_pib_per_capita_1 = (float) vl_pib_1 / nr_populacao_1;
    vl_pib_per_capita_2 = (float) vl_pib_2 / nr_populacao_2;

    // Exibicao das informacoes da carta 1
    printf("\nCARTA 1\n");
    printf("Estado.....................: %c\n", cd_estado_1);
    printf("Código.....................: %s\n", cd_carta_1);
    printf("Nome da Cidade.............: %s\n", nm_cidade_1);
    printf("População..................: %d\n", nr_populacao_1);
    printf("Área.......................: %.2f km²\n", nr_area_1);
    printf("PIB........................: %.2f bilhões de reais\n", vl_pib_1);
    printf("Número de Pontos Turísticos: %d\n", nr_ponto_turistico_1);
    printf("Densidade Populacional.....: %.2f hab/km²\n", nr_densidade_1);
    printf("PIB per Capita.............: %.2f reais\n", vl_pib_per_capita_1);

    // Exibicao das informacoes da carta 2
    printf("\nCARTA 2\n");
    printf("Estado.....................: %c\n", cd_estado_2);
    printf("Código.....................: %s\n", cd_carta_2);
    printf("Nome da Cidade.............: %s\n", nm_cidade_2);
    printf("População..................: %d\n", nr_populacao_2);
    printf("Área.......................: %.2f km²\n", nr_area_2);
    printf("PIB........................: %.2f bilhões de reais\n", vl_pib_2);
    printf("Número de Pontos Turísticos: %d\n", nr_ponto_turistico_2);
    printf("Densidade Populacional.....: %.2f hab/km²\n", nr_densidade_2);
    printf("PIB per Capita.............: %.2f reais\n\n", vl_pib_per_capita_2);

    return 0;
}
