#include <stdio.h>

int main() {
    // Carta A
    char nome_cidade[20];
    char estado;
    int populacao, pontos_turisticos;
    float area, pib;

    // Carta B
    char nome_cidadeB[20];
    char estadoB;
    int populacaoB, pontos_turisticosB;
    float areaB, pibB;

    int escolha;

    // Entrada Carta A
    printf("Digite as informações da Carta A abaixo:\n");
    printf("Estado: ");
    scanf(" %c", &estado);
    printf("Nome da cidade: ");
    scanf(" %s", nome_cidade);
    printf("População: ");
    scanf(" %d", &populacao);
    printf("PIB: ");
    scanf(" %f", &pib);
    printf("Área: ");
    scanf(" %f", &area);
    printf("Pontos turísticos: ");
    scanf(" %d", &pontos_turisticos);

    // Entrada Carta B
    printf("\nDigite as informações da Carta B abaixo:\n");
    printf("Estado: ");
    scanf(" %c", &estadoB);
    printf("Nome da cidade: ");
    scanf(" %s", nome_cidadeB);
    printf("População: ");
    scanf(" %d", &populacaoB);
    printf("PIB: ");
    scanf(" %f", &pibB);
    printf("Área: ");
    scanf(" %f", &areaB);
    printf("Pontos turísticos: ");
    scanf(" %d", &pontos_turisticosB);

    // Escolha do atributo para comparar
    printf("\nEscolha o atributo para comparar:\n");
    printf("1 - População\n");
    printf("2 - PIB\n");
    printf("3 - Área\n");
    printf("4 - Pontos turísticos\n");
    printf("Digite sua escolha: ");
    scanf("%d", &escolha);

    printf("\nComparando...\n");

    switch (escolha) {
        case 1:
            printf("População A: %d | População B: %d\n", populacao, populacaoB);
            if (populacao > populacaoB) {
                printf("Carta A venceu!\n");
            } else if (populacao < populacaoB) {
                printf("Carta B venceu!\n");
            } else {
                printf("Empate!\n");
            }
            break;
        case 2:
            printf("PIB A: %.2f | PIB B: %.2f\n", pib, pibB);
            if (pib > pibB) {
                printf("Carta A venceu!\n");
            } else if (pib < pibB) {
                printf("Carta B venceu!\n");
            } else {
                printf("Empate!\n");
            }
            break;
        case 3:
            printf("Área A: %.2f | Área B: %.2f\n", area, areaB);
            if (area > areaB) {
                printf("Carta A venceu!\n");
            } else if (area < areaB) {
                printf("Carta B venceu!\n");
            } else {
                printf("Empate!\n");
            }
            break;
        case 4:
            printf("Pontos turísticos A: %d | Pontos turísticos B: %d\n", pontos_turisticos, pontos_turisticosB);
            if (pontos_turisticos > pontos_turisticosB) {
                printf("Carta A venceu!\n");
            } else if (pontos_turisticos < pontos_turisticosB) {
                printf("Carta B venceu!\n");
            } else {
                printf("Empate!\n");
            }
            break;
        default:
            printf("Opção inválida!\n");
        
        
    }
    return 0;
}

