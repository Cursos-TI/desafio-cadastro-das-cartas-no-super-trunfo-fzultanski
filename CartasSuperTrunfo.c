#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    // Variaveis da carta 1
    char cd_estado_1, cd_carta_1[3], nm_cidade_1[25];
    int nr_populacao_1, nr_ponto_turistico_1;
    float nr_area_1, vl_pib_1;

    // Variaveis da carta 2
    char cd_estado_2, cd_carta_2[3], nm_cidade_2[25];
    int nr_populacao_2, nr_ponto_turistico_2;
    float nr_area_2, vl_pib_2;

    printf("~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * \n\n");

    printf("BEM VINDO AO SUPER TRUNFO!\n\n");
    printf("Digite as Informações da CARTA 1:\n\n");

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

    printf("\nCARTA 1\n");
    printf("Estado.....................: %c\n", cd_estado_1);
    printf("Código.....................: %s\n", cd_carta_1);
    printf("Nome da Cidade.............: %s\n", nm_cidade_1);
    printf("População..................: %d\n", nr_populacao_1);
    printf("Área.......................: %f\n", nr_area_1);
    printf("PIB........................: %f\n", vl_pib_1);
    printf("Número de Pontos Turísticos: %d\n\n", nr_ponto_turistico_1);

    printf("Digite as Informações da CARTA 2:\n\n");

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

    printf("\nCARTA 2\n");
    printf("Estado.....................: %c\n", cd_estado_2);
    printf("Código.....................: %s\n", cd_carta_2);
    printf("Nome da Cidade.............: %s\n", nm_cidade_2);
    printf("População..................: %d\n", nr_populacao_2);
    printf("Área.......................: %f\n", nr_area_2);
    printf("PIB........................: %f\n", vl_pib_2);
    printf("Número de Pontos Turísticos: %d\n\n", nr_ponto_turistico_2);

    printf("~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * ~ * \n\n");

    return 0;
}
