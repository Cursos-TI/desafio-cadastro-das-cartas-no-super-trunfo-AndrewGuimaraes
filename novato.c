#include <stdio.h>

// Estrutura para armazenar as informações de cada carta
typedef struct {
    char estado;           // Estado (A a H)
    char codigo[5];        // Código da carta (ex: A01, B03)
    char cidade[50];       // Nome da cidade
    int populacao;         // População da cidade
    float area;            // Área da cidade em km²
    float pib;             // PIB da cidade em bilhões de reais
    int pontosTuristicos;  // Número de pontos turísticos na cidade
} Carta;

void lerCarta(Carta *c) {
    // Solicita e lê as informações para uma carta
    printf("Digite o estado (A a H): ");
    scanf(" %c", &c->estado);  // O espaço antes de %c é necessário para ignorar qualquer caractere de nova linha residual
    
    printf("Digite o código da carta (ex: A01, B03): ");
    scanf("%s", c->codigo);
    
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", c->cidade);  // Lê uma string com espaços
    
    printf("Digite a população da cidade: ");
    scanf("%d", &c->populacao);
    
    printf("Digite a área da cidade em km²: ");
    scanf("%f", &c->area);
    
    printf("Digite o PIB da cidade (em bilhões de reais): ");
    scanf("%f", &c->pib);
    
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &c->pontosTuristicos);
}

void exibirCarta(int numero, Carta c) {
    // Exibe as informações de uma carta de forma organizada
    printf("\nCarta %d:\n", numero);
    printf("Estado: %c\n", c.estado);
    printf("Código: %s\n", c.codigo);
    printf("Nome da Cidade: %s\n", c.cidade);
    printf("População: %d\n", c.populacao);
    printf("Área: %.2f km²\n", c.area);
    printf("PIB: %.2f bilhões de reais\n", c.pib);
    printf("Número de Pontos Turísticos: %d\n", c.pontosTuristicos);
}

int main() {
    Carta carta1, carta2;
    
    // Lê as duas cartas
    printf("Digite as informações para a Carta 1:\n");
    lerCarta(&carta1);
    
    printf("\nDigite as informações para a Carta 2:\n");
    lerCarta(&carta2);
    
    // Exibe as informações das duas cartas
    exibirCarta(1, carta1);
    exibirCarta(2, carta2);
    
    return 0;
}
