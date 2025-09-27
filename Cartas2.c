#include <stdio.h>

typedef struct {
    char estado[3];
    char codigo[4];
    char nome[50];
    unsigned long int populacao;
    float area;
    float pib;
    int pontos_turisticos;
    float densidade;
    float pib_per_capita;
    float super_poder;
} Carta;

// Função para calcular atributos derivados
void calcular_atributos(Carta *c) {
    c->densidade = (float)c->populacao / c->area;
    c->pib_per_capita = c->pib * 1000000000.0 / (float)c->populacao; 
    // PIB é em bilhões -> converte para unidade

    // Super Poder: soma de todos atributos numéricos + inverso da densidade
    c->super_poder = (float)c->populacao
                   + c->area
                   + c->pib
                   + (float)c->pontos_turisticos
                   + c->pib_per_capita
                   + (1.0f / c->densidade);
}

// Função de comparação (retorna 1 se carta1 vence, 0 se carta2 vence)
int comparar(float valor1, float valor2, int menor_vence) {
    if (menor_vence) {
        return valor1 < valor2; // menor vence
    } else {
        return valor1 > valor2; // maior vence
    }
}

int main() {
    Carta c1, c2;

    printf("Digite os dados da Carta 1:\n");
    printf("Estado: ");
    scanf("%s", c1.estado);
    printf("Código: ");
    scanf("%s", c1.codigo);
    printf("Nome: ");
    scanf(" %[^\n]", c1.nome);
    printf("População: ");
    scanf("%lu", &c1.populacao);
    printf("Área (km²): ");
    scanf("%f", &c1.area);
    printf("PIB (em bilhões): ");
    scanf("%f", &c1.pib);
    printf("Número de pontos turísticos: ");
    scanf("%d", &c1.pontos_turisticos);

    calcular_atributos(&c1);

    printf("\nDigite os dados da Carta 2:\n");
    printf("Estado: ");
    scanf("%s", c2.estado);
    printf("Código: ");
    scanf("%s", c2.codigo);
    printf("Nome: ");
    scanf(" %[^\n]", c2.nome);
    printf("População: ");
    scanf("%lu", &c2.populacao);
    printf("Área (km²): ");
    scanf("%f", &c2.area);
    printf("PIB (em bilhões): ");
    scanf("%f", &c2.pib);
    printf("Número de pontos turísticos: ");
    scanf("%d", &c2.pontos_turisticos);

    calcular_atributos(&c2);

    printf("\n=== Comparação de Cartas ===\n");

    printf("População: Carta %d venceu (%d)\n", 
        comparar(c1.populacao, c2.populacao, 0) ? 1 : 2,
        comparar(c1.populacao, c2.populacao, 0));

    printf("Área: Carta %d venceu (%d)\n", 
        comparar(c1.area, c2.area, 0) ? 1 : 2,
        comparar(c1.area, c2.area, 0));

    printf("PIB: Carta %d venceu (%d)\n", 
        comparar(c1.pib, c2.pib, 0) ? 1 : 2,
        comparar(c1.pib, c2.pib, 0));

    printf("Pontos Turísticos: Carta %d venceu (%d)\n", 
        comparar(c1.pontos_turisticos, c2.pontos_turisticos, 0) ? 1 : 2,
        comparar(c1.pontos_turisticos, c2.pontos_turisticos, 0));

    printf("Densidade Populacional: Carta %d venceu (%d)\n", 
        comparar(c1.densidade, c2.densidade, 1) ? 1 : 2,
        comparar(c1.densidade, c2.densidade, 1));

    printf("PIB per Capita: Carta %d venceu (%d)\n", 
        comparar(c1.pib_per_capita, c2.pib_per_capita, 0) ? 1 : 2,
        comparar(c1.pib_per_capita, c2.pib_per_capita, 0));

    printf("Super Poder: Carta %d venceu (%d)\n", 
        comparar(c1.super_poder, c2.super_poder, 0) ? 1 : 2,
        comparar(c1.super_poder, c2.super_poder, 0));

    return 0;
}


